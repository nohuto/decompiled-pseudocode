/*
 * XREFs of HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x140359080
 * Callers:
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x140358E20 (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromContiguousPoolV2(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        char a4,
        char a5,
        ULONG *a6)
{
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // r15
  ULONG v12; // ebx
  ULONG i; // r8d
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 result; // rax
  _RTL_BITMAP *v18; // rbx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  ULONG v21; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 128), &LockHandle);
  if ( a5 )
  {
    v19 = *(_DWORD *)(a2 + 212);
    v9 = a2;
    v20 = *(_DWORD *)(a2 + 208);
    if ( v20 <= v19 )
    {
LABEL_20:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_15:
      *a6 = 0;
      return 0LL;
    }
    v21 = v20 - v19;
    if ( a3 > v21 )
      a3 = v21;
  }
  if ( a4 )
  {
    v18 = *(_RTL_BITMAP **)(a2 + 24);
    if ( v18->SizeOfBitMap - RtlNumberOfSetBits(v18) < a3 )
      goto LABEL_20;
  }
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  for ( i = 0; v12 < a3; v11 = v14 )
  {
    i = RtlFindClearBitsAndSet(*(PRTL_BITMAP *)(a2 + 24), 1u, i);
    if ( i == -1 )
      break;
    v14 = *(_QWORD *)(a2 + 48);
    v15 = i;
    while ( v14 )
    {
      v16 = *(_DWORD *)(v14 + 8);
      if ( (unsigned int)v15 < v16 )
      {
        v14 = *(_QWORD *)(v14 + 16) + 72 * v15;
        break;
      }
      v14 = *(_QWORD *)v14;
      v15 = (unsigned int)v15 - v16;
    }
    if ( v10 )
      *(_QWORD *)(v11 + 8) = v14;
    else
      v10 = v14;
    ++v12;
  }
  if ( a5 )
    *(_DWORD *)(v9 + 208) -= v12;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v12 )
    goto LABEL_15;
  result = v10;
  *a6 = v12;
  return result;
}
