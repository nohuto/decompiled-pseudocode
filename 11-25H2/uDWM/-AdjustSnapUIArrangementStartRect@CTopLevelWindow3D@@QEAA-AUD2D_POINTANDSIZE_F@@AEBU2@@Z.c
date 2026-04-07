/*
 * XREFs of ?AdjustSnapUIArrangementStartRect@CTopLevelWindow3D@@QEAA?AUD2D_POINTANDSIZE_F@@AEBU2@@Z @ 0x1800D08B4
 * Callers:
 *     ?AdjustSnapUIArrangementStartRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@AEBU6785@@Z @ 0x1800DB46C (-AdjustSnapUIArrangementStartRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ?GetSnapThumbnailLocation@CTopLevelWindow3D@@QEAA?AUtagRECT@@XZ @ 0x180097B24 (-GetSnapThumbnailLocation@CTopLevelWindow3D@@QEAA-AUtagRECT@@XZ.c)
 *     _o_roundf_0 @ 0x18009B6DC (_o_roundf_0.c)
 */

__int64 __fastcall CTopLevelWindow3D::AdjustSnapUIArrangementStartRect(CTopLevelWindow3D *a1, __int64 a2, _OWORD *a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  __m128i v6; // xmm6
  __int64 v7; // r11
  float v8; // xmm7_4
  float v9; // xmm0_4
  int v10; // ecx
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm7_4
  __int64 result; // rax
  struct tagRECT v15; // [rsp+20h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a1 + 37);
  v5 = *((_QWORD *)a1 + 36);
  *(_OWORD *)a2 = *a3;
  v6 = *(__m128i *)(v3 + 88);
  CTopLevelWindow3D::GetSnapThumbnailLocation(a1, &v15);
  v8 = *(float *)(v7 + 588);
  v9 = (float)((float)v15.left - (float)(_mm_cvtsi128_si32(v6) + *(_DWORD *)(v5 + 48))) + *(float *)a2;
  o_roundf_0();
  v10 = *(_DWORD *)(v5 + 52);
  *(float *)a2 = v9;
  v11 = (float)((float)v15.top - (float)(_mm_cvtsi128_si32(_mm_srli_si128(v6, 8)) + v10)) + *(float *)(a2 + 4);
  o_roundf_0();
  *(float *)(a2 + 4) = v11;
  v12 = v8 * *(float *)(a2 + 8);
  o_roundf_0();
  v13 = v8 * *(float *)(a2 + 12);
  *(float *)(a2 + 8) = v12;
  o_roundf_0();
  result = a2;
  *(float *)(a2 + 12) = v13;
  return result;
}
