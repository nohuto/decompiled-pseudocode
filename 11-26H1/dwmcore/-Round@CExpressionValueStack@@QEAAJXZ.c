/*
 * XREFs of ?Round@CExpressionValueStack@@QEAAJXZ @ 0x1801C34FC
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Round(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  CExpressionValue *v4; // rdi
  float v5; // xmm6_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  __int32 v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm6_4
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  float Y; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 24);
  if ( v1 )
  {
    v2 = 0;
    v4 = (CExpressionValue *)(*(_QWORD *)this + 72LL * (unsigned int)(v1 - 1));
    if ( *((_DWORD *)v4 + 16) == 18 )
    {
      v5 = *(float *)v4;
      v6 = *(float *)v4;
      Y = 0.0;
      v7 = modff(v6, &Y);
      COERCE_FLOAT(v8 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
      if ( ((int)COERCE_FLOAT(LODWORD(Y) & v8) & 1) == 0 && COERCE_FLOAT(LODWORD(v7) & v8) == 0.5 )
      {
        if ( v5 < 0.0 )
          v10 = ceilf_0(v5 - 0.5) + 1.0;
        else
          v10 = floorf_0(v5 + 0.5) - 1.0;
      }
      else
      {
        if ( v5 < 0.0 )
          v9 = ceilf_0(v5 - 0.5);
        else
          v9 = floorf_0(v5 + 0.5);
        v10 = v9;
      }
      CExpressionValue::DestroyCurrent(v4);
      *((_DWORD *)v4 + 16) = 18;
      *(float *)v4 = v10;
    }
    else
    {
      v2 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147467259,
        0xE08u,
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
      0xDE4u,
      0LL);
  }
  return v2;
}
