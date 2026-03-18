/*
 * XREFs of ?Clamp@CExpressionValueStack@@QEAAJXZ @ 0x1801C416C
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Clamp(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // edi
  int v3; // r9d
  unsigned int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  float v7; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  unsigned int v14; // [rsp+20h] [rbp-58h]
  __int128 v15; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 3 )
  {
    v4 = v1 - 2;
    v2 = 0;
    *((_DWORD *)this + 24) = v4;
    v5 = *(_QWORD *)this + 72LL * (v4 - 1);
    v6 = *(_DWORD *)(v5 + 64);
    if ( v6 == *(_DWORD *)(v5 + 136) && v6 == *(_DWORD *)(v5 + 208) )
    {
      switch ( v6 )
      {
        case 18:
          v7 = fminf(fmaxf(*(float *)v5, *(float *)(v5 + 72)), *(float *)(v5 + 144));
          CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
          *(float *)v5 = v7;
          *(_DWORD *)(v5 + 64) = 18;
          return v2;
        case 35:
          v9 = fminf(fmaxf(*(float *)v5, *(float *)(v5 + 72)), *(float *)(v5 + 144));
          v10 = fminf(fmaxf(*(float *)(v5 + 4), *(float *)(v5 + 76)), *(float *)(v5 + 148));
          CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
          *(float *)v5 = v9;
          *(float *)(v5 + 4) = v10;
          *(_DWORD *)(v5 + 64) = 35;
          return v2;
        case 52:
          v11 = fminf(fmaxf(*(float *)(v5 + 8), *(float *)(v5 + 80)), *(float *)(v5 + 152));
          v12 = fminf(fmaxf(*(float *)(v5 + 4), *(float *)(v5 + 76)), *(float *)(v5 + 148));
          v13 = fminf(fmaxf(*(float *)v5, *(float *)(v5 + 72)), *(float *)(v5 + 144));
          CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
          *(_DWORD *)(v5 + 64) = 52;
          *(float *)v5 = v13;
          *(float *)(v5 + 4) = v12;
          *(float *)(v5 + 8) = v11;
          return v2;
        case 69:
          *(_QWORD *)&v15 = __PAIR64__(
                              COERCE_UNSIGNED_INT(fminf(fmaxf(*(float *)(v5 + 4), *(float *)(v5 + 76)), *(float *)(v5 + 148))),
                              COERCE_UNSIGNED_INT(fminf(fmaxf(*(float *)v5, *(float *)(v5 + 72)), *(float *)(v5 + 144))));
          *((_QWORD *)&v15 + 1) = __PAIR64__(
                                    COERCE_UNSIGNED_INT(fminf(fmaxf(*(float *)(v5 + 12), *(float *)(v5 + 84)), *(float *)(v5 + 156))),
                                    COERCE_UNSIGNED_INT(fminf(fmaxf(*(float *)(v5 + 8), *(float *)(v5 + 80)), *(float *)(v5 + 152))));
          CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
          *(_DWORD *)(v5 + 64) = 69;
          *(_OWORD *)v5 = v15;
          return v2;
      }
      v14 = 1889;
    }
    else
    {
      v14 = 1826;
    }
    v3 = -2147467259;
    v2 = -2147467259;
  }
  else
  {
    v2 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvaluestack.cpp",
      (const char *)0x8000000BLL);
    v3 = -2147483637;
    v14 = 1809;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v3, v14, 0LL);
  return v2;
}
