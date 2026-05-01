/*
 * XREFs of ?Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z @ 0x1800B6A98
 * Callers:
 *     ?subscribe_to_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z @ 0x18058C0B0 (-subscribe_to_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?get@?$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@P6AXXZ@Z @ 0x1800B5FDC (-get@-$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@.c)
 *     ?IsGamingOverlayExperienceManagerEnabled@@YA_NXZ @ 0x1800B6BC0 (-IsGamingOverlayExperienceManagerEnabled@@YA_NXZ.c)
 *     ??$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@?$com_ptr@UIInputHostLayout@@@winrt@@QEAAXA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@1@Z @ 0x1800B6C28 (--$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@-$com_ptr@UIIn.c)
 *     ??$Register@UIGameFocusNotificationService@@P81@EAAJPEAUIGameFocusEvents@@PEAK@ZP81@EAAJK@ZPEAVTouchEdgeGestureManager@@@SmartCookie@@QEAAJPEAUIGameFocusNotificationService@@P81@EAAJPEAUIGameFocusEvents@@PEAK@ZP81@EAAJK@ZPEAVTouchEdgeGestureManager@@@Z @ 0x1802B7EAC (--$Register@UIGameFocusNotificationService@@P81@EAAJPEAUIGameFocusEvents@@PEAK@ZP81@EAAJK@ZPEAVT.c)
 *     ??$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@?$com_ptr@UIImmersiveMonitorManager@@@winrt@@QEAAXA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@1@Z @ 0x18058B260 (--$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@-$com_ptr@UIIm.c)
 *     ??$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@?$com_ptr@UIApplicationViewCollection@@@winrt@@QEAAXA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@1@Z @ 0x18058CE30 (--$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@-$com_ptr@UIAp.c)
 *     ??$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@?$com_ptr@UIGameFocusNotificationService@@@winrt@@QEAAXA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@1@Z @ 0x18058CEAC (--$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@-$com_ptr@UIGa.c)
 *     ??$try_capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBUguid@winrt@@@?$com_ptr@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@winrt@@QEAA_NA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBUguid@1@@Z @ 0x18058CFB4 (--$try_capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBUguid@winrt@@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchEdgeGestureManager::Initialize(TouchEdgeGestureManager *this, struct IServiceProvider *a2)
{
  __int64 *v3; // rax
  int v4; // r8d
  int v5; // r9d
  int v6; // eax
  int v7; // [rsp+20h] [rbp-60h]
  int v8; // [rsp+30h] [rbp-50h] BYREF
  const char *v9; // [rsp+38h] [rbp-48h]
  __int64 v10; // [rsp+40h] [rbp-40h]
  char v11; // [rsp+48h] [rbp-38h]
  _BYTE v12[48]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  struct IServiceProvider *v14; // [rsp+98h] [rbp+18h] BYREF

  v14 = a2;
  v3 = wil::details::static_lazy<TouchEdgeGestureTelemetry>::get(
         (__int64)this,
         (void (__cdecl *)())_lambda_a7362a5569191a78ac5e080098becae6_::_lambda_invoker_cdecl_);
  v11 = 0;
  v8 = 0;
  v9 = "TouchEdgeGestureManager::Initialize";
  v10 = 0LL;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v12,
    (struct wil::details::IFailureCallback *)v3,
    (struct wil::CallContextInfo *)&v8,
    1);
  winrt::com_ptr<IInputHostLayout>::capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider * &,_GUID const &>(
    (char *)this + 40,
    IUnknown_QueryService,
    &v14);
  if ( IsGamingOverlayExperienceManagerEnabled() )
    winrt::com_ptr<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager>::try_capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider * &,winrt::guid const &>(
      (char *)this + 48,
      IUnknown_QueryService,
      &v14,
      &winrt::impl::guid_v<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager>);
  winrt::com_ptr<IImmersiveMonitorManager>::capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider * &,_GUID const &>(
    (char *)this + 56,
    IUnknown_QueryService,
    &v14);
  winrt::com_ptr<IApplicationViewCollection>::capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider * &,_GUID const &>(
    (char *)this + 64,
    IUnknown_QueryService,
    &v14);
  winrt::com_ptr<IGameFocusNotificationService>::capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider * &,_GUID const &>(
    (char *)this + 80,
    IUnknown_QueryService,
    &v14);
  v6 = SmartCookie::Register<IGameFocusNotificationService,long (IGameFocusNotificationService::*)(IGameFocusEvents *,unsigned long *),long (IGameFocusNotificationService::*)(unsigned long),TouchEdgeGestureManager *>(
         (int)this + 216,
         *((_QWORD *)this + 10),
         v4,
         v5,
         (__int64)this);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8C,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
      (const char *)(unsigned int)v6,
      v7);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)&v8);
}
