/*
 * XREFs of ?Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1804AE1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180077520 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_180077520.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180077C80 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180131238 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180324614 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804AD248 (--1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1804AE5BC (-StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?SwitchToSelectedItemAndDismiss@CAltTabViewHost@@UEAAJXZ @ 0x1804AEAD0 (-SwitchToSelectedItemAndDismiss@CAltTabViewHost@@UEAAJXZ.c)
 *     ?_RegisterForMonitorEvents@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@IEAAJPEAUIUnknown@@@Z @ 0x1804AEB20 (-_RegisterForMonitorEvents@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@IEAAJPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAltTabViewHost::Show(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  __int64 (__fastcall ****v13)(_QWORD, GUID *, __int64 *); // rax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rbx
  int v16; // eax
  char v17; // bl
  __int64 v18; // rbx
  void (__fastcall *v19)(__int64, __int64, GUID *, __int64 *); // rsi
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h]
  char v30; // [rsp+60h] [rbp-A0h]
  __int128 v31; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v32[42]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  v27 = (a1 + 24) & -(__int64)(a1 != 0);
  v28 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v27, 1);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v32,
    (__int64)"ShowAltTab");
  v32[0] = (volatile signed __int32 *)&MultitaskingViewTelemetry::ShowAltTab::`vftable';
  MultitaskingViewTelemetry::ShowAltTab::StartActivity((MultitaskingViewTelemetry::ShowAltTab *)v32);
  v8 = *winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
          &v26,
          a1);
  v29 = v8;
  v30 = 1;
  v9 = CMultitaskingViewHostBase<IAltTabViewHost>::_RegisterForMonitorEvents(a1, a2);
  v10 = v9;
  if ( v9 >= 0 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 184), a2);
    v31 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v31);
    v10 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCC,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
        (const char *)(unsigned int)v11);
      CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(v8);
      goto LABEL_26;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64))(**(_QWORD **)(a1 + 160) + 24LL))(
            *(_QWORD *)(a1 + 160),
            &v31,
            3LL);
    v10 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
        (const char *)(unsigned int)v12);
      CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(v8);
      goto LABEL_26;
    }
    v24 = 0LL;
    if ( !a4 )
      goto LABEL_16;
    v25 = 0LL;
    v13 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 144) + 24LL))(
                                                                  *(_QWORD *)(a1 + 144),
                                                                  &v26);
    v14 = *v13;
    v15 = ***v13;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    v16 = v15(v14, &GUID_ab2611a6_5a19_4261_a11a_5f77866165e6, &v25);
    if ( v16 >= 0 )
    {
      v17 = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD8,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
        (const char *)(unsigned int)v16);
      v17 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    if ( v17 )
    {
      v18 = v25;
      v19 = *(void (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v25 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      v19(v18, a4, &GUID_c0944116_18f0_4c1c_a1a4_224296b2d4fc, &v24);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    if ( v24
      && (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 160) + 112LL))(*(_QWORD *)(a1 + 160), 1LL) >= 0 )
    {
      v20 = (unsigned int)((a3 & 2) != 0) + 5;
    }
    else
    {
LABEL_16:
      v20 = (unsigned int)((a3 & 2) != 0) + 7;
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 160) + 104LL))(
      *(_QWORD *)(a1 + 160),
      1LL,
      v20);
    v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 64LL))(*(_QWORD *)(a1 + 160));
    v10 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xED,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
        (const char *)(unsigned int)v21);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(v8);
      goto LABEL_26;
    }
    *(_BYTE *)(a1 + 112) = 1;
    v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 96LL))(*(_QWORD *)(a1 + 160));
    v10 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF1,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
        (const char *)(unsigned int)v22);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(v8);
      goto LABEL_26;
    }
    *(_BYTE *)(a1 + 216) = a3 & 1;
    if ( (a3 & 4) != 0 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 24LL))(*(_QWORD *)(a1 + 168)) )
      {
LABEL_24:
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
          *(_QWORD *)(a1 + 88),
          *(unsigned int *)(a1 + 72));
LABEL_25:
        wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64 *)v32);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
        v10 = 0;
        goto LABEL_26;
      }
    }
    else if ( (a3 & 1) != 0 || GetAsyncKeyState(18) < 0 )
    {
      goto LABEL_24;
    }
    CAltTabViewHost::SwitchToSelectedItemAndDismiss((CAltTabViewHost *)a1);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC8,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
    (const char *)(unsigned int)v9);
  CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(v8);
LABEL_26:
  MultitaskingViewTelemetry::ShowAltTab::~ShowAltTab(v32);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v27);
  return v10;
}
