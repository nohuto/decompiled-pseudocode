/*
 * XREFs of ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800834D4
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180025DF0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180066670 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x1800E0750 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 * Callees:
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180014214 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CVisualBrush@@QEAA@XZ @ 0x180082324 (--1CVisualBrush@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800835D0 (--1-$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetVisualBrush@CDesktopThumbnailCVI@@QEAAJPEAVCVisualBrush@@@Z @ 0x1800835F8 (-GetVisualBrush@CDesktopThumbnailCVI@@QEAAJPEAVCVisualBrush@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4CVisualBrush@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800AD5DC (--4CVisualBrush@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopThumbnailCVIVisual::SetVisual(
        struct tagRECT *this,
        struct CDesktopThumbnailCVI *a2,
        const struct tagRECT *a3)
{
  int VisualBrush; // eax
  __int64 v6; // r8
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_OWORD *)v10 = 0LL;
  CopyRect(this + 15, a3);
  VisualBrush = CDesktopThumbnailCVI::GetVisualBrush(a2, (struct CVisualBrush *)v10);
  v7 = VisualBrush;
  if ( VisualBrush >= 0 )
  {
    CVisual::SetInterpolationMode((__int64)this, 1LL, v6);
    v8 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>((__int64)this, v10[0]);
    v7 = v8;
    if ( v8 >= 0 )
    {
      CVisualBrush::operator=(&this[14], v10);
      *(_QWORD *)&this[13].left = a2;
      if ( a2 )
        CBaseObject::AddRef(a2);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E3,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
        (const char *)(unsigned int)v8,
        v10[0]);
    }
    CVisualBrush::~CVisualBrush((CVisualBrush *)v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DF,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)VisualBrush,
      v10[0]);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>(&v10[1]);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(v10);
  }
  return v7;
}
