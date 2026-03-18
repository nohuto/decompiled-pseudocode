/*
 * XREFs of ?And@CExpressionValueStack@@QEAAJXZ @ 0x1801C384C
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::And(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // esi
  int v3; // r9d
  unsigned int v4; // eax
  bool v5; // bl
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 < 2 )
  {
    v2 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvaluestack.cpp",
      (const char *)0x8000000BLL);
    v3 = -2147483637;
    v9 = 1430;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(20, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v3, v9, 0LL);
    return v2;
  }
  v4 = v1 - 1;
  v5 = 0;
  *((_DWORD *)this + 24) = v4;
  v2 = 0;
  v6 = *(_QWORD *)this + 72LL * (v4 - 1);
  v7 = *(_DWORD *)(v6 + 64);
  if ( v7 != *(_DWORD *)(v6 + 136) )
  {
    v9 = 1450;
LABEL_12:
    v3 = -2147467259;
    v2 = -2147467259;
    goto LABEL_3;
  }
  if ( v7 != 17 )
  {
    v9 = 1469;
    goto LABEL_12;
  }
  if ( *(_BYTE *)v6 )
    v5 = *(_BYTE *)(v6 + 72) != 0;
  CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
  *(_DWORD *)(v6 + 64) = 17;
  *(_BYTE *)v6 = v5;
  return v2;
}
