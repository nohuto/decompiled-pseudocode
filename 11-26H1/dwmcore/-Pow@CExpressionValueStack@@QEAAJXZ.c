/*
 * XREFs of ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x1801BD1FC
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     powf_0 @ 0x1802B975C (powf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Pow(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  int v3; // r9d
  unsigned int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  float v7; // xmm6_4
  unsigned int v9; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

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
        v7 = powf_0(*(float *)v5, *(float *)(v5 + 72));
        if ( !_isnan(v7) )
        {
          CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
          *(float *)v5 = v7;
          *(_DWORD *)(v5 + 64) = 18;
          return v2;
        }
        v9 = 3712;
      }
      else
      {
        v9 = 3726;
      }
    }
    else
    {
      v9 = 3692;
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
    v9 = 3677;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v3, v9, 0LL);
  return v2;
}
