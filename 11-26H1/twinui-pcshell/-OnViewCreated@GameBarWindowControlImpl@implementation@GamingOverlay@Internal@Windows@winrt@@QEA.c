/*
 * XREFs of ?OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x1802375C0
 * Callers:
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034F484 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$get_weak@VWindowDragInputProvider@@@?$root_implements@VWindowDragInputProvider@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VWindowDragInputProvider@@@2@XZ @ 0x180054E60 (--$get_weak@VWindowDragInputProvider@@@-$root_implements@VWindowDragInputProvider@@UIInspectable.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@W4GameBarWindowState@3456@@Z @ 0x180217B84 (-UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 *     ??$as@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180229768 (--$as@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknown.c)
 *     ?ViewVisibilityChanged@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UViewVisibilityChangedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x18023FDFC (-ViewVisibilityChanged@-$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$?0V_lambda_b98f950e7777631331b22888bc58ec5e_@@@?$TypedEventHandler@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@UIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@V_lambda_b98f950e7777631331b22888bc58ec5e_@@@Z @ 0x18035A3D8 (--$-0V_lambda_b98f950e7777631331b22888bc58ec5e_@@@-$TypedEventHandler@UIClientWindowState@ViewMa.c)
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18035AE30 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18035C7F0 (-ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnViewCreated(
        RTL_SRWLOCK *this,
        struct IApplicationFrameWrapper **a2)
{
  PVOID Ptr; // rdi
  __int64 (__fastcall *v5)(PVOID, RTL_SRWLOCK *); // rbx
  struct IApplicationFrameWrapper **v6; // r14
  int v7; // eax
  unsigned int v8; // ebx
  struct IApplicationFrameWrapper *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // ebx
  const char *v22; // r9
  const char *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  char v26; // [rsp+20h] [rbp-B8h]
  __int64 v27; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v29[24]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-88h] BYREF
  int v31; // [rsp+5Ch] [rbp-7Ch]
  __int64 v32; // [rsp+60h] [rbp-78h] BYREF
  __int128 v33; // [rsp+68h] [rbp-70h] BYREF
  __int64 v34; // [rsp+78h] [rbp-60h]
  __int64 v35; // [rsp+80h] [rbp-58h] BYREF
  RTL_SRWLOCK *v36; // [rsp+88h] [rbp-50h] BYREF
  __int128 v37; // [rsp+90h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v36 = 0LL;
  wil::AcquireSRWLockExclusive(&v36, this + 22);
  Ptr = this[4].Ptr;
  v5 = *(__int64 (__fastcall **)(PVOID, RTL_SRWLOCK *))(*(_QWORD *)Ptr + 24LL);
  v6 = (struct IApplicationFrameWrapper **)&this[5];
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&this[5]);
  v7 = v5(Ptr, this + 5);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
      (const char *)(unsigned int)v7);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v36);
    return v8;
  }
  if ( a2 )
  {
    v10 = *v6;
    if ( *v6 )
    {
      *a2 = v10;
      (*(void (__fastcall **)(struct IApplicationFrameWrapper *))(*(_QWORD *)v10 + 8LL))(v10);
    }
    else
    {
      *a2 = 0LL;
    }
  }
  v35 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64 *))(*(_QWORD *)*v6 + 32LL))(*v6, &v35);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF4,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
      (const char *)(unsigned int)v11);
    if ( v35 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v35);
LABEL_30:
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v36);
    return v12;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, __int64))(*(_QWORD *)v35 + 72LL))(
          v35,
          L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
          1LL);
  v12 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x104,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
      (const char *)(unsigned int)v13);
    if ( v35 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v35);
    goto LABEL_30;
  }
  v14 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)*v6 + 120LL))(*v6, 1LL);
  v12 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x107,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
      (const char *)(unsigned int)v14);
    if ( v35 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v35);
    goto LABEL_30;
  }
  v15 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)*v6 + 48LL))(*v6, 4LL);
  v12 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10A,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
      (const char *)(unsigned int)v15);
    if ( v35 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v35);
    goto LABEL_30;
  }
  v16 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, PVOID))(*(_QWORD *)*v6 + 104LL))(*v6, this[3].Ptr);
  v12 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
      (const char *)(unsigned int)v16);
    if ( v35 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v35);
    goto LABEL_30;
  }
  v17 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, _QWORD))(*(_QWORD *)*v6 + 128LL))(*v6, 0LL);
  v12 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
      (const char *)(unsigned int)v17);
    if ( v35 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v35);
    goto LABEL_30;
  }
  winrt::impl::as<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v30,
    (__int64 (__fastcall ***)(_QWORD, void *, _QWORD **))this[3].Ptr);
  *(_QWORD *)&v37 = &winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnClientWindowReadyForPresentationChanged;
  DWORD2(v37) = 0;
  HIDWORD(v37) = v31;
  winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
    (__int64)this,
    &v28);
  v18 = v28;
  v28 = 0LL;
  *(_QWORD *)v29 = v18;
  *(_OWORD *)&v29[8] = v37;
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs>(
    &v27,
    v29);
  if ( v28 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v28);
  this[21].Ptr = *(PVOID *)winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::ViewVisibilityChanged(
                             &v30,
                             &v37,
                             &v27);
  v32 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 24LL))(v35, &v32);
  v21 = v19;
  if ( v19 >= 0 )
  {
    if ( v32 )
    {
      LODWORD(v37) = 1;
      *(_QWORD *)&v33 = 24LL;
      *((_QWORD *)&v33 + 1) = &v37;
      v34 = 4LL;
      if ( !(unsigned int)SetWindowCompositionAttribute(v32, &v33) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x129,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
          v22);
      *(_QWORD *)v29 = 25LL;
      *(_QWORD *)&v29[8] = &v37;
      *(_QWORD *)&v29[16] = 4LL;
      v33 = *(_OWORD *)v29;
      v34 = 4LL;
      if ( !(unsigned int)SetWindowCompositionAttribute(v32, &v33) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x134,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
          v23);
    }
    LOBYTE(v20) = v26;
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ApplyPendingValues(this, v20);
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::UpdateWindowState(
      (__int64)this,
      v24,
      1);
    if ( BYTE1(this[13].Ptr) && LOBYTE(this[13].Ptr) )
    {
      LOBYTE(v25) = v26;
      winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ShowInternal(this, v25);
    }
    if ( v27 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v27);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v30);
    if ( v35 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v35);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v36);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11E,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
      (const char *)(unsigned int)v19);
    if ( v27 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v27);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v30);
    if ( v35 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v35);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v36);
    return v21;
  }
}
