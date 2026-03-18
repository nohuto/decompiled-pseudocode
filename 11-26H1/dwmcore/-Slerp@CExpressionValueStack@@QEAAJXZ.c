/*
 * XREFs of ?Slerp@CExpressionValueStack@@QEAAJXZ @ 0x180210DBC
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z @ 0x1801AE6D8 (-D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Slerp(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // edi
  unsigned int v3; // eax
  __int64 v4; // rbx
  int v5; // eax
  __int128 v6; // xmm0
  unsigned int v8; // [rsp+20h] [rbp-28h]
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 3 )
  {
    v3 = v1 - 2;
    v2 = 0;
    *((_DWORD *)this + 24) = v3;
    v4 = *(_QWORD *)this + 72LL * (v3 - 1);
    v5 = *(_DWORD *)(v4 + 64);
    if ( *(_DWORD *)(v4 + 208) == 18 && v5 == *(_DWORD *)(v4 + 136) )
    {
      if ( v5 == 71 )
      {
        D3DXQuaternionSlerp(
          (struct D2DQuaternion *)&v9,
          (const struct D2DQuaternion *)v4,
          (const struct D2DQuaternion *)(v4 + 72),
          *(float *)(v4 + 144));
        CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
        v6 = v9;
        *(_DWORD *)(v4 + 64) = 71;
        *(_OWORD *)v4 = v6;
        return v2;
      }
      v8 = 3040;
    }
    else
    {
      v8 = 3008;
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
    0xBAFu,
    0LL);
  return v2;
}
