/*
 * XREFs of MiComputeHardAgingPercent @ 0x1404B1DCC
 * Callers:
 *     MiWalkAllHardLimitWorkingSets @ 0x1402A996C (MiWalkAllHardLimitWorkingSets.c)
 *     MiAgeWorkingSet @ 0x1402FD0D0 (MiAgeWorkingSet.c)
 *     MiAgeTargetedWorkingSet @ 0x140476D30 (MiAgeTargetedWorkingSet.c)
 *     MiUpdateAgeDistribution @ 0x1404860CC (MiUpdateAgeDistribution.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiComputeHardTrimSize @ 0x1402ED1E8 (MiComputeHardTrimSize.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiComputeAgingPercent @ 0x1404B0638 (MiComputeAgingPercent.c)
 *     MiUpdateTrimPrediction @ 0x1404B366C (MiUpdateTrimPrediction.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

unsigned __int64 __fastcall MiComputeHardAgingPercent(__int64 a1, int a2)
{
  unsigned int v4; // esi
  __int64 v5; // r14
  __int64 v6; // rdi
  _OWORD *v7; // r13
  volatile LONG *v8; // rbx
  volatile LONG *v9; // rcx
  KIRQL v10; // r14
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 updated; // r10
  _QWORD *v18; // r9
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v23; // [rsp+28h] [rbp-89h]
  _BYTE v24[64]; // [rsp+38h] [rbp-79h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp-39h]
  _OWORD v26[5]; // [rsp+88h] [rbp-29h] BYREF

  memset_0(v26, 0, sizeof(v26));
  memset_0(v24, 0, 0x50uLL);
  v4 = 0;
  v5 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
  v23 = v5;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL);
  if ( (a2 & 0x20000) != 0 )
  {
    v7 = (_OWORD *)(v6 + 24);
  }
  else
  {
    v8 = (volatile LONG *)(v5 + 21384);
    v7 = v26;
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
    v26[0] = *(_OWORD *)(v6 + 24);
    v26[1] = v11;
    v12 = *(_OWORD *)(v6 + 72);
    v26[2] = *(_OWORD *)(v6 + 56);
    v26[3] = v12;
    v26[4] = *(_OWORD *)(v6 + 88);
    if ( a2 || v10 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(v8);
    else
      ExReleaseSpinLockShared(v8, v10);
    v5 = v23;
  }
  v13 = *(_QWORD *)(a1 + 128);
  v14 = *(_QWORD *)(a1 + 136);
  v15 = MiComputeHardTrimSize(v13, 0x5Au, 0x64u);
  updated = MiUpdateTrimPrediction(v7, (v13 - v14) & -(__int64)(v14 < v13), v13 - v15);
  v18 = v24;
  v19 = a1 - (_QWORD)v24;
  do
  {
    v20 = *(_QWORD *)((char *)v18 + v19 + 56);
    *v18 = v20;
    if ( v4 >= 6 )
    {
      v21 = v20 + v25;
      if ( v20 + v25 < v25 )
        v21 = -1LL;
      v25 = v21;
    }
    ++v4;
    ++v18;
  }
  while ( v4 < 8 );
  return MiComputeAgingPercent(v5, updated, v16, (__int64)v24);
}
