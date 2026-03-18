/*
 * XREFs of EtwpAllocateFreeBuffers @ 0x1402199DC
 * Callers:
 *     EtwpSwitchBuffer @ 0x140219160 (EtwpSwitchBuffer.c)
 *     EtwpAdjustFreeBuffers @ 0x140A1466C (EtwpAdjustFreeBuffers.c)
 *     EtwpAllocateTraceBufferPool @ 0x140A6D988 (EtwpAllocateTraceBufferPool.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1402195F8 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpUnlockBufferList @ 0x140219C44 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x140219CD0 (EtwpLockBufferList.c)
 *     EtwpInitializeBufferHeader @ 0x1404B4F84 (EtwpInitializeBufferHeader.c)
 *     EtwpAllocateTraceBuffer @ 0x1404BCFC4 (EtwpAllocateTraceBuffer.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateFreeBuffers(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned __int32 v5; // edi
  unsigned int *TraceBuffer; // r14
  _QWORD *Pool2; // r15
  unsigned __int32 v9; // eax
  _QWORD *v10; // rcx
  char v11; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v11 = 0;
  while ( 1 )
  {
    if ( v2 >= a2 )
      goto LABEL_5;
    v5 = _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 232));
    if ( v5 > *(_DWORD *)(BugCheckParameter2 + 236) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 232));
LABEL_5:
      _InterlockedAdd(
        (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter2 + 1360)
                                  + 4LL * (*(_DWORD *)(BugCheckParameter2 + 300) & 1)
                                  + 4396),
        *(_DWORD *)(BugCheckParameter2 + 4) * v2);
      return v2;
    }
    TraceBuffer = (unsigned int *)EtwpAllocateTraceBuffer(BugCheckParameter2);
    if ( !TraceBuffer )
      goto LABEL_8;
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      break;
    while ( 1 )
    {
      v9 = *(_DWORD *)(BugCheckParameter2 + 244);
      if ( v9 >= v5 )
        break;
      _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 244), v5, v9);
    }
    EtwpInitializeBufferHeader(BugCheckParameter2, TraceBuffer);
    Pool2[2] = TraceBuffer;
    EtwpLockBufferList(BugCheckParameter2, &v11);
    v10 = *(_QWORD **)(BugCheckParameter2 + 88);
    if ( *v10 != BugCheckParameter2 + 80 )
      __fastfail(3u);
    Pool2[1] = v10;
    *Pool2 = BugCheckParameter2 + 80;
    *v10 = Pool2;
    *(_QWORD *)(BugCheckParameter2 + 88) = Pool2;
    EtwpUnlockBufferList(BugCheckParameter2, &v11);
    EtwpEnqueueAvailableBuffer(BugCheckParameter2, TraceBuffer, 0);
    ++v2;
  }
  ExFreePoolWithTag(TraceBuffer, 0);
LABEL_8:
  _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 232));
  return v2;
}
