/*
 * XREFs of MiComputeAgingAmount @ 0x1402E0730
 * Callers:
 *     MiAgeWorkingSet @ 0x1402DF150 (MiAgeWorkingSet.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402E0830 (MiLockWorkingSetCoreExclusive.c)
 */

unsigned __int64 __fastcall MiComputeAgingAmount(__int64 a1, unsigned __int64 a2, char a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v6; // r14
  __int64 v9; // rdi
  _DWORD *v10; // rcx
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 16);
  v6 = a4;
  MiLockWorkingSetCoreExclusive(a1);
  v9 = *(unsigned int *)(v4 + 2 * (~a3 & 2 | 0xCLL));
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v10 = &unk_140E379C0;
  else
    v10 = (_DWORD *)(a1 + 256);
  v11 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    *v10 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
  if ( v9 + a2 >= a2 )
    v11 = v9;
  v12 = v6 * (a2 + v11) / 0x3E8;
  if ( v12 <= a2 )
    return v12;
  v13 = (a2 * v6 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  return (v13 + ((a2 * v6 - v13) >> 1)) >> 9;
}
