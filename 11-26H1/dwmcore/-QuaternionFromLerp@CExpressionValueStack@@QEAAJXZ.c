/*
 * XREFs of ?QuaternionFromLerp@CExpressionValueStack@@QEAAJXZ @ 0x180212404
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXQuaternionLerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z @ 0x1801AC768 (-D3DXQuaternionLerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromLerp(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  unsigned int v3; // eax
  __int64 v4; // rbx
  __int128 v5; // xmm0
  unsigned int v7; // [rsp+20h] [rbp-28h]
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 3 )
  {
    v3 = v1 - 2;
    *((_DWORD *)this + 24) = v3;
    v4 = *(_QWORD *)this + 72LL * (v3 - 1);
    if ( *(_DWORD *)(v4 + 64) == 71 )
    {
      if ( *(_DWORD *)(v4 + 136) == 71 )
      {
        if ( *(_DWORD *)(v4 + 208) == 18 )
        {
          D3DXQuaternionLerp(
            (struct D2DQuaternion *)&v8,
            (const struct D2DQuaternion *)(*(_QWORD *)this + 72LL * (v3 - 1)),
            (const struct D2DQuaternion *)(v4 + 72),
            *(float *)(v4 + 144));
          CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
          v5 = v8;
          *(_DWORD *)(v4 + 64) = 71;
          *(_OWORD *)v4 = v5;
          return 0;
        }
        v7 = 5583;
      }
      else
      {
        v7 = 5582;
      }
    }
    else
    {
      v7 = 5581;
    }
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v7,
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
    0x15C8u,
    0LL);
  return v2;
}
