/*
 * XREFs of ?Initialize@?$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThumbnailElement@@@Z @ 0x1804C8890
 * Callers:
 *     ?RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804C8964 (-RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMet.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804CE168 (-RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geo.c)
 *     ?RuntimeClassInitialize@SwitchItemThumbnailElement@@QEAAJAEBUThumbnailSizeMetrics@@PEAUISwitchThumbnailFactory@@PEAUISwitchItem@@@Z @ 0x1804D3898 (-RuntimeClassInitialize@SwitchItemThumbnailElement@@QEAAJAEBUThumbnailSizeMetrics@@PEAUISwitchTh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemGrid@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@AEAPEAVCSwitchItemGrid@@@Z @ 0x1804BF2A8 (--$MakeAndInitialize@V-$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemG.c)
 */

__int64 __fastcall WeakReference::CWeakRefSource<SwitchItemThumbnailElement>::Initialize(__int64 *a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CSwitchItemGrid>,WeakReference::CWeakReference<CSwitchItemGrid>,CSwitchItemGrid * &>(
         a1,
         &v7);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
      (const char *)(unsigned int)v3);
  return v4;
}
