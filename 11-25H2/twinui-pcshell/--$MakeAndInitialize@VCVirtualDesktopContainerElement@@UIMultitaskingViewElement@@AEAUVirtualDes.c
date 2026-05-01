/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopContainerElement@@UIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@AEAPEAUIObservableObjectArray@@AEAPEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@AEAPEAUIObservableObjectArray@@AEAPEAUIVirtualDesktopElementFactory@@$$QEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804BBE54
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopContainerElement@@UIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@AEAPEAUIObservableObjectArray@@AEAPEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@012@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@AEAPEAUIObservableObjectArray@@AEAPEAUIVirtualDesktopElementFactory@@$$QEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804BBF54 (--$MakeAndInitialize@VCVirtualDesktopContainerElement@@UIMultitaskingViewElement@@A_ea_1804BBF54.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CVirtualDesktopContainerElement@@QEAA@XZ @ 0x1804CA9D4 (--0CVirtualDesktopContainerElement@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopContainerElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804CBDD4 (-RuntimeClassInitialize@CVirtualDesktopContainerElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopContainerElement,IMultitaskingViewElement,VirtualDesktopMetrics &,Geometry::CRect const &,IObservableObjectArray * &,IVirtualDesktopElementFactory * &,ISwitchThumbnailFactory *>(
        _QWORD *a1,
        const struct VirtualDesktopMetrics *a2,
        const struct Geometry::CRect *a3,
        struct IObservableObjectArray **a4,
        struct IVirtualDesktopElementFactory **a5,
        struct ISwitchThumbnailFactory **a6)
{
  void *v10; // rax
  int v11; // edi
  CVirtualDesktopContainerElement *v12; // rbx
  void *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = operator new(0x368uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v10;
  if ( v10 )
  {
    v12 = CVirtualDesktopContainerElement::CVirtualDesktopContainerElement((CVirtualDesktopContainerElement *)v10);
    v14 = 0LL;
    v11 = CVirtualDesktopContainerElement::RuntimeClassInitialize(v12, a2, a3, *a4, *a5, *a6);
    if ( v11 >= 0 )
    {
      v11 = (**(__int64 (__fastcall ***)(CVirtualDesktopContainerElement *, GUID *, _QWORD *))v12)(
              v12,
              &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
              a1);
      (*(void (__fastcall **)(CVirtualDesktopContainerElement *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    else if ( v12 )
    {
      (*(void (__fastcall **)(CVirtualDesktopContainerElement *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v14);
  return (unsigned int)v11;
}
