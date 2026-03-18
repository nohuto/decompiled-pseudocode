/*
 * XREFs of ?ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z @ 0x1802287C8
 * Callers:
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801594E8 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB760 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800E9C24 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800EA480 (--1CRegionShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CShape::ClipWithRect(const struct CShape *a1, const struct tagRECT *a2, struct CShape **a3)
{
  struct tagRECT v3; // xmm0
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  struct tagRECT v10; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-78h] BYREF
  int v12; // [rsp+58h] [rbp-60h] BYREF
  __int64 v13; // [rsp+98h] [rbp-20h]

  v3 = *a2;
  v11[1] = 0LL;
  v11[0] = &CRegionShape::`vftable';
  v11[2] = &v12;
  v12 = 0;
  v13 = 0LL;
  v10 = v3;
  CRegionShape::BuildFromRects((__int64)v11, &v10, 1u);
  v7 = CShape::Combine((__int64)a1, v6, (__int64)v11, 0LL, 1, a3);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xB1u, 0LL);
  CRegionShape::~CRegionShape((CRegionShape *)v11);
  return v8;
}
