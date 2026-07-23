/*
 * XREFs of EtwpAllocateFreeBuffers @ 0x140219B3C
 * Callers:
 *     EtwpSwitchBuffer @ 0x1402192C0 (EtwpSwitchBuffer.c)
 *     EtwpAdjustFreeBuffers @ 0x140A1385C (EtwpAdjustFreeBuffers.c)
 *     EtwpAllocateTraceBufferPool @ 0x140AB272C (EtwpAllocateTraceBufferPool.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x140219758 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpUnlockBufferList @ 0x14021A2DC (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x14021B348 (EtwpLockBufferList.c)
 *     EtwpInitializeBufferHeader @ 0x1404AE3D4 (EtwpInitializeBufferHeader.c)
 *     EtwpAllocateTraceBuffer @ 0x1404B67A4 (EtwpAllocateTraceBuffer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
