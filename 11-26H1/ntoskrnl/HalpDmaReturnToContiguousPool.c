/*
 * XREFs of HalpDmaReturnToContiguousPool @ 0x1403595BC
 * Callers:
 *     HalpDmaReturnPageToOwner @ 0x140359460 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaFreeMapRegisters @ 0x140359820 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaReturnPageToSource @ 0x140532A6C (HalpDmaReturnPageToSource.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlClearBits @ 0x1403591A0 (RtlClearBits.c)
 */

void __fastcall HalpDmaReturnToContiguousPool(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 *v3; // r9
  int v5; // r11d
  unsigned __int64 v7; // r8
  ULONG v8; // ebx
  unsigned __int8 CurrentIrql; // si
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(__int64 **)(a1 + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0;
  while ( v3 )
  {
    v7 = v3[2];
    if ( v7 <= a2 && a2 < v7 + 72LL * *((unsigned int *)v3 + 2) )
    {
      v8 = v5 + ((int)a2 - (int)v7) / 72;
      goto LABEL_6;
    }
    v5 += *((_DWORD *)v3 + 2);
    v3 = (__int64 *)*v3;
  }
  v8 = -1;
LABEL_6:
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  RtlClearBits(*(PRTL_BITMAP *)(a1 + 24), v8, 1u);
  if ( a3 )
    ++*(_DWORD *)(a1 + 208);
  if ( CurrentIrql != 15 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
