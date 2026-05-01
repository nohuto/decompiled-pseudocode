/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopBarElement@@UIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@$$QEAPEAUIObservableObjectArray@@$$QEAPEAUIVirtualDesktopElementFactory@@$$QEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804A765C
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1804A80A0 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CVirtualDesktopBarElement@@QEAA@XZ @ 0x1804A79AC (--0CVirtualDesktopBarElement@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804BC2E8 (-RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopBarElement,IMultitaskingViewElement,VirtualDesktopMetrics &,Geometry::CRect const &,IObservableObjectArray *,IVirtualDesktopElementFactory *,ISwitchThumbnailFactory *>(
        _QWORD *a1,
        const struct VirtualDesktopMetrics *a2,
        const struct Geometry::CRect *a3,
        struct IObservableObjectArray **a4,
        struct IVirtualDesktopElementFactory **a5,
        struct ISwitchThumbnailFactory **a6)
{
  void *v10; // rax
  int v11; // edi
  CVirtualDesktopBarElement *v12; // rbx
  void *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = operator new(0x310uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v10;
  if ( v10 )
  {
    v12 = CVirtualDesktopBarElement::CVirtualDesktopBarElement((CVirtualDesktopBarElement *)v10);
    v14 = 0LL;
    v11 = CVirtualDesktopBarElement::RuntimeClassInitialize(v12, a2, a3, *a4, *a5, *a6);
    if ( v11 >= 0 )
    {
      v11 = (**(__int64 (__fastcall ***)(CVirtualDesktopBarElement *, GUID *, _QWORD *))v12)(
              v12,
              &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
              a1);
      (*(void (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    else if ( v12 )
    {
      (*(void (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v14);
  return (unsigned int)v11;
}
