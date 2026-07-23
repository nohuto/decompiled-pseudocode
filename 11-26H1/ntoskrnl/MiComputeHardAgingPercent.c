/*
 * XREFs of MiComputeHardAgingPercent @ 0x1404AB228
 * Callers:
 *     MiWalkAllHardLimitWorkingSets @ 0x1402A8D7C (MiWalkAllHardLimitWorkingSets.c)
 *     MiAgeWorkingSet @ 0x1402DF150 (MiAgeWorkingSet.c)
 *     MiAgeTargetedWorkingSet @ 0x1404704B0 (MiAgeTargetedWorkingSet.c)
 *     MiUpdateAgeDistribution @ 0x14047FA3C (MiUpdateAgeDistribution.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiComputeHardTrimSize @ 0x1402CF228 (MiComputeHardTrimSize.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiComputeAgingPercent @ 0x1404A9CC8 (MiComputeAgingPercent.c)
 *     MiUpdateTrimPrediction @ 0x14052046C (MiUpdateTrimPrediction.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall MiComputeHardAgingPercent(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // r14
  __int64 v6; // rsi
  _OWORD *v7; // r13
  volatile LONG *v8; // rbx
  volatile LONG *v9; // rcx
  KIRQL v10; // r14
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 updated; // r10
  _QWORD *v17; // r9
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v22; // [rsp+28h] [rbp-89h]
  _BYTE v23[64]; // [rsp+38h] [rbp-79h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-39h]
  _OWORD v25[5]; // [rsp+88h] [rbp-29h] BYREF

  memset_0(v25, 0, sizeof(v25));
  memset_0(v23, 0, 0x50uLL);
  v4 = 0;
  v5 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
  v22 = v5;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL);
  if ( (a2 & 0x20000) != 0 )
  {
    v7 = (_OWORD *)(v6 + 24);
  }
  else
  {
    v8 = (volatile LONG *)(v5 + 21384);
    v7 = v25;
    v9 = (volatile LONG *)(v5 + 21384);
    if ( a2 )
    {
      v10 = 17;
      ExAcquireSpinLockSharedAtDpcLevel(v9);
    }
    else
    {
      v10 = ExAcquireSpinLockShared(v9);
    }
    v11 = *(_OWORD *)(v6 + 40);
    v25[0] = *(_OWORD *)(v6 + 24);
    v25[1] = v11;
    v12 = *(_OWORD *)(v6 + 72);
    v25[2] = *(_OWORD *)(v6 + 56);
    v25[3] = v12;
    v25[4] = *(_OWORD *)(v6 + 88);
    if ( a2 || v10 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(v8);
    else
      ExReleaseSpinLockShared(v8, v10);
    v5 = v22;
  }
  v13 = *(_QWORD *)(a1 + 128);
  v14 = MiComputeHardTrimSize(v13, 0x5Au, 0x64u);
  v15 = v13 - v14;
  updated = MiUpdateTrimPrediction(
              v7,
              (v13 - *(_QWORD *)(a1 + 136)) & -(__int64)(*(_QWORD *)(a1 + 136) < v13),
              v13 - v14);
  v17 = v23;
  v18 = a1 - (_QWORD)v23;
  do
  {
    v19 = *(_QWORD *)((char *)v17 + v18 + 56);
    *v17 = v19;
    if ( v4 >= 6 )
    {
      v20 = v19 + v24;
      if ( v19 + v24 < v24 )
        v20 = -1LL;
      v24 = v20;
    }
    ++v4;
    ++v17;
  }
  while ( v4 < 8 );
  return MiComputeAgingPercent(v5, updated, v15, (__int64)v23);
}
