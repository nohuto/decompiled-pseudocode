/*
 * XREFs of ?Vector4Transform@CExpressionValueStack@@QEAAJXZ @ 0x1802125F0
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180293448 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x180293544 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DMatrix@@@Z @ 0x1802936C4 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DQuaternion@@@Z @ 0x180293760 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DMatrix@@@Z @ 0x180293890 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DQuaternion@@@Z @ 0x180293968 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector4Transform(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  unsigned int v3; // eax
  __int64 v4; // rbx
  int v5; // ecx
  int v6; // eax
  __int128 v7; // xmm0
  unsigned int v9; // [rsp+20h] [rbp-28h]
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF
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
      0x183Au,
      0LL);
    return v2;
  }
  v3 = v1 - 1;
  *((_DWORD *)this + 24) = v3;
  v4 = *(_QWORD *)this + 72LL * (v3 - 1);
  v5 = *(_DWORD *)(v4 + 64);
  if ( v5 != 35 && v5 != 52 && v5 != 69 )
  {
    v9 = 6215;
LABEL_7:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v9,
      0LL);
    return v2;
  }
  v6 = *(_DWORD *)(v4 + 136);
  if ( v6 != 71 && v6 != 265 )
  {
    v9 = 6224;
    goto LABEL_7;
  }
  v10 = 0LL;
  if ( v5 == 35 )
  {
    if ( v6 == 265 )
      D3DXVec4Transform((struct D2DVector4 *)&v10, (const struct D2DVector2 *)v4, (const struct D2DMatrix *)(v4 + 72));
    else
      D3DXVec4Transform(
        (struct D2DVector4 *)&v10,
        (const struct D2DVector2 *)v4,
        (const struct D2DQuaternion *)(v4 + 72));
  }
  else if ( v5 == 52 )
  {
    if ( v6 == 265 )
      D3DXVec4Transform((struct D2DVector4 *)&v10, (const struct D2DVector3 *)v4, (const struct D2DMatrix *)(v4 + 72));
    else
      D3DXVec4Transform(
        (struct D2DVector4 *)&v10,
        (const struct D2DVector3 *)v4,
        (const struct D2DQuaternion *)(v4 + 72));
  }
  else if ( v6 == 265 )
  {
    D3DXVec4Transform((struct D2DVector4 *)&v10, (const struct D2DVector4 *)v4, (const struct D2DMatrix *)(v4 + 72));
  }
  else
  {
    D3DXVec4Transform((struct D2DVector4 *)&v10, (const struct D2DVector4 *)v4, (const struct D2DQuaternion *)(v4 + 72));
  }
  CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
  v7 = v10;
  *(_DWORD *)(v4 + 64) = 69;
  *(_OWORD *)v4 = v7;
  return 0;
}
