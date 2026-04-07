/*
 * XREFs of ?GetShadowMargins@CWindowBorder@@QEAA?AU_MARGINS@@XZ @ 0x1800101A0
 * Callers:
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x1800106AC (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?GetShadowParameters@CWindowBorder@@CAXW4ShadowStyle@1@HPEAM111@Z @ 0x180010240 (-GetShadowParameters@CWindowBorder@@CAXW4ShadowStyle@1@HPEAM111@Z.c)
 */

struct _MARGINS *__fastcall CWindowBorder::GetShadowMargins(CWindowBorder *this, struct _MARGINS *__return_ptr retstr)
{
  float v3; // xmm0_4
  float v4; // xmm4_4
  float v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0.0;
  v7 = 0;
  *retstr = 0LL;
  CWindowBorder::GetShadowParameters(*((unsigned int *)this + 64), *((unsigned int *)this + 63), &v6, &v7, &v9, &v8);
  v3 = v6 + 0.5;
  v4 = (float)(v6 * 1.5) + 0.5;
  retstr->cyTopHeight = (int)(float)((float)(v6 * 0.5) + 0.5);
  retstr->cxLeftWidth = (int)v3;
  retstr->cxRightWidth = (int)v3;
  retstr->cyBottomHeight = (int)v4;
  return retstr;
}
