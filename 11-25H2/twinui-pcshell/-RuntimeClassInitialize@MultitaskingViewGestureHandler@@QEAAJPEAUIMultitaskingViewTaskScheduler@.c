/*
 * XREFs of ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x180299B00
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewGestureHandler@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x1800FA7AC (--$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z @ 0x1800FB7F8 (-GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z.c)
 *     ?GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ @ 0x1800FB86C (-GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ.c)
 *     ?Completed@?$consume_Windows_UI_Composition_ICompositionCommitBatch@UICompositionCommitBatch@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UCompositionBatchCompletedEventArgs@Composition@UI@34@@Foundation@Windows@3@@Z @ 0x1800FBCB8 (-Completed@-$consume_Windows_UI_Composition_ICompositionCommitBatch@UICompositionCommitBatch@Com.c)
 *     ?InitializeConfig@MultitaskingViewGestureHandler@@AEAAXXZ @ 0x1801F964C (-InitializeConfig@MultitaskingViewGestureHandler@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F9F68 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@Q.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VMultitaskingViewGestureHandler@@@WeakReference@@V12@AEAPEAVMultitaskingViewGestureHandler@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VMultitaskingViewGestureHandler@@@WeakReference@@AEAPEAVMultitaskingViewGestureHandler@@@Z @ 0x18021A1C0 (--$MakeAndInitialize@V-$CWeakReference@VMultitaskingViewGestureHandler@@@WeakReference@@V12@AEAP.c)
 *     ?CacheMonitorInfoCollectionAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1802323D0 (-CacheMonitorInfoCollectionAsync@MultitaskingViewGestureHandler@@AEAA-AUfire_and_forget@winrt@@X.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::InputGestureManager_winrt::Windows::UI::Internal::Input::InputGestureOperation_::TypedEventHandler_winrt::Windows::UI::Internal::Input::InputGestureManager_winrt::Windows::UI::Internal::Input::InputGestureOperation___lambda_e058c550b9a0e8fe978c38ba0103cacb___ @ 0x180234410 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Internal--Input--InputGestureM.c)
 *     ??$MakeAndInitialize@VMultitaskingViewGestureState@@UIMultitaskingViewGestureStateInternal@@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewGestureStateInternal@@@WRL@Microsoft@@@012@@Z @ 0x180299CA0 (--$MakeAndInitialize@VMultitaskingViewGestureState@@UIMultitaskingViewGestureStateInternal@@$$V@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MultitaskingViewGestureHandler::RuntimeClassInitialize(
        LARGE_INTEGER *this,
        struct IMultitaskingViewTaskScheduler *a2,
        struct IMultitaskingViewVisibilityService *a3)
{
  LARGE_INTEGER v5; // rcx
  int v6; // eax
  __int64 v7; // r9
  LARGE_INTEGER v8; // rbx
  __int64 *v9; // rax
  __int64 *v10; // rax
  int v11; // eax
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  LARGE_INTEGER *v15; // [rsp+40h] [rbp+20h] BYREF
  __int64 v16; // [rsp+50h] [rbp+30h] BYREF
  LARGE_INTEGER v17; // [rsp+58h] [rbp+38h]

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&this[4], (__int64)a2);
  if ( (struct IMultitaskingViewVisibilityService *)this[9].QuadPart != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IMultitaskingViewVisibilityService *))(*(_QWORD *)a3 + 8LL))(a3);
    v5 = this[9];
    this[9].QuadPart = (LONGLONG)a3;
    if ( v5.QuadPart )
      (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)v5.QuadPart + 16LL))(v5);
  }
  MultitaskingViewGestureHandler::InitializeConfig((MultitaskingViewGestureHandler *)this);
  QueryPerformanceFrequency(this + 25);
  v15 = this;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&this[27]);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<MultitaskingViewGestureHandler>,WeakReference::CWeakReference<MultitaskingViewGestureHandler>,MultitaskingViewGestureHandler * &>(
         (LARGE_INTEGER *)&this[27].QuadPart,
         &v15);
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
      (const char *)(unsigned int)v6);
  v8 = this[27];
  v17 = v8;
  if ( v8.QuadPart )
    (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)v8.QuadPart + 8LL))(v8);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
    1u,
    3u,
    v7);
  v9 = (__int64 *)winrt::Windows::UI::Internal::Input::InputSite::GetForCurrentProcess((__int64)&v16);
  v10 = (__int64 *)winrt::Windows::UI::Internal::Input::InputGestureManager::GetForInputSite(
                     (const struct winrt::Windows::UI::Internal::Input::InputSite *)&v15,
                     v9);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)&this[30], v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::InputGestureManager_winrt::Windows::UI::Internal::Input::InputGestureOperation_::TypedEventHandler_winrt::Windows::UI::Internal::Input::InputGestureManager_winrt::Windows::UI::Internal::Input::InputGestureOperation___lambda_e058c550b9a0e8fe978c38ba0103cacb___(
    &v15,
    (__int64)this);
  winrt::impl::consume_Windows_UI_Composition_ICompositionCommitBatch<winrt::Windows::UI::Composition::ICompositionCommitBatch>::Completed(
    (__int64 **)&this[30],
    &v16,
    (__int64 *)&v15);
  if ( v15 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v15);
  MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync((__int64)this, (__int64)&v15);
  v11 = Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewGestureState,IMultitaskingViewGestureStateInternal,>(&this[10]);
  v12 = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)v11);
  if ( v8.QuadPart )
    (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)v8.QuadPart + 16LL))(v8);
  return v12;
}
