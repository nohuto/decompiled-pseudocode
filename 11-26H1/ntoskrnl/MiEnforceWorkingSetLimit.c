/*
 * XREFs of MiEnforceWorkingSetLimit @ 0x1402F0258
 * Callers:
 *     MmEnforceWorkingSetLimit @ 0x140B023A4 (MmEnforceWorkingSetLimit.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkHardLimitWorkingSet @ 0x1402EFB08 (MiUnlinkHardLimitWorkingSet.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiInsertHardLimitWorkingSet @ 0x1403C7B7C (MiInsertHardLimitWorkingSet.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiEnforceWorkingSetLimit(__int64 a1, __int64 a2)
{
  __int64 PoolMm; // rbx
  __int64 v3; // r8
  void *v4; // r15
  unsigned int v5; // r13d
  char v6; // r14
  __int64 v8; // r12
  char v9; // bp
  char v10; // si
  char v11; // bl
  BOOL v12; // r14d
  __int64 v14; // r9
  char v15; // r10
  int v16; // [rsp+60h] [rbp+8h]
  KIRQL v17; // [rsp+68h] [rbp+10h]

  PoolMm = 0LL;
  v3 = *(unsigned __int16 *)(a1 + 174);
  v4 = 0LL;
  v5 = 0;
  v6 = a2;
  v8 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v3);
  if ( (a2 & 1) != 0 && !*(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL) )
  {
    v14 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
    LODWORD(v14) = v14 | 0x80000000;
    PoolMm = ExAllocatePoolMm(64LL, 104LL, 1682467149LL, v14);
    if ( !PoolMm )
      return 3221225626LL;
  }
  v9 = 0;
  if ( (v6 & 4) != 0 )
    v9 = 32;
  v10 = v6 & 0xF7;
  if ( (v6 & 4) == 0 )
    v10 = v6;
  if ( (v10 & 1) != 0 )
  {
    v10 &= ~2u;
    v9 = (v6 & 4) != 0 ? 48 : 16;
  }
  v17 = MiLockWorkingSetExclusive(a1, a2, v3);
  if ( PoolMm )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL) )
      v4 = (void *)PoolMm;
    else
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL) = PoolMm;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v8 + 21384));
  v16 = *(_DWORD *)(a1 + 184);
  v11 = v16;
  if ( (v10 & 8) != 0 )
    v11 = v16 & 0xDF;
  v12 = (v10 & 8) != 0;
  if ( (v10 & 2) != 0 )
  {
    v11 &= ~0x10u;
    v12 = 1;
  }
  if ( (v11 & 0x20) != 0 )
    v9 |= 0x20u;
  if ( (v11 & 0x10) != 0 )
    v9 |= 0x10u;
  if ( (v9 & 0x30) == 0x30 && (unsigned __int64)(*(_QWORD *)(a1 + 120) + 6LL) >= *(_QWORD *)(a1 + 128) )
  {
    v5 = -1073741748;
    v10 &= 0xFAu;
  }
  if ( (v10 & 4) != 0 )
  {
    v11 |= 0x20u;
    v12 = 1;
  }
  if ( (v10 & 1) != 0 )
  {
    MiInsertHardLimitWorkingSet(a1);
    v11 |= v15;
    v12 = 1;
  }
  if ( (v10 & 2) != 0 )
    MiUnlinkHardLimitWorkingSet(a1);
  if ( v12 )
    *(_BYTE *)(a1 + 184) = v11;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 21384));
  MiUnlockWorkingSetExclusive(a1, v17);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}
