/*
 * XREFs of ?Quaternion@CExpressionValueStack@@QEAAJXZ @ 0x18020D068
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Quaternion(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // edi
  unsigned int v3; // eax
  int *v4; // rbx
  int v5; // xmm6_4
  int v6; // xmm7_4
  int v7; // xmm8_4
  int v8; // xmm9_4
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 4 )
  {
    v3 = v1 - 3;
    v2 = 0;
    *((_DWORD *)this + 24) = v3;
    v4 = (int *)(*(_QWORD *)this + 72LL * (v3 - 1));
    if ( v4[16] == 18 && v4[34] == 18 && v4[52] == 18 && v4[70] == 18 )
    {
      v5 = *v4;
      v6 = v4[18];
      v7 = v4[36];
      v8 = v4[54];
      CExpressionValue::DestroyCurrent((CExpressionValue *)(*(_QWORD *)this + 72LL * (v3 - 1)));
      v4[16] = 71;
      *v4 = v5;
      v4[1] = v6;
      v4[2] = v7;
      v4[3] = v8;
    }
    else
    {
      v2 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147467259,
        0x10D4u,
        0LL);
    }
  }
  else
  {
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
      0x10C2u,
      0LL);
  }
  return v2;
}
