/*
 * XREFs of ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180281D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x18028C4E4 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 *     fmod_0 @ 0x1802B9714 (fmod_0.c)
 *     tan_0 @ 0x1802B9798 (tan_0.c)
 */

void __fastcall CSkewTransform::GetRealization(
        CSkewTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  double v5; // xmm0_8
  float v6; // xmm8_4
  double v7; // xmm0_8
  double v8; // xmm0_8
  float v9; // xmm1_4
  float v10; // xmm7_4
  float v11; // xmm6_4

  v5 = fmod_0(*((float *)this + 40), 360.0);
  v6 = tan_0(v5 * 0.01745329238474369);
  v7 = fmod_0(*((float *)this + 41), 360.0);
  v8 = tan_0(v7 * 0.01745329238474369);
  *((float *)a3 + 4) = v6;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_DWORD *)a3 = 1065353216;
  v9 = v8;
  *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a3 + 28) = 0LL;
  *((_DWORD *)a3 + 9) = 0;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_QWORD *)a3 + 6) = 0LL;
  *((float *)a3 + 1) = v9;
  *((_DWORD *)a3 + 14) = 0;
  *(_QWORD *)((char *)a3 + 60) = 1065353216LL;
  v10 = *((float *)this + 42);
  v11 = *((float *)this + 43);
  if ( v10 != 0.0 || v11 != 0.0 )
  {
    CMILMatrix::PrependTranslate(a3, COERCE_FLOAT(LODWORD(v10) ^ _xmm), COERCE_FLOAT(LODWORD(v11) ^ _xmm));
    CMILMatrix::Translate(a3, v10, v11);
  }
}
