/*
 * XREFs of ?Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x180107FCC
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromTranslation(CExpressionValueStack *this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  __int64 v5; // rbx
  int v6; // xmm9_4
  int v7; // xmm10_4
  float v8; // xmm6_4
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v2 = *((_DWORD *)this + 24);
  if ( a2 <= v2 && v2 )
  {
    if ( a2 > 1 )
    {
      v2 = v2 - a2 + 1;
      *((_DWORD *)this + 24) = v2;
    }
    v3 = 0;
    v5 = *(_QWORD *)this + 72LL * (v2 - 1);
    if ( a2 == 1 )
    {
      if ( *(_DWORD *)(v5 + 64) == 52 )
      {
        v6 = *(_DWORD *)(v5 + 8);
        v7 = *(_DWORD *)(v5 + 4);
LABEL_10:
        v8 = *(float *)v5;
        CExpressionValue::DestroyCurrent((CExpressionValue *)(*(_QWORD *)this + 72LL * (v2 - 1)));
        *(_DWORD *)(v5 + 64) = 265;
        *(float *)v5 = FLOAT_1_0;
        *(_DWORD *)(v5 + 4) = 0;
        *(_DWORD *)(v5 + 8) = 0;
        *(_DWORD *)(v5 + 12) = 0;
        *(_DWORD *)(v5 + 16) = 0;
        *(float *)(v5 + 20) = FLOAT_1_0;
        *(_DWORD *)(v5 + 24) = 0;
        *(_DWORD *)(v5 + 28) = 0;
        *(_DWORD *)(v5 + 32) = 0;
        *(_DWORD *)(v5 + 36) = 0;
        *(float *)(v5 + 40) = FLOAT_1_0;
        *(_DWORD *)(v5 + 44) = 0;
        *(float *)(v5 + 48) = v8;
        *(_DWORD *)(v5 + 52) = v7;
        *(_DWORD *)(v5 + 56) = v6;
        *(float *)(v5 + 60) = FLOAT_1_0;
        return v3;
      }
    }
    else if ( a2 == 3 && *(_DWORD *)(v5 + 64) == 18 && *(_DWORD *)(v5 + 136) == 18 && *(_DWORD *)(v5 + 208) == 18 )
    {
      v6 = *(_DWORD *)(v5 + 144);
      v7 = *(_DWORD *)(v5 + 72);
      goto LABEL_10;
    }
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x11D3u,
      0LL);
    return v3;
  }
  v3 = -2147483637;
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
    0x11AAu,
    0LL);
  return v3;
}
