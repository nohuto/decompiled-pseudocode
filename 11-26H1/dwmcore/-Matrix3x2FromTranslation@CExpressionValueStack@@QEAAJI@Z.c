/*
 * XREFs of ?Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x18010B1E0
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromTranslation(CExpressionValueStack *this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned int *v4; // rbx
  unsigned __int64 v5; // xmm0_8
  __m128i si128; // xmm8
  __m128 v8; // xmm6
  __m128 v9; // xmm7
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *((_DWORD *)this + 24);
  if ( a2 > v2 || !v2 )
  {
    v3 = -2147483637;
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
      0x116Du,
      0LL);
    return v3;
  }
  if ( a2 > 1 )
  {
    v2 = v2 - a2 + 1;
    *((_DWORD *)this + 24) = v2;
  }
  v4 = (unsigned int *)(*(_QWORD *)this + 72LL * (v2 - 1));
  if ( a2 != 1 )
  {
    if ( a2 == 2 && v4[16] == 18 && v4[34] == 18 )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v8 = (__m128)*v4;
      v9 = (__m128)v4[18];
      CExpressionValue::DestroyCurrent((CExpressionValue *)(*(_QWORD *)this + 72LL * (v2 - 1)));
      *(__m128i *)v4 = si128;
      *((_QWORD *)v4 + 2) = _mm_unpacklo_ps(v8, v9).m128_u64[0];
      goto LABEL_10;
    }
LABEL_16:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x118Eu,
      0LL);
    return v3;
  }
  if ( v4[16] != 35 )
    goto LABEL_16;
  v5 = _mm_unpacklo_ps((__m128)*v4, (__m128)v4[1]).m128_u64[0];
  *(__m128i *)v4 = _mm_load_si128((const __m128i *)&_xmm);
  *((_QWORD *)v4 + 2) = v5;
LABEL_10:
  v4[16] = 104;
  return 0;
}
