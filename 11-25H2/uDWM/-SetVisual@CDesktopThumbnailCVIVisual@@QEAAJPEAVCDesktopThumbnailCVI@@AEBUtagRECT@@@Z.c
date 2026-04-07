/*
 * XREFs of ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x18006F1B8
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x1800602E0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x18006EC80 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x1800E3C90 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x1800152DC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180016A48 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003E0FC (-CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x18006F444 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopThumbnailCVIVisual::SetVisual(
        CDesktopThumbnailCVIVisual *this,
        struct CDesktopThumbnailCVI *a2,
        RECT *lprcSrc)
{
  int v6; // eax
  unsigned int v7; // ebx
  CMILRefCountBase *v8; // rcx
  CMILRefCountBase *v9; // rcx
  int v11; // eax
  CMILRefCountBase *v12; // rbx
  int v13; // eax
  unsigned int v14; // esi
  CMILRefCountBase *v15; // rcx
  CMILRefCountBase *v16; // rcx
  CBaseObject *v17; // rcx
  CMILRefCountBase *v18; // rcx
  int v19; // eax
  CMILRefCountBase *v20; // rcx
  CMILRefCountBase *v21; // rcx
  int v22; // [rsp+20h] [rbp-20h]
  CBaseObject *v23; // [rsp+30h] [rbp-10h] BYREF
  CMILRefCountBase *v24; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  CMILRefCountBase *v26; // [rsp+70h] [rbp+30h] BYREF
  CMILRefCountBase *v27; // [rsp+88h] [rbp+48h] BYREF

  v23 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  CopyRect((LPRECT)((char *)this + 280), lprcSrc);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v26);
  v6 = CDesktopThumbnailCVI::CreateBrush(a2, &v26, 0LL, &v27, lprcSrc);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1ED,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v6,
      v22);
    v8 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      CBaseObject::Release(v8);
    }
LABEL_4:
    v9 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      CBaseObject::Release(v9);
    }
    return v7;
  }
  v24 = 0LL;
  v11 = CCompositor::CreateRectangleGeometryProxy(
          *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
          &v24);
  v7 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EE,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v11,
      v22);
    v18 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      CBaseObject::Release(v18);
    }
    if ( v24 )
      CBaseObject::Release(v24);
    goto LABEL_4;
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v23);
  v12 = v24;
  v13 = CDrawGeometryInstruction::Create(v26, v24, &v23);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v19 = CRenderDataVisual::AddInstruction(this, v23);
    v14 = v19;
    if ( v19 >= 0 )
    {
      CVisual::SetInterpolationMode((__int64 *)this, 1);
      v20 = v26;
      *((_QWORD *)this + 32) = v26;
      if ( v20 )
        CMILRefCountBase::AddRef(v20);
      *((_QWORD *)this + 30) = v12;
      if ( v12 )
        CMILRefCountBase::AddRef(v12);
      *((_QWORD *)this + 33) = a2;
      if ( a2 )
        CMILRefCountBase::AddRef(a2);
      v21 = v27;
      *((_QWORD *)this + 31) = v27;
      if ( v21 )
        CMILRefCountBase::AddRef(v21);
      v14 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F0,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
        (const char *)(unsigned int)v19,
        v22);
    }
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v27);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v24);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v23);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EF,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v13,
      v22);
    v15 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      CBaseObject::Release(v15);
    }
    if ( v12 )
      CBaseObject::Release(v12);
    v16 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      CBaseObject::Release(v16);
    }
    v17 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      CBaseObject::Release(v17);
    }
  }
  return v14;
}
