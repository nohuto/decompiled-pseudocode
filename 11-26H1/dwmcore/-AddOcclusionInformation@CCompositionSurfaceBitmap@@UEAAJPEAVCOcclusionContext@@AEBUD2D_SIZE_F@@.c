/*
 * XREFs of ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180189280
 * Callers:
 *     <none>
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x180189610 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x180189638 (-GetBorderColor@CCompositionSurfaceBitmap@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ @ 0x1801896A0 (-IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ.c)
 *     ?UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x1801896D0 (-UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801FBE18 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180202920 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180202EAC (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddOcclusionInformation(
        CCompositionSurfaceBitmap *this,
        struct COcclusionContext *a2,
        struct D2D_SIZE_F *a3)
{
  char v6; // r14
  float width; // xmm7_4
  float height; // xmm6_4
  __int64 v9; // r8
  float bottom; // xmm9_4
  float right; // xmm10_4
  float top; // xmm11_4
  float left; // xmm8_4
  __int64 v14; // rcx
  bool v15; // bl
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ebx
  struct D2D_RECT_F v20; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v21[64]; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+88h] [rbp-80h]
  struct _D3DCOLORVALUE v23; // [rsp+98h] [rbp-70h] BYREF
  struct D2D_RECT_F v24; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v25[2]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 9) + 32LL))((char *)this + 72) )
    return 0LL;
  v22 = 0;
  *(_OWORD *)v25 = 0LL;
  v24 = 0LL;
  v20 = 0LL;
  v6 = CCompositionSurfaceBitmap::CalcImageTransform(this, a3, (CMILMatrix *)v21, &v24, (__int64)v25);
  if ( *(float *)&v25[1] <= *(float *)v25
    || *((float *)&v25[1] + 1) <= *((float *)v25 + 1)
    || !CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)v21) )
  {
    return 0LL;
  }
  width = a3->width;
  height = a3->height;
  if ( !CCompositionSurfaceBitmap::UseLayoutSizeForBounds(this, a3)
    || (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(this)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(CCompositionSurfaceBitmap::GetBorderColor(this, &v23)->a - 1.0) & _xmm) >= 0.0000011920929 )
  {
    if ( v6 )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v21, &v24, &v20.left);
      bottom = v20.bottom;
      right = v20.right;
      top = v20.top;
      left = v20.left;
    }
    else
    {
      left = v24.left;
      top = v24.top;
      right = v24.right;
      bottom = v24.bottom;
      v20 = v24;
    }
    if ( CCompositionSurfaceBitmap::UseLayoutSizeForBounds(this, a3) )
    {
      if ( left < 0.0 )
        v20.left = 0.0;
      if ( top < 0.0 )
        v20.top = 0.0;
      if ( right > width )
        v20.right = width;
      if ( bottom > height )
        v20.bottom = height;
      if ( IsEmpty(&v20) )
      {
        *(_QWORD *)&v20.right = 0LL;
        *(_QWORD *)&v20.left = 0LL;
      }
    }
  }
  else
  {
    v20.right = width;
    v20.bottom = height;
  }
  v14 = *((_QWORD *)this + 12);
  v15 = v14 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 296LL))(v14);
  LOBYTE(v9) = v15;
  COcclusionContext::CollectRectangleForOcclusion(a2, &v20, v9);
  if ( !COcclusionContext::IsOverlayCandidateCollectionEnabled(a2) )
    return 0LL;
  if ( !v15 )
    return 0LL;
  v17 = COcclusionContext::CheckAndRecordOverlayCandidate(
          v16,
          *((_QWORD *)a2 + 138),
          *((_QWORD *)this + 12),
          (unsigned int)v21,
          0LL);
  v18 = v17;
  if ( v17 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD0,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionsurfacebitmap.cpp",
    (const char *)(unsigned int)v17);
  return v18;
}
