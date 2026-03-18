/*
 * XREFs of ?Vector2Transform@CExpressionValueStack@@QEAAJXZ @ 0x1802129AC
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXVec2Transform@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x180293188 (-D3DXVec2Transform@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector2Transform(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  unsigned int v3; // eax
  __int64 v4; // rbx
  int v5; // eax
  float v6; // xmm1_4
  float v7; // xmm3_4
  unsigned int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 2 )
  {
    v3 = v1 - 1;
    *((_DWORD *)this + 24) = v3;
    v4 = *(_QWORD *)this + 72LL * (v3 - 1);
    if ( *(_DWORD *)(v4 + 64) != 35 )
    {
      v9 = 5841;
LABEL_5:
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
    v5 = *(_DWORD *)(v4 + 136);
    if ( v5 != 71 && v5 != 104 && v5 != 265 )
    {
      v9 = 5850;
      goto LABEL_5;
    }
    v11 = 0LL;
    if ( v5 == 104 )
    {
      v6 = (float)((float)(*(float *)(v4 + 4) * *(float *)(v4 + 80)) + (float)(*(float *)v4 * *(float *)(v4 + 72)))
         + *(float *)(v4 + 88);
      v7 = (float)((float)(*(float *)(v4 + 4) * *(float *)(v4 + 84)) + (float)(*(float *)v4 * *(float *)(v4 + 76)))
         + *(float *)(v4 + 92);
    }
    else
    {
      if ( v5 != 265 )
      {
        D3DXVec2Transform(
          (struct D2DVector2 *)&v11,
          (const struct D2DVector2 *)v4,
          (const struct D2DQuaternion *)(v4 + 72));
        goto LABEL_16;
      }
      v6 = (float)((float)(*(float *)(v4 + 4) * *(float *)(v4 + 88)) + (float)(*(float *)v4 * *(float *)(v4 + 72)))
         + *(float *)(v4 + 120);
      v7 = (float)((float)(*(float *)(v4 + 4) * *(float *)(v4 + 92)) + (float)(*(float *)v4 * *(float *)(v4 + 76)))
         + *(float *)(v4 + 124);
    }
    v11 = __PAIR64__(LODWORD(v7), LODWORD(v6));
LABEL_16:
    CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
    *(_QWORD *)v4 = v11;
    *(_DWORD *)(v4 + 64) = 35;
    return 0;
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
    0x16CCu,
    0LL);
  return v2;
}
