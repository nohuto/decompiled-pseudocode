/*
 * XREFs of MiInsertActivePageTableLinksTail @ 0x1402CE660
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
 */

__int64 __fastcall MiInsertActivePageTableLinksTail(__int64 a1, __int64 a2, unsigned __int8 a3, int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  __int64 result; // rax
  unsigned __int64 v12; // rcx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0
    || (v12 = (__int64)(*(_QWORD *)(a2 + 8) << 25) >> 16 << 25 >> 16, v12 < 0xFFFFF68000000000uLL)
    || (result = 0xFFFFF6FFFFFFFFFFuLL, v12 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v7 = *(_QWORD *)(a1 + 16) + 24LL * a3;
    if ( (*(_DWORD *)(a2 + 36) & 0x4000000) != 0 )
      v8 = *(_QWORD *)a2 >> 36;
    else
      v8 = *(_QWORD *)(a2 + 16) >> 17;
    v9 = *(_DWORD *)(a2 + 36) | 0x4000000;
    *(_DWORD *)(a2 + 36) = v9;
    if ( (*(_DWORD *)(a2 + 36) & 0x4000000) != 0 )
      *(_QWORD *)a2 = ((unsigned __int64)(unsigned int)v8 << 36) ^ (*(_QWORD *)a2 ^ ((unsigned __int64)(unsigned int)v8 << 36)) & 0xFFFFC00FFFFFFFFFuLL;
    else
      *(_QWORD *)(a2 + 16) = ((unsigned __int64)(unsigned int)v8 << 17) ^ (*(_QWORD *)(a2 + 16) ^ ((unsigned __int64)(unsigned int)v8 << 17)) & 0xFFFFFFFFF801FFFFuLL;
    if ( !a4 )
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 80));
    v10 = *(_QWORD *)(v7 + 96);
    if ( v10 )
    {
      *(_QWORD *)(v10 + 16) = ((a2 + 0x220000000000LL) / 48) ^ (((a2 + 0x220000000000LL) / 48) ^ *(_QWORD *)(v10 + 16)) & 0xFFFFFF0000000000uLL;
      *(_QWORD *)(a2 + 16) = ((((v10 + 0x220000000000LL) / 48) & 0xFFFFFFFFFFFF3FFFuLL) << 24) | 0x3FFFFFFFFFLL;
      *(_DWORD *)(a2 + 36) = ((v10 + 0x220000000000LL) / 48) ^ (v9 ^ ((int)v10 / 48)) & 0xFFFF0000;
    }
    else
    {
      *(_QWORD *)(a2 + 16) = 0xFFFFFF3FFFFFFFFFuLL;
      *(_DWORD *)(a2 + 36) = v9 | 0xFFFF;
      *(_QWORD *)(v7 + 88) = a2;
    }
    *(_QWORD *)(v7 + 96) = a2;
    result = (unsigned int)(*(_DWORD *)(v7 + 84) + 1);
    *(_DWORD *)(v7 + 84) = result;
    if ( !a4 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
        || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
      {
        *(_DWORD *)(v7 + 80) = 0;
      }
      else
      {
        return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v7 + 80), retaddr);
      }
    }
  }
  return result;
}
