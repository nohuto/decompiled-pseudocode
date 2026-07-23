/*
 * XREFs of HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x140511D00
 * Callers:
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x140358E20 (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 *     HalpDmaIndexToTranslationEntry @ 0x1404C4800 (HalpDmaIndexToTranslationEntry.c)
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromContiguousPoolV3(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        char a4,
        char a5,
        ULONG *a6)
{
  __int64 v9; // r15
  unsigned int v10; // ecx
  unsigned int v11; // eax
  ULONG v12; // eax
  _RTL_BITMAP *v13; // rbx
  __int64 result; // rax
  __int64 v15; // r14
  __int64 v16; // rdi
  ULONG v17; // ebx
  ULONG v18; // r10d
  ULONG ClearBitsAndSet; // eax
  __int64 v20; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 128), &LockHandle);
  if ( a5 )
  {
    v10 = *(_DWORD *)(a2 + 212);
    v9 = a2;
    v11 = *(_DWORD *)(a2 + 208);
    if ( v11 <= v10 )
    {
LABEL_7:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_8:
      *a6 = 0;
      return 0LL;
    }
    v12 = v11 - v10;
    if ( a3 > v12 )
      a3 = v12;
  }
  if ( a4 )
  {
    v13 = *(_RTL_BITMAP **)(a2 + 24);
    if ( v13->SizeOfBitMap - RtlNumberOfSetBits(v13) < a3 )
      goto LABEL_7;
  }
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  if ( a3 )
  {
    do
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(*(PRTL_BITMAP *)(a2 + 24), 1u, v18);
      if ( ClearBitsAndSet == -1 )
        break;
      v20 = HalpDmaIndexToTranslationEntry(a2, ClearBitsAndSet, 0LL);
      if ( v15 )
        *(_QWORD *)(v16 + 8) = v20;
      else
        v15 = v20;
      ++v17;
      v16 = v20;
    }
    while ( v17 < a3 );
    if ( v16 )
      *(_QWORD *)(v16 + 8) = 0LL;
  }
  if ( a5 )
    *(_DWORD *)(v9 + 208) -= v17;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v17 )
    goto LABEL_8;
  result = v15;
  *a6 = v17;
  return result;
}
