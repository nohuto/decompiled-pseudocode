/*
 * XREFs of MiObtainParkedCoreMasks @ 0x1402F6BD8
 * Callers:
 *     MiEvaluateProcessor @ 0x1402F6CF4 (MiEvaluateProcessor.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall MiObtainParkedCoreMasks(_OWORD *a1)
{
  KIRQL CurrentIrql; // si
  __int64 v3; // rdi
  _OWORD *v4; // rax
  __int128 v5; // xmm1
  _OWORD *v6; // rax
  __int128 v7; // xmm1

  CurrentIrql = KeGetCurrentIrql();
  v3 = 2LL;
  if ( CurrentIrql < 2u )
  {
    ExAcquireSpinLockShared(&dword_140E2D980);
    v6 = &unk_140E2D988;
    do
    {
      *a1 = *v6;
      a1[1] = v6[1];
      a1[2] = v6[2];
      a1[3] = v6[3];
      a1[4] = v6[4];
      a1[5] = v6[5];
      a1[6] = v6[6];
      a1 += 8;
      v7 = v6[7];
      v6 += 8;
      *(a1 - 1) = v7;
      --v3;
    }
    while ( v3 );
    *(_QWORD *)a1 = *(_QWORD *)v6;
    ExReleaseSpinLockShared(&dword_140E2D980, CurrentIrql);
  }
  else
  {
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2D980);
    v4 = &unk_140E2D988;
    do
    {
      *a1 = *v4;
      a1[1] = v4[1];
      a1[2] = v4[2];
      a1[3] = v4[3];
      a1[4] = v4[4];
      a1[5] = v4[5];
      a1[6] = v4[6];
      a1 += 8;
      v5 = v4[7];
      v4 += 8;
      *(a1 - 1) = v5;
      --v3;
    }
    while ( v3 );
    *(_QWORD *)a1 = *(_QWORD *)v4;
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2D980);
  }
}
