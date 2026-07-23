/*
 * XREFs of MiInsertPageLockBadList @ 0x1404DF030
 * Callers:
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiClearPfnImageVerified @ 0x1404691E4 (MiClearPfnImageVerified.c)
 *     MiBadPageInserted @ 0x1404DBB6C (MiBadPageInserted.c)
 *     MiSetPfnRemovalRequested @ 0x1406F6A08 (MiSetPfnRemovalRequested.c)
 */

void __fastcall MiInsertPageLockBadList(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v5; // rbp

  v3 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(a2 + 32) & 0x40000000) != 0 )
    MiSetPfnRemovalRequested(a2, 0LL, 0LL);
  if ( (*(_DWORD *)(a1 + 4) & 0x100) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 32));
    *(_QWORD *)(a2 + 8) = -8LL;
  }
  else
  {
    MiClearPfnImageVerified(a2, 12LL);
    v3 = v5 + 7424;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 7456));
    *(_QWORD *)(a2 + 8) = -4LL;
    if ( (ULONG *)v5 == &MiSystemPartition )
      MiBadPageInserted(1);
    else
      *(_DWORD *)a1 |= 8u;
  }
  *(_QWORD *)(a1 + 24) = v3;
}
