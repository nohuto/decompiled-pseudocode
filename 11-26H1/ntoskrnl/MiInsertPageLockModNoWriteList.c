/*
 * XREFs of MiInsertPageLockModNoWriteList @ 0x1404D9364
 * Callers:
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x1402836C0 (MiGetSubsectionFromPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiInsertPageLockModNoWriteList(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbp
  __int64 v5; // rbx

  v2 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)MiGetSubsectionFromPte(*(_QWORD *)(a2 + 16));
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 32));
  if ( (*(_DWORD *)(v5 + 56) & 0x20) != 0 || (*(_DWORD *)(v5 + 56) & 8) == 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 32));
    return 0LL;
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)((-(__int64)(*(__int64 *)(a2 + 40) < 0) & 0xFFFFFFFFFFFFDC80uLL)
                                                      + v4
                                                      + 16704));
    return 1LL;
  }
}
