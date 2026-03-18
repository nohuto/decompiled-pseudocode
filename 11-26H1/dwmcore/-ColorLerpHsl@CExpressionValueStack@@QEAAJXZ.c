/*
 * XREFs of ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x1801A9560
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1801A9998 (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1801A9AD4 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpHsl(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  int v3; // r9d
  unsigned int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  float v8; // xmm6_4
  ColorSpaceHelpers *v9; // rcx
  float v10; // xmm4_4
  ColorSpaceHelpers *v11; // rcx
  __int128 v12; // xmm0
  unsigned int v13; // [rsp+20h] [rbp-60h]
  float *v14; // [rsp+40h] [rbp-40h] BYREF
  float v15; // [rsp+48h] [rbp-38h] BYREF
  float v16; // [rsp+4Ch] [rbp-34h] BYREF
  float v17; // [rsp+50h] [rbp-30h] BYREF
  float v18; // [rsp+54h] [rbp-2Ch] BYREF
  float v19; // [rsp+58h] [rbp-28h] BYREF
  float v20; // [rsp+5Ch] [rbp-24h] BYREF
  __int128 v21; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 3 )
  {
    v5 = v1 - 2;
    v2 = 0;
    *((_DWORD *)this + 24) = v5;
    v6 = *(_QWORD *)this + 72LL * (v5 - 1);
    v7 = *(_DWORD *)(v6 + 64);
    v8 = *(float *)(v6 + 144);
    if ( *(_DWORD *)(v6 + 208) == 18 && v7 == *(_DWORD *)(v6 + 136) )
    {
      if ( v7 == 70 )
      {
        ColorSpaceHelpers::Color_HSLAfromRGBA(
          this,
          *(float *)(v6 + 4),
          *(float *)(v6 + 8),
          *(float *)(v6 + 12),
          COERCE_FLOAT(&v14),
          (float *)&v14 + 1,
          &v15,
          &v16,
          v14);
        ColorSpaceHelpers::Color_HSLAfromRGBA(
          v9,
          *(float *)(v6 + 76),
          *(float *)(v6 + 80),
          *(float *)(v6 + 84),
          COERCE_FLOAT(&v17),
          &v18,
          &v19,
          &v20,
          v14);
        v10 = fmaxf(0.0, fminf(v8, 1.0));
        v21 = 0LL;
        ColorSpaceHelpers::Color_RGBAfromHSLA(
          v11,
          (float)((float)(v18 - *((float *)&v14 + 1)) * v10) + *((float *)&v14 + 1),
          (float)((float)(v19 - v15) * v10) + v15,
          (float)((float)(v20 - v16) * v10) + v16,
          COERCE_FLOAT(&v21),
          (float *)&v21 + 1,
          (float *)&v21 + 2,
          (float *)&v21 + 3,
          v14);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
        v12 = v21;
        *(_DWORD *)(v6 + 64) = 70;
        *(_OWORD *)v6 = v12;
        return v2;
      }
      v13 = 2450;
    }
    else
    {
      v13 = 2398;
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
    v13 = 2380;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v3, v13, 0LL);
  return v2;
}
