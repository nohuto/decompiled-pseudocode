/*
 * XREFs of ?SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z @ 0x1801D02E4
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1800D78A0 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CProjectedShadow::SetTransforms(
        CProjectedShadow *this,
        const struct CMILMatrix *a2,
        const struct CMILMatrix *a3,
        const struct CMILMatrix *a4)
{
  int v4; // xmm0_4
  int v5; // xmm1_4
  int v6; // xmm2_4
  int v7; // xmm3_4
  int v8; // xmm4_4
  int v9; // xmm5_4
  int v10; // xmm6_4
  int v11; // xmm7_4
  int v12; // xmm0_4
  int v13; // xmm1_4
  int v14; // xmm2_4
  int v15; // xmm3_4
  int v16; // xmm4_4
  int v17; // xmm5_4
  int v18; // xmm6_4
  int v19; // xmm7_4
  __int64 v20; // rax

  *((_OWORD *)this + 7) = *(_OWORD *)a2;
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 9) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 10) = *((_OWORD *)a2 + 3);
  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 16);
  v4 = *((_DWORD *)a3 + 1);
  v5 = *((_DWORD *)a3 + 3);
  v6 = *((_DWORD *)a3 + 4);
  v7 = *((_DWORD *)a3 + 5);
  v8 = *((_DWORD *)a3 + 7);
  v9 = *((_DWORD *)a3 + 12);
  v10 = *((_DWORD *)a3 + 13);
  v11 = *((_DWORD *)a3 + 15);
  *((_DWORD *)this + 45) = *(_DWORD *)a3;
  *((_DWORD *)this + 46) = v4;
  *((_DWORD *)this + 47) = v5;
  *((_DWORD *)this + 48) = v6;
  *((_DWORD *)this + 49) = v7;
  *((_DWORD *)this + 50) = v8;
  *((_DWORD *)this + 51) = v9;
  *((_DWORD *)this + 52) = v10;
  *((_DWORD *)this + 53) = v11;
  v12 = *((_DWORD *)a4 + 1);
  v13 = *((_DWORD *)a4 + 3);
  v14 = *((_DWORD *)a4 + 4);
  v15 = *((_DWORD *)a4 + 5);
  v16 = *((_DWORD *)a4 + 7);
  v17 = *((_DWORD *)a4 + 12);
  v18 = *((_DWORD *)a4 + 13);
  v19 = *((_DWORD *)a4 + 15);
  *((_DWORD *)this + 54) = *(_DWORD *)a4;
  *((_DWORD *)this + 55) = v12;
  *((_DWORD *)this + 56) = v13;
  *((_DWORD *)this + 57) = v14;
  *((_DWORD *)this + 58) = v15;
  *((_DWORD *)this + 59) = v16;
  *((_DWORD *)this + 60) = v17;
  *((_DWORD *)this + 61) = v18;
  *((_DWORD *)this + 62) = v19;
  v20 = *(_QWORD *)this;
  *((_QWORD *)this + 13) = *(_QWORD *)(*((_QWORD *)this + 3) + 880LL);
  (*(void (__fastcall **)(CProjectedShadow *, __int64, CProjectedShadow *))(v20 + 80))(this, 5LL, this);
}
