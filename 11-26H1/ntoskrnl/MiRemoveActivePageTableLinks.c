/*
 * XREFs of MiRemoveActivePageTableLinks @ 0x1402CE8C0
 * Callers:
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     MiRebuildPageTableAges @ 0x14029D740 (MiRebuildPageTableAges.c)
 *     MiRemoveWsleList @ 0x1402CC5B0 (MiRemoveWsleList.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1402CCE50 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiAddWorkingSetEntries @ 0x1402CDB00 (MiAddWorkingSetEntries.c)
 *     MiLockActivePageTableInList @ 0x1404867B4 (MiLockActivePageTableInList.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRevertPfnActivePageTable @ 0x140462130 (MiRevertPfnActivePageTable.c)
 */

__int64 __fastcall MiRemoveActivePageTableLinks(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(_QWORD *)(a1 + 16) + 24 * ((*(_QWORD *)a2 >> 59) & 7LL);
  if ( !a3 )
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 80));
  --*(_DWORD *)(v5 + 84);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = v6 & 0xFFFFFFFFFFLL;
  if ( *(_QWORD *)(v5 + 88) == a2 )
  {
    if ( v7 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v5 + 88) = 0LL;
      *(_QWORD *)(v5 + 96) = 0LL;
    }
    else
    {
      v12 = 48 * v7 - 0x220000000000LL;
      *(_QWORD *)(v5 + 88) = v12;
      *(_QWORD *)(v12 + 16) |= 0xFFFFFF0000000000uLL;
      *(_DWORD *)(v12 + 36) |= 0xFFFFu;
    }
  }
  else
  {
    v8 = (v6 >> 24) & 0xFFFFFF0000LL | (unsigned __int16)*(_DWORD *)(a2 + 36);
    v9 = 48 * v8 - 0x220000000000LL;
    *(_QWORD *)(v9 + 16) = v6 ^ (v6 ^ *(_QWORD *)(v9 + 16)) & 0xFFFFFF0000000000uLL;
    if ( v7 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v5 + 96) = v9;
    }
    else
    {
      v11 = 48 * v7 - 0x220000000000LL;
      *(_QWORD *)(v11 + 16) ^= (*(_QWORD *)(v11 + 16) ^ (v8 << 24)) & 0xFFFFFF0000000000uLL;
      *(_DWORD *)(v11 + 36) = v8 ^ (*(_DWORD *)(v11 + 36) ^ v8) & 0xFFFF0000;
    }
  }
  if ( !a3 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)(v5 + 80) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v5 + 80), retaddr);
  }
  return MiRevertPfnActivePageTable(a2);
}
