/*
 * XREFs of ?Vector2TransformNormal@CExpressionValueStack@@QEAAJXZ @ 0x18020FC8C
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector2TransformNormal(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  unsigned int v3; // eax
  __int64 v4; // rbx
  int v5; // eax
  float v6; // xmm7_4
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  unsigned int v12; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

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
      0x1712u,
      0LL);
    return v2;
  }
  v3 = v1 - 1;
  *((_DWORD *)this + 24) = v3;
  v4 = *(_QWORD *)this + 72LL * (v3 - 1);
  if ( *(_DWORD *)(v4 + 64) != 35 )
  {
    v12 = 5911;
LABEL_5:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v12,
      0LL);
    return v2;
  }
  v5 = *(_DWORD *)(v4 + 136);
  if ( v5 != 104 && v5 != 265 )
  {
    v12 = 5919;
    goto LABEL_5;
  }
  v6 = *(float *)(v4 + 4);
  if ( v5 == 104 )
  {
    v7 = v6 * *(float *)(v4 + 84);
    v8 = v6 * *(float *)(v4 + 80);
  }
  else
  {
    v7 = v6 * *(float *)(v4 + 92);
    v8 = v6 * *(float *)(v4 + 88);
  }
  v9 = v7 + (float)(*(float *)v4 * *(float *)(v4 + 76));
  v10 = v8 + (float)(*(float *)v4 * *(float *)(v4 + 72));
  CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
  *(float *)v4 = v10;
  *(float *)(v4 + 4) = v9;
  *(_DWORD *)(v4 + 64) = 35;
  return 0;
}
