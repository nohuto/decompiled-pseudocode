/*
 * XREFs of ?Matrix3x2@CExpressionValueStack@@QEAAJXZ @ 0x18019C734
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // edi
  int v3; // xmm6_4
  int v4; // xmm7_4
  int v5; // xmm8_4
  int v6; // xmm9_4
  int v7; // xmm10_4
  int v8; // xmm11_4
  unsigned int v10; // eax
  _DWORD *v11; // rbx
  __int64 v12; // rax
  _DWORD *i; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 6 )
  {
    v10 = v1 - 5;
    v2 = 0;
    *((_DWORD *)this + 24) = v10;
    v11 = (_DWORD *)(*(_QWORD *)this + 72LL * (v10 - 1));
    v12 = 0LL;
    for ( i = v11 + 16; ; i += 18 )
    {
      if ( v12 >= 6 )
      {
        v3 = *v11;
        v4 = v11[18];
        v5 = v11[36];
        v6 = v11[54];
        v7 = v11[72];
        v8 = v11[90];
        CExpressionValue::DestroyCurrent((CExpressionValue *)v11);
        v11[16] = 104;
        *v11 = v3;
        v11[1] = v4;
        v11[2] = v5;
        v11[3] = v6;
        v11[4] = v7;
        v11[5] = v8;
        return v2;
      }
      if ( *i != 18 )
        break;
      ++v12;
    }
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x10FEu,
      0LL);
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
      0x10F0u,
      0LL);
  }
  return v2;
}
