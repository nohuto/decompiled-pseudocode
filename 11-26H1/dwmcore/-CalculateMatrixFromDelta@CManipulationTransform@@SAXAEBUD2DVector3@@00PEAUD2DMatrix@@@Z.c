/*
 * XREFs of ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x18010A3A4
 * Callers:
 *     ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x1801090F4 (-ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIO.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801092C8 (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?GetProperty@CManipulationTransform@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1801C2140 (-GetProperty@CManipulationTransform@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801C2E30 (-GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     WithinEpsilon @ 0x18010A65C (WithinEpsilon.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18010AA80 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 */

void __fastcall CManipulationTransform::CalculateMatrixFromDelta(
        const struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DVector3 *a3,
        struct D2DMatrix *a4)
{
  float v4; // xmm4_4
  float v5; // xmm0_4
  const struct D2DVector3 *v6; // r11
  char v8; // di
  char v9; // si
  float v10; // xmm0_4
  float v11; // xmm0_4
  char v12; // al
  float v13; // xmm0_4
  _DWORD *v14; // rcx
  _DWORD *v15; // r10
  int v16; // xmm1_4
  int v17; // xmm3_4
  int v18; // xmm0_4
  int v19; // xmm1_4
  const struct D2DMatrix *v20; // rdx
  struct D2DMatrix *v21; // rcx
  int *v22; // r10
  _DWORD *v23; // r11
  int v24; // xmm1_4
  float v25; // [rsp+20h] [rbp-40h] BYREF
  __int64 v26; // [rsp+24h] [rbp-3Ch]
  __int64 v27; // [rsp+2Ch] [rbp-34h]
  int v28; // [rsp+34h] [rbp-2Ch]
  __int64 v29; // [rsp+38h] [rbp-28h]
  __int64 v30; // [rsp+40h] [rbp-20h]
  _BYTE v31[12]; // [rsp+48h] [rbp-18h]
  __int64 v32; // [rsp+54h] [rbp-Ch]
  int v33; // [rsp+5Ch] [rbp-4h]

  v4 = FLOAT_N1_1920929eN7;
  v5 = *(float *)a1 - 0.0;
  v6 = a3;
  v8 = 1;
  if ( v5 < -0.00000011920929
    || v5 > 0.00000011920929
    || !(unsigned __int8)WithinEpsilon(a1, a2, a3, a4)
    || (v9 = 0, !(unsigned __int8)WithinEpsilon(a1, a2, a3, a4)) )
  {
    v9 = 1;
  }
  v10 = *(float *)a2 - 1.0;
  if ( v10 < v4
    || v10 > 0.00000011920929
    || (v11 = *((float *)a2 + 1) - 1.0, v11 < v4)
    || v11 > 0.00000011920929
    || (v12 = WithinEpsilon(a1, a2, a3, a4), LOBYTE(a3) = 0, !v12) )
  {
    LOBYTE(a3) = 1;
  }
  v13 = *(float *)v6 - 0.0;
  if ( v13 < v4 || v13 > 0.00000011920929 )
  {
    v14 = (_DWORD *)((char *)v6 + 4);
  }
  else if ( (unsigned __int8)WithinEpsilon((char *)v6 + 4, a2, a3, a4)
         && (unsigned __int8)WithinEpsilon(v14, a2, a3, a4) )
  {
    v8 = 0;
    goto LABEL_15;
  }
  v15 = v14;
LABEL_15:
  *(_QWORD *)((char *)a4 + 52) = 0LL;
  *((_DWORD *)a4 + 15) = 1065353216;
  *((_DWORD *)a4 + 10) = 1065353216;
  *((_DWORD *)a4 + 5) = 1065353216;
  *(_DWORD *)a4 = 1065353216;
  *(_QWORD *)((char *)a4 + 44) = 0LL;
  *((_QWORD *)a4 + 4) = 0LL;
  *((_QWORD *)a4 + 3) = 0LL;
  *(_QWORD *)((char *)a4 + 12) = 0LL;
  *(_QWORD *)((char *)a4 + 4) = 0LL;
  if ( (_BYTE)a3 )
  {
    if ( v8 )
    {
      v17 = *((_DWORD *)v6 + 2) ^ _xmm;
      v18 = *(_DWORD *)v6 ^ _xmm;
      *((_DWORD *)a4 + 13) = *v15 ^ _xmm;
      *((_DWORD *)a4 + 12) = v18;
      *((_DWORD *)a4 + 14) = v17;
    }
    v19 = *((_DWORD *)a2 + 1);
    v25 = *(float *)a2;
    *(_DWORD *)v31 = *((_DWORD *)a2 + 2);
    v28 = v19;
    v32 = 0LL;
    *(_QWORD *)&v31[4] = 0LL;
    v30 = 0LL;
    v29 = 0LL;
    v27 = 0LL;
    v26 = 0LL;
    v33 = 1065353216;
    D2DMatrixMultiply(a4, a4, (const struct D2DMatrix *)&v25);
    if ( v8 )
    {
      v24 = *v22;
      *(_DWORD *)&v31[8] = *v23;
      HIDWORD(v32) = v23[2];
      LODWORD(v32) = v24;
      *(_DWORD *)v31 = 1065353216;
      v28 = 1065353216;
      v25 = 1.0;
      D2DMatrixMultiply(v21, v20, (const struct D2DMatrix *)&v25);
    }
  }
  if ( v9 )
  {
    v16 = *((_DWORD *)a1 + 1);
    *(_DWORD *)&v31[8] = *(_DWORD *)a1;
    HIDWORD(v32) = *((_DWORD *)a1 + 2);
    LODWORD(v32) = v16;
    *(_QWORD *)v31 = 1065353216LL;
    v30 = 0LL;
    v29 = 0LL;
    v27 = 0LL;
    v26 = 0LL;
    v33 = 1065353216;
    v28 = 1065353216;
    v25 = 1.0;
    D2DMatrixMultiply(a4, a4, (const struct D2DMatrix *)&v25);
  }
}
