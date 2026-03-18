/*
 * XREFs of ?QuaternionFromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x180212B34
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18020FDD0 (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromAxisAngle(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // edi
  unsigned int v3; // eax
  __int64 v4; // rbx
  __int128 v5; // xmm0
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 2 )
  {
    v3 = v1 - 1;
    v2 = 0;
    *((_DWORD *)this + 24) = v3;
    v4 = *(_QWORD *)this + 72LL * (v3 - 1);
    if ( *(_DWORD *)(v4 + 64) == 52 && *(_DWORD *)(v4 + 136) == 18 )
    {
      D3DXQuaternionRotationAxis((struct D2DQuaternion *)&v7, (const struct D2DVector3 *)v4, *(float *)(v4 + 72));
      CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
      v5 = v7;
      *(_DWORD *)(v4 + 64) = 71;
      *(_OWORD *)v4 = v5;
    }
    else
    {
      v2 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147467259,
        0x159Fu,
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
      0x1592u,
      0LL);
  }
  return v2;
}
