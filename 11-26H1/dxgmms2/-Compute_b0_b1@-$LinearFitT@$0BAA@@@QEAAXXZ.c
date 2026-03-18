/*
 * XREFs of ?Compute_b0_b1@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x14001C29C
 * Callers:
 *     ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001BAA0 (-VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LinearFitT<256>::Compute_b0_b1(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // eax
  double v3; // xmm3_8
  double v4; // xmm4_8
  double v5; // xmm2_8
  double v6; // xmm0_8
  double v7; // xmm1_8

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 )
  {
    v2 = 256;
    v3 = (double)(int)*(_QWORD *)(a1 + 56);
    if ( v1 < 0x100 )
      v2 = *(_DWORD *)(a1 + 8);
    v4 = (double)v2;
    v5 = (double)(int)*(_QWORD *)(a1 + 80) - v3 * v3 / (double)v2;
    v6 = v5;
    if ( v5 < 0.0 )
      *(_QWORD *)&v6 = *(_QWORD *)&v5 ^ _xmm;
    if ( v6 <= 0.01 || v1 <= 4 )
      v7 = *(double *)(a1 + 32);
    else
      v7 = ((double)(int)*(_QWORD *)(a1 + 72) - (double)(int)*(_QWORD *)(a1 + 64) * v3 / v4) / v5;
    *(double *)(a1 + 24) = v7;
    *(double *)(a1 + 16) = ((double)(int)*(_QWORD *)(a1 + 64) - v7 * v3) / v4;
  }
}
