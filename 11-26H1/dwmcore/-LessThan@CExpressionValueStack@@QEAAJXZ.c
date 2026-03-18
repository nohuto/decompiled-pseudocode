/*
 * XREFs of ?LessThan@CExpressionValueStack@@QEAAJXZ @ 0x1801BC9E8
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::LessThan(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // esi
  int v3; // r9d
  unsigned int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  bool v7; // bl
  unsigned int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 2 )
  {
    v4 = v1 - 1;
    v2 = 0;
    *((_DWORD *)this + 24) = v4;
    v5 = *(_QWORD *)this + 72LL * (v4 - 1);
    v6 = *(_DWORD *)(v5 + 64);
    if ( v6 == *(_DWORD *)(v5 + 136) )
    {
      if ( v6 == 18 )
      {
        v7 = *(float *)(v5 + 72) > *(float *)v5;
        CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
        *(_DWORD *)(v5 + 64) = 17;
        *(_BYTE *)v5 = v7;
        return v2;
      }
      v9 = 1202;
    }
    else
    {
      v9 = 1182;
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
    v9 = 1162;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v3, v9, 0LL);
  return v2;
}
