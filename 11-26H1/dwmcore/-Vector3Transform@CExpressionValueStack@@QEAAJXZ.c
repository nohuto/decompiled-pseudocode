/*
 * XREFs of ?Vector3Transform@CExpressionValueStack@@QEAAJXZ @ 0x180212780
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18029322C (-D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x1802932D0 (-D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3Transform(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  unsigned int v3; // eax
  __int64 v4; // rbx
  int v5; // eax
  int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 < 2 )
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
      0x17A8u,
      0LL);
    return v2;
  }
  v3 = v1 - 1;
  *((_DWORD *)this + 24) = v3;
  v4 = *(_QWORD *)this + 72LL * (v3 - 1);
  if ( *(_DWORD *)(v4 + 64) != 52 )
  {
    v8 = 6061;
LABEL_5:
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
  v5 = *(_DWORD *)(v4 + 136);
  if ( v5 != 71 && v5 != 265 )
  {
    v8 = 6069;
    goto LABEL_5;
  }
  v9 = 0LL;
  v10 = 0;
  if ( v5 == 265 )
    D3DXVec3Transform((struct D2DVector3 *)&v9, (const struct D2DVector3 *)v4, (const struct D2DMatrix *)(v4 + 72));
  else
    D3DXVec3Transform((struct D2DVector3 *)&v9, (const struct D2DVector3 *)v4, (const struct D2DQuaternion *)(v4 + 72));
  CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
  v6 = v10;
  *(_QWORD *)v4 = v9;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 64) = 52;
  return 0;
}
