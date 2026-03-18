/*
 * XREFs of ?Modulus@CExpressionValueStack@@QEAAJXZ @ 0x18020F5CC
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     fmodf_0 @ 0x1802B9720 (fmodf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Modulus(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  unsigned int v3; // eax
  __int64 v4; // rdi
  int v5; // eax
  float v6; // xmm6_4
  unsigned int v8; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 2 )
  {
    v3 = v1 - 1;
    v2 = 0;
    *((_DWORD *)this + 24) = v3;
    v4 = *(_QWORD *)this + 72LL * (v3 - 1);
    v5 = *(_DWORD *)(v4 + 64);
    if ( v5 == *(_DWORD *)(v4 + 136) )
    {
      if ( v5 == 18 )
      {
        if ( *(float *)(v4 + 72) > 0.0 )
        {
          v6 = fmodf_0(*(float *)v4, *(float *)(v4 + 72));
          CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
          *(float *)v4 = v6;
          *(_DWORD *)(v4 + 64) = 18;
          return v2;
        }
        v8 = 902;
      }
      else
      {
        v8 = 918;
      }
    }
    else
    {
      v8 = 887;
    }
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v8,
      0LL);
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
    0x368u,
    0LL);
  return v2;
}
