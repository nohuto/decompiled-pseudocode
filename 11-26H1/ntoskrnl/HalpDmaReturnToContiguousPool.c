/*
 * XREFs of HalpDmaReturnToContiguousPool @ 0x14035B35C
 * Callers:
 *     HalpDmaReturnPageToOwner @ 0x14035B200 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaFreeMapRegisters @ 0x14035B5C0 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaReturnPageToSource @ 0x140534F0C (HalpDmaReturnPageToSource.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
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
