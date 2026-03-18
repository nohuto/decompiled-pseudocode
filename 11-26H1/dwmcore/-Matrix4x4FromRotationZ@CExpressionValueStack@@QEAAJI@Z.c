/*
 * XREFs of ?Matrix4x4FromRotationZ@CExpressionValueStack@@QEAAJI@Z @ 0x18021632C
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ConsumeStackValues@CExpressionValueStack@@AEAAJIPEAPEAVCExpressionValue@@@Z @ 0x18018CAD0 (-ConsumeStackValues@CExpressionValueStack@@AEAAJIPEAPEAVCExpressionValue@@@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x1801B8928 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x180213AD0 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromRotationZ(CExpressionValueStack *this, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  CExpressionValue *v5; // rbx
  int v6; // eax
  float v7; // xmm1_4
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  int v13; // [rsp+38h] [rbp-48h]
  _OWORD v14[4]; // [rsp+40h] [rbp-40h] BYREF
  CExpressionValue *v15; // [rsp+A0h] [rbp+20h] BYREF

  v15 = 0LL;
  v3 = CExpressionValueStack::ConsumeStackValues(this, a2, &v15);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v3,
      0x142Du,
      0LL);
    return v4;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v5 = v15;
      if ( *((_DWORD *)v15 + 16) == 18 && *((_DWORD *)v15 + 34) == 52 )
      {
        v6 = *((_DWORD *)v15 + 20);
        v7 = *(float *)v15;
        v12 = *((_QWORD *)v15 + 9);
        v13 = v6;
        D2DMatrixRotationZ((__int64)v14, v7, (float *)&v12);
        goto LABEL_9;
      }
    }
LABEL_10:
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x1454u,
      0LL);
    return v4;
  }
  v5 = v15;
  if ( *((_DWORD *)v15 + 16) != 18 )
    goto LABEL_10;
  D2DMatrixRotationZ((struct D2DMatrix *)v14, *(float *)v15);
LABEL_9:
  CExpressionValue::DestroyCurrent(v5);
  v8 = v14[1];
  *(_OWORD *)v5 = v14[0];
  v9 = v14[2];
  *((_OWORD *)v5 + 1) = v8;
  v10 = v14[3];
  *((_OWORD *)v5 + 2) = v9;
  *((_OWORD *)v5 + 3) = v10;
  *((_DWORD *)v5 + 16) = 265;
  return 0;
}
