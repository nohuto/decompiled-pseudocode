/*
 * XREFs of ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x180191EF4
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x180108964 (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 *     ?D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1802930CC (-D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Divide(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // edi
  int v3; // r9d
  unsigned int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  const struct D2DQuaternion *v8; // rdx
  float v9; // xmm0_4
  __int128 v10; // xmm0
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  __int128 v16; // xmm6
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm8_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm1_4
  float v23; // xmm7_4
  float v24; // xmm6_4
  unsigned int v25; // [rsp+20h] [rbp-68h]
  __int128 v26; // [rsp+30h] [rbp-58h] BYREF
  __int128 v27; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 2 )
  {
    v5 = v1 - 1;
    *((_DWORD *)this + 24) = v5;
    v2 = 0;
    v6 = *(_QWORD *)this + 72LL * (v5 - 1);
    v7 = *(_DWORD *)(v6 + 64);
    v8 = (const struct D2DQuaternion *)(v6 + 72);
    if ( v7 == *(_DWORD *)(v6 + 136) )
    {
      switch ( v7 )
      {
        case 18:
          if ( *(float *)v8 != 0.0 )
          {
            v9 = *(float *)v6 / *(float *)v8;
            *(_DWORD *)(v6 + 64) = 18;
            *(float *)v6 = v9;
            return v2;
          }
          v25 = 730;
          break;
        case 35:
          if ( *(float *)v8 != 0.0 )
          {
            v22 = *(float *)(v6 + 76);
            if ( v22 != 0.0 )
            {
              v23 = *(float *)v6 / *(float *)v8;
              v24 = *(float *)(v6 + 4) / v22;
              CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
              *(_DWORD *)(v6 + 64) = 35;
              *(float *)v6 = v23;
              *(float *)(v6 + 4) = v24;
              return v2;
            }
          }
          v25 = 749;
          break;
        case 52:
          if ( *(float *)v8 != 0.0 )
          {
            v17 = *(float *)(v6 + 76);
            if ( v17 != 0.0 )
            {
              v18 = *(float *)(v6 + 80);
              if ( v18 != 0.0 )
              {
                v19 = *(float *)v6 / *(float *)v8;
                v20 = *(float *)(v6 + 4) / v17;
                v21 = *(float *)(v6 + 8) / v18;
                CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
                *(_DWORD *)(v6 + 64) = 52;
                *(float *)v6 = v19;
                *(float *)(v6 + 4) = v20;
                *(float *)(v6 + 8) = v21;
                return v2;
              }
            }
          }
          v25 = 770;
          break;
        case 69:
          if ( *(float *)v8 != 0.0 )
          {
            v11 = *(float *)(v6 + 76);
            if ( v11 != 0.0 )
            {
              v12 = *(float *)(v6 + 80);
              if ( v12 != 0.0 )
              {
                v13 = *(float *)(v6 + 84);
                if ( v13 != 0.0 )
                {
                  v14 = *(float *)(v6 + 4) / v11;
                  *(float *)&v26 = *(float *)v6 / *(float *)v8;
                  v15 = *(float *)(v6 + 8);
                  *((float *)&v26 + 1) = v14;
                  *((float *)&v26 + 3) = *(float *)(v6 + 12) / v13;
                  *((float *)&v26 + 2) = v15 / v12;
                  v16 = v26;
                  CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
                  *(_DWORD *)(v6 + 64) = 69;
                  *(_OWORD *)v6 = v16;
                  return v2;
                }
              }
            }
          }
          v25 = 793;
          break;
        case 71:
          if ( *(float *)v8 != 0.0
            && *(float *)(v6 + 76) != 0.0
            && *(float *)(v6 + 80) != 0.0
            && *(float *)(v6 + 84) != 0.0 )
          {
            D3DXQuaternionInverse((struct D2DQuaternion *)&v26, v8);
            D3DXQuaternionMultiply(
              (struct D2DQuaternion *)&v27,
              (const struct D2DQuaternion *)&v26,
              (const struct D2DQuaternion *)v6);
            CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
            v10 = v27;
            *(_DWORD *)(v6 + 64) = 71;
            *(_OWORD *)v6 = v10;
            return v2;
          }
          v25 = 817;
          break;
        default:
          v25 = 845;
          break;
      }
    }
    else
    {
      v25 = 717;
    }
    v3 = -2147467259;
    v2 = -2147467259;
  }
  else
  {
    v2 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvaluestack.cpp",
      (const char *)0x8000000BLL);
    v3 = -2147483637;
    v25 = 702;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v3, v25, 0LL);
  return v2;
}
