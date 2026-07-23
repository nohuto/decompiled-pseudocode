/*
 * XREFs of HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x140511E84
 * Callers:
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1403592EC (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     HalpDmaLinkContiguousTranslations @ 0x140358E78 (HalpDmaLinkContiguousTranslations.c)
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall HalpDmaAllocateContiguousPagesFromContiguousPoolV3(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        char a4,
        char a5,
        ULONG *a6)
{
  __int64 v9; // rbp
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 result; // rax
  ULONG v13; // eax
  ULONG ClearBitsAndSet; // edi
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

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
      KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_4:
      *a6 = 0;
      return 0LL;
    }
    v13 = v11 - v10;
    if ( a3 > v13 )
      a3 = v13;
  }
  ClearBitsAndSet = -1;
  if ( a3 )
  {
    while ( 1 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(*(PRTL_BITMAP *)(a2 + 24), a3, 0);
      if ( ClearBitsAndSet != -1 )
        break;
      if ( !a4 )
      {
        a3 >>= 1;
        if ( a3 )
          continue;
      }
      goto LABEL_14;
    }
    if ( a5 )
      *(_DWORD *)(v9 + 208) -= a3;
  }
LABEL_14:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( ClearBitsAndSet == -1 )
    goto LABEL_4;
  result = HalpDmaLinkContiguousTranslations(a2, ClearBitsAndSet, a3);
  v15 = 0LL;
  v16 = result;
  if ( a3 )
  {
    v17 = a3;
    do
    {
      v15 = v16;
      v16 = *(_QWORD *)(v16 + 8);
      --v17;
    }
    while ( v17 );
  }
  *(_QWORD *)(v15 + 8) = 0LL;
  *a6 = a3;
  return result;
}
