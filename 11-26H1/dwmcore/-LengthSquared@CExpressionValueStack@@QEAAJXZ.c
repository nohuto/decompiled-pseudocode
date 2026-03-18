/*
 * XREFs of ?LengthSquared@CExpressionValueStack@@QEAAJXZ @ 0x1801E2440
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::LengthSquared(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v4; // eax
  float v5; // xmm9_4
  float v6; // xmm7_4
  float v7; // xmm6_4
  float v8; // xmm8_4
  float v9; // xmm8_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 )
  {
    v2 = 0;
    v3 = *(_QWORD *)this + 72LL * (unsigned int)(v1 - 1);
    v4 = *(_DWORD *)(v3 + 64);
    if ( v4 == 18 )
    {
      v15 = *(float *)v3;
      CExpressionValue::DestroyCurrent((CExpressionValue *)v3);
      *(float *)v3 = v15 * v15;
    }
    else
    {
      switch ( v4 )
      {
        case '#':
          v13 = *(float *)v3;
          v14 = *(float *)(v3 + 4);
          CExpressionValue::DestroyCurrent((CExpressionValue *)v3);
          v12 = (float)(v14 * v14) + (float)(v13 * v13);
          break;
        case '4':
          v9 = *(float *)(v3 + 8);
          v10 = *(float *)v3;
          v11 = *(float *)(v3 + 4);
          CExpressionValue::DestroyCurrent((CExpressionValue *)v3);
          v12 = (float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v9 * v9);
          break;
        case 'E':
        case 'G':
          v5 = *(float *)(v3 + 12);
          v6 = *(float *)(v3 + 8);
          v7 = *(float *)v3;
          v8 = *(float *)(v3 + 4);
          CExpressionValue::DestroyCurrent((CExpressionValue *)v3);
          *(float *)v3 = (float)((float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(v6 * v6)) + (float)(v5 * v5);
          goto LABEL_15;
        default:
          v2 = -2147467259;
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147467259,
            0xA79u,
            0LL);
          return v2;
      }
      *(float *)v3 = v12;
    }
LABEL_15:
    *(_DWORD *)(v3 + 64) = 18;
    return v2;
  }
  v2 = -2147483637;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvaluestack.cpp",
    (const char *)0x8000000BLL);
  MilInstrumentationCheckHR_MaybeFailFast(
    20,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147483637,
    0xA46u,
    0LL);
  return v2;
}
