/*
 * XREFs of ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x18018C808
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ConsumeStackValues@CExpressionValueStack@@AEAAJIPEAPEAVCExpressionValue@@@Z @ 0x18018CAD0 (-ConsumeStackValues@CExpressionValueStack@@AEAAJIPEAPEAVCExpressionValue@@@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMMUD2DVector3@@@Z @ 0x180292F70 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMMUD2DVector3@@@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x180292FE4 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@UD2DVector3@@1@Z @ 0x18029304C (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@UD2DVector3@@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromScale(CExpressionValueStack *this, unsigned int a2)
{
  int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // edi
  CExpressionValue *v6; // rbx
  int v7; // xmm6_4
  int v8; // xmm7_4
  int v9; // xmm8_4
  int v10; // xmm6_4
  CExpressionValue *v11; // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // xmm0_8
  int v15; // eax
  __int64 v16; // xmm0_8
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v22; // [rsp+38h] [rbp-39h] BYREF
  int v23; // [rsp+40h] [rbp-31h]
  __int64 v24; // [rsp+48h] [rbp-29h] BYREF
  int v25; // [rsp+50h] [rbp-21h]
  _OWORD v26[7]; // [rsp+58h] [rbp-19h] BYREF
  CExpressionValue *v27; // [rsp+E8h] [rbp+77h] BYREF

  v27 = 0LL;
  v3 = CExpressionValueStack::ConsumeStackValues(this, a2, &v27);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v3,
      0x131Bu,
      0LL);
    return v5;
  }
  if ( a2 != 1 )
  {
    switch ( a2 )
    {
      case 2u:
        v11 = v27;
        if ( *((_DWORD *)v27 + 16) == 18 )
        {
          if ( *((_DWORD *)v27 + 34) != 52 )
            goto LABEL_28;
          v12 = *((_DWORD *)v27 + 20);
          v22 = *((_QWORD *)v27 + 9);
          v23 = v12;
          D2DMatrixScaling(v26, v4, &v22);
        }
        else
        {
          if ( *((_DWORD *)v27 + 16) != 52 || *((_DWORD *)v27 + 34) != 52 )
            goto LABEL_28;
          v13 = *((_DWORD *)v27 + 20);
          v22 = *((_QWORD *)v27 + 9);
          v14 = *(_QWORD *)v27;
          v23 = v13;
          v15 = *((_DWORD *)v27 + 2);
          v24 = v14;
          v25 = v15;
          D2DMatrixScaling(v26, &v24, &v22);
        }
        break;
      case 3u:
        v6 = v27;
        if ( *((_DWORD *)v27 + 16) == 18 && *((_DWORD *)v27 + 34) == 18 && *((_DWORD *)v27 + 52) == 18 )
        {
          v8 = *((_DWORD *)v27 + 18);
          v9 = *((_DWORD *)v27 + 36);
          goto LABEL_8;
        }
LABEL_28:
        v5 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          0x1385u,
          0LL);
        return v5;
      case 4u:
        v11 = v27;
        if ( *((_DWORD *)v27 + 16) != 18
          || *((_DWORD *)v27 + 34) != 18
          || *((_DWORD *)v27 + 52) != 18
          || *((_DWORD *)v27 + 70) != 52 )
        {
          goto LABEL_28;
        }
        v16 = *((_QWORD *)v27 + 27);
        v25 = *((_DWORD *)v27 + 56);
        v24 = v16;
        D2DMatrixScaling(v26);
        break;
      default:
        goto LABEL_28;
    }
    CExpressionValue::DestroyCurrent(v11);
    v17 = v26[0];
    v18 = v26[1];
    *((_DWORD *)v11 + 16) = 265;
    *(_OWORD *)v11 = v17;
    v19 = v26[2];
    *((_OWORD *)v11 + 1) = v18;
    v20 = v26[3];
    *((_OWORD *)v11 + 2) = v19;
    *((_OWORD *)v11 + 3) = v20;
    return v5;
  }
  v6 = v27;
  if ( *((_DWORD *)v27 + 16) != 18 )
  {
    if ( *((_DWORD *)v27 + 16) == 52 )
    {
      v8 = *((_DWORD *)v27 + 1);
      v9 = *((_DWORD *)v27 + 2);
LABEL_8:
      v10 = *(_DWORD *)v6;
      CExpressionValue::DestroyCurrent(v6);
      *((_DWORD *)v6 + 16) = 265;
      *(_DWORD *)v6 = v10;
      *(_QWORD *)((char *)v6 + 4) = 0LL;
      *(_QWORD *)((char *)v6 + 12) = 0LL;
      *((_DWORD *)v6 + 5) = v8;
      *((_QWORD *)v6 + 3) = 0LL;
      *((_QWORD *)v6 + 4) = 0LL;
      *((_DWORD *)v6 + 10) = v9;
      goto LABEL_5;
    }
    goto LABEL_28;
  }
  v7 = *(_DWORD *)v27;
  CExpressionValue::DestroyCurrent(v27);
  *((_DWORD *)v6 + 16) = 265;
  *(_DWORD *)v6 = v7;
  *(_QWORD *)((char *)v6 + 4) = 0LL;
  *(_QWORD *)((char *)v6 + 12) = 0LL;
  *((_DWORD *)v6 + 5) = v7;
  *((_QWORD *)v6 + 3) = 0LL;
  *((_QWORD *)v6 + 4) = 0LL;
  *((_DWORD *)v6 + 10) = v7;
LABEL_5:
  *(_QWORD *)((char *)v6 + 44) = 0LL;
  *(_QWORD *)((char *)v6 + 52) = 0LL;
  *((_DWORD *)v6 + 15) = 1065353216;
  return v5;
}
