/*
 * XREFs of ?QuaternionFromRotationMatrix@CExpressionValueStack@@QEAAJXZ @ 0x1802149D8
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x180121B74 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromRotationMatrix(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  CExpressionValue *v3; // rbx
  __int128 v4; // xmm0
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 )
  {
    v3 = (CExpressionValue *)(*(_QWORD *)this + 72LL * (unsigned int)(v1 - 1));
    if ( *((_DWORD *)v3 + 16) == 265 )
    {
      D3DXQuaternionRotationMatrix(
        (struct D2DQuaternion *)&v6,
        (const struct D2DMatrix *)(*(_QWORD *)this + 72LL * (unsigned int)(v1 - 1)));
      CExpressionValue::DestroyCurrent(v3);
      v4 = v6;
      *((_DWORD *)v3 + 16) = 71;
      *(_OWORD *)v3 = v4;
      return 0;
    }
    else
    {
      v2 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147467259,
        0x15F9u,
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
      0x15F6u,
      0LL);
  }
  return v2;
}
