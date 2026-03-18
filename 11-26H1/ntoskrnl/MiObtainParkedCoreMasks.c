/*
 * XREFs of MiObtainParkedCoreMasks @ 0x1403E9CF8
 * Callers:
 *     MiEvaluateProcessor @ 0x1403E9E14 (MiEvaluateProcessor.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
    ExAcquireSpinLockShared(&dword_140E2D800);
    v6 = &unk_140E2D808;
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
    ExReleaseSpinLockShared(&dword_140E2D800, CurrentIrql);
  }
  else
  {
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2D800);
    v4 = &unk_140E2D808;
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
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2D800);
  }
}
