/*
 * XREFs of ??1CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804A3FB4
 * Callers:
 *     ??1CSwitchItemElement@@UEAA@XZ @ 0x1804A4098 (--1CSwitchItemElement@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VHotTrackingElement@@UIMultitaskingViewGridElement@@UISwitchItemElement@@UIGlyphButtonHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804A4210 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VHotTrackingElement@@UIMultitaskingVi.c)
 *     ??1CVirtualDesktopBarElement@@UEAA@XZ @ 0x1804A7B74 (--1CVirtualDesktopBarElement@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@U?$ChainInterfaces@UIAnimatableScrollViewer@@UIScrollViewer@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804A7CB0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@U-$Cha.c)
 *     ??1CShrinkButtonElement@@QEAA@XZ @ 0x1804AB070 (--1CShrinkButtonElement@@QEAA@XZ.c)
 *     ??1CSwitchItemGrid@@UEAA@XZ @ 0x1804B3ED0 (--1CSwitchItemGrid@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@UISwitchItemGrid@@UIObservableObjectArrayChanged@@UIObservableObjectArrayChangedBeginEnd@@UIMultitaskingViewTelemetryHost@@UIScrollableElement@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804B3F90 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@UISwit.c)
 *     ??1CScrollViewerHost@@UEAA@XZ @ 0x1804B67B4 (--1CScrollViewerHost@@UEAA@XZ.c)
 *     ??1CMultitaskingViewFrameElement@@UEAA@XZ @ 0x1804B783C (--1CMultitaskingViewFrameElement@@UEAA@XZ.c)
 *     ??1CGlyphButtonElement@@UEAA@XZ @ 0x1804BDA14 (--1CGlyphButtonElement@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewButtonElement@@UIGlyphButton@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804BDE00 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewButtonElement@@UIGl.c)
 *     ??1CScrollButtonContainer@@UEAA@XZ @ 0x1804C59C0 (--1CScrollButtonContainer@@UEAA@XZ.c)
 *     ??1CScrollViewer@@UEAA@XZ @ 0x1804C6910 (--1CScrollViewer@@UEAA@XZ.c)
 *     ??1LightDismissElement@@UEAA@XZ @ 0x1804C7DD4 (--1LightDismissElement@@UEAA@XZ.c)
 *     ??1InputEaterElement@@UEAA@XZ @ 0x1804C8200 (--1InputEaterElement@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804C8250 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@@WRL@M.c)
 *     ??1CVirtualDesktopContainerElement@@UEAA@XZ @ 0x1804CAB84 (--1CVirtualDesktopContainerElement@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@UIObservableObjectArrayChanged@@UIVirtualDesktopContainerElement@@UIScrollableElement@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804CACA0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@UIObse.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804A41E4 (--1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMultitaskingViewElementBase::~CMultitaskingViewElementBase(CMultitaskingViewElementBase *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 *v4; // rdi
  unsigned __int64 i; // rsi

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 24);
  v2 = *((_QWORD *)this + 23);
  if ( v2 )
    *(_QWORD *)(v2 + 16) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 21);
  CMultitaskingViewElementBase::PointerTracking::~PointerTracking((CMultitaskingViewElementBase *)((char *)this + 96));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 10);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = (unsigned __int64 *)((char *)this + 24);
  if ( *((_QWORD *)this + 2) )
  {
    for ( i = 0LL; i < *v4; ++i )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*((_QWORD *)this + 2) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  *v4 = 0LL;
  *((_QWORD *)this + 5) = 0LL;
}
