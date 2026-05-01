/*
 * XREFs of ?Execute@LaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x18063B8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?begin@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x180109018 (-begin@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@d.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180109CB4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@XZ @ 0x18018BDE8 (--DIterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ??0?$ObjectArrayAdapterImpl@UIGameFocusEvents@@V?$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801ACDAC (--0-$ObjectArrayAdapterImpl@UIGameFocusEvents@@V-$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@det.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028D400 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?end@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x1802C20D8 (-end@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@det.c)
 *     ??$CoCreateInstance@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x180576500 (--$CoCreateInstance@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@YA-AV-$com_ptr_t@UIServi.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18063B690 (--1-$com_ptr_t@V-$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@Uerr_re.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063B72C (--1-$test_watcher@V-$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@@tip.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18063BF80 (-start@-$tip_test@V-$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@@tip.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler::Execute(
        winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler *this)
{
  __int64 v1; // rax
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // [rsp+30h] [rbp-79h] BYREF
  __int64 v13; // [rsp+38h] [rbp-71h] BYREF
  __int64 v14; // [rsp+40h] [rbp-69h] BYREF
  volatile signed __int32 *v15; // [rsp+48h] [rbp-61h] BYREF
  __int64 v16; // [rsp+50h] [rbp-59h] BYREF
  __int64 v17; // [rsp+58h] [rbp-51h] BYREF
  int v18; // [rsp+60h] [rbp-49h] BYREF
  __int64 v19[2]; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v20; // [rsp+78h] [rbp-31h] BYREF
  __int64 v21[2]; // [rsp+80h] [rbp-29h] BYREF
  int v22[2]; // [rsp+90h] [rbp-19h] BYREF
  int v23; // [rsp+98h] [rbp-11h] BYREF
  __int64 v24[2]; // [rsp+A0h] [rbp-9h] BYREF
  void **v25; // [rsp+B0h] [rbp+7h] BYREF
  _BYTE v26[40]; // [rsp+B8h] [rbp+Fh] BYREF
  volatile signed __int32 *v27; // [rsp+E0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  char v29; // [rsp+118h] [rbp+6Fh] BYREF
  char v30; // [rsp+120h] [rbp+77h] BYREF
  char v31; // [rsp+128h] [rbp+7Fh] BYREF

  v15 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_LaunchRemoteDesktopUriHandlerTest,_tip_LaunchRemoteDesktopUriHandlerTest>>::start(
    &v15,
    v19);
  v25 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v26,
    (struct wil::details::IFailureCallback *)&v25,
    0LL,
    1);
  v27 = v15;
  if ( v15 )
    _InterlockedIncrement(v15 + 68);
  wil::com_ptr_t<tip2::details::merged_data<_tip_LaunchRemoteDesktopUriHandlerTest,_tip_LaunchRemoteDesktopUriHandlerTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LaunchRemoteDesktopUriHandlerTest,_tip_LaunchRemoteDesktopUriHandlerTest>,wil::err_returncode_policy>((void **)&v15);
  wil::CoCreateInstance<IServiceProvider,wil::err_exception_policy>((__int64 *)v22, &CLSID_ImmersiveShell);
  v17 = 0LL;
  v1 = **(_QWORD **)v22;
  v17 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, GUID *, __int64 *))(v1 + 24))(
         *(_QWORD *)v22,
         &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386,
         &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386,
         &v17);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 18LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\cloudpc\\lib\\launchremotedesktopurihandler.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_39;
  }
  v29 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 112LL))(v17, &v29);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 22LL;
    goto LABEL_7;
  }
  if ( !v29 )
  {
    tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v27 + 2));
    v3 = 50;
    goto LABEL_39;
  }
  v30 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 56LL))(v17, &v30);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 31LL;
    goto LABEL_7;
  }
  if ( v30 )
  {
    tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v27 + 2));
    v3 = -2147467263;
    goto LABEL_39;
  }
  v31 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 96LL))(v17, &v31);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 39LL;
    goto LABEL_7;
  }
  if ( !v31 )
  {
LABEL_38:
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 72LL))(v17);
    tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v27 + 2));
    goto LABEL_39;
  }
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, SID *, GUID *, __int64 *))(**(_QWORD **)v22 + 24LL))(
         *(_QWORD *)v22,
         &SID_VirtualDesktopManager,
         &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
         &v12);
  v3 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (int)"pcshell\\twinui\\cloudpc\\lib\\launchremotedesktopurihandler.cpp",
      (const char *)(unsigned int)v5);
LABEL_19:
    if ( v12 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v12);
    goto LABEL_39;
  }
  v13 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 56LL))(v12, &v13);
  v3 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"pcshell\\twinui\\cloudpc\\lib\\launchremotedesktopurihandler.cpp",
      (const char *)(unsigned int)v6);
LABEL_23:
    if ( v13 )
      winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v13);
    goto LABEL_19;
  }
  details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>(
    (__int64)v19,
    v13);
  details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::begin(
    (__int64)v19,
    (__int64)&v20);
  details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::end(
    (__int64)v19,
    (__int64)&v23);
  while ( 1 )
  {
    if ( v20 == v23 && v21[1] == v24[1] )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v24);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v21);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v19);
      if ( v13 )
        winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v13);
      if ( v12 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v12);
      goto LABEL_38;
    }
    details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::operator*(
      (__int64)&v20,
      (__int64 *)&v15);
    v18 = 0;
    v14 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(volatile signed __int32 *, GUID *, __int64 *))v15)(
           v15,
           &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30,
           &v14);
    v3 = v7;
    if ( v7 < 0 )
    {
      v11 = 54LL;
      goto LABEL_57;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 56LL))(v14, &v18);
    v3 = v7;
    if ( v7 < 0 )
    {
      v11 = 55LL;
LABEL_57:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\cloudpc\\lib\\launchremotedesktopurihandler.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_58;
    }
    if ( v18 )
      break;
    if ( v14 )
      winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    ++v20;
    details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(&v20);
  }
  v16 = 0LL;
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v12)(
         v12,
         &GUID_53f5ca0b_158f_4124_900c_057158060b27,
         &v16);
  v3 = v9;
  if ( v9 < 0 )
  {
    v10 = 59LL;
LABEL_42:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\cloudpc\\lib\\launchremotedesktopurihandler.cpp",
      (const char *)(unsigned int)v9);
    if ( v16 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v16);
LABEL_58:
    if ( v14 )
      winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v24);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v21);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v19);
    goto LABEL_23;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 168LL))(v16, v14, 1LL);
  v3 = v9;
  if ( v9 < 0 )
  {
    v10 = 61LL;
    goto LABEL_42;
  }
  tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v27 + 2));
  if ( v16 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v16);
  if ( v14 )
    winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v14);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v21);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v19);
  if ( v13 )
    winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v13);
  if ( v12 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v12);
  v3 = 0;
LABEL_39:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v22);
  tip2::test_watcher<tip2::details::merged_data<_tip_LaunchRemoteDesktopUriHandlerTest,_tip_LaunchRemoteDesktopUriHandlerTest>>::~test_watcher<tip2::details::merged_data<_tip_LaunchRemoteDesktopUriHandlerTest,_tip_LaunchRemoteDesktopUriHandlerTest>>((__int64)&v25);
  return v3;
}
