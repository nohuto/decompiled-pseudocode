/*
 * XREFs of ?Absolute@CExpressionValueStack@@QEAAJXZ @ 0x1801C6928
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Absolute(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // edi
  int *v3; // rbx
  int v4; // eax
  int v5; // xmm6_4
  __m128 v7; // xmm6
  __int32 v8; // xmm0_4
  int v9; // xmm8_4
  int v10; // xmm7_4
  int v11; // xmm6_4
  int v12; // xmm7_4
  int v13; // xmm6_4
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 )
  {
    v2 = 0;
    v3 = (int *)(*(_QWORD *)this + 72LL * (unsigned int)(v1 - 1));
    v4 = v3[16];
    switch ( v4 )
    {
      case 18:
        v5 = *v3 & _xmm;
        CExpressionValue::DestroyCurrent((CExpressionValue *)v3);
        *v3 = v5;
        v3[16] = 18;
        break;
      case 35:
        v12 = *v3 & _xmm;
        v13 = v3[1] & _xmm;
        CExpressionValue::DestroyCurrent((CExpressionValue *)v3);
        *v3 = v12;
        v3[1] = v13;
        v3[16] = 35;
        break;
      case 52:
        COERCE_FLOAT(v8 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
        v9 = *v3 & v8;
        v10 = v3[1] & v8;
        v11 = v3[2] & v8;
        CExpressionValue::DestroyCurrent((CExpressionValue *)v3);
        v3[16] = 52;
        *v3 = v9;
        v3[1] = v10;
        v3[2] = v11;
        break;
      case 69:
        v7 = _mm_and_ps(*(__m128 *)v3, (__m128)_xmm);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v3);
        v3[16] = 69;
        *(__m128 *)v3 = v7;
        break;
      default:
        v2 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          0x106u,
          0LL);
        break;
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
      0xD5u,
      0LL);
  }
  return v2;
}
