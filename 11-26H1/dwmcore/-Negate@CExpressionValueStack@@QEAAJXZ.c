/*
 * XREFs of ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x180192F2C
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??GD2DMatrix@@QEBA?AU0@XZ @ 0x180292C64 (--GD2DMatrix@@QEBA-AU0@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Negate(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // esi
  __int64 v4; // rdi
  int v5; // eax
  int v6; // xmm6_4
  int v7; // xmm8_4
  int v8; // xmm7_4
  int v9; // xmm6_4
  _OWORD *v10; // rbx
  __m128 v11; // xmm11
  int v12; // xmm7_4
  int v13; // xmm6_4
  __m128 v14; // xmm6
  _BYTE v15[160]; // [rsp+30h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 )
  {
    v2 = 0;
    v4 = *(_QWORD *)this + 72LL * (unsigned int)(v1 - 1);
    v5 = *(_DWORD *)(v4 + 64);
    switch ( v5 )
    {
      case 35:
        *(_DWORD *)v4 ^= _xmm;
        *(_DWORD *)(v4 + 4) ^= _xmm;
        *(_DWORD *)(v4 + 64) = 35;
        break;
      case 18:
        v6 = *(_DWORD *)v4 ^ _xmm;
        CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
        *(_DWORD *)v4 = v6;
        *(_DWORD *)(v4 + 64) = 18;
        break;
      case 52:
        v7 = *(_DWORD *)v4 ^ _xmm;
        v8 = *(_DWORD *)(v4 + 4) ^ _xmm;
        v9 = *(_DWORD *)(v4 + 8) ^ _xmm;
        CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
        *(_DWORD *)(v4 + 64) = 52;
        *(_DWORD *)v4 = v7;
        *(_DWORD *)(v4 + 4) = v8;
        *(_DWORD *)(v4 + 8) = v9;
        break;
      case 69:
        v14 = _mm_xor_ps(*(__m128 *)v4, (__m128)_xmm);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
        *(_DWORD *)(v4 + 64) = 69;
        *(__m128 *)v4 = v14;
        break;
      case 104:
        v11 = _mm_xor_ps(*(__m128 *)v4, (__m128)_xmm);
        v12 = *(_DWORD *)(v4 + 16) ^ _xmm;
        v13 = *(_DWORD *)(v4 + 20) ^ _xmm;
        CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
        *(_DWORD *)(v4 + 64) = 104;
        *(__m128 *)v4 = v11;
        *(_DWORD *)(v4 + 16) = v12;
        *(_DWORD *)(v4 + 20) = v13;
        break;
      case 265:
        v10 = (_OWORD *)D2DMatrix::operator-(v4, v15);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
        *(_DWORD *)(v4 + 64) = 265;
        *(_OWORD *)v4 = *v10;
        *(_OWORD *)(v4 + 16) = v10[1];
        *(_OWORD *)(v4 + 32) = v10[2];
        *(_OWORD *)(v4 + 48) = v10[3];
        break;
      default:
        v2 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          0x156u,
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
      0x121u,
      0LL);
  }
  return v2;
}
