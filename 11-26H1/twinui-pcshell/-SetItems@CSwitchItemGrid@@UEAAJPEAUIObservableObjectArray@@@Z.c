/*
 * XREFs of ?SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z @ 0x1804C78B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0 @ 0x18029CE54 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_18029CE54.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register @ 0x1804B39E4 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChanged__an.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register @ 0x1804B3AB8 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArr_ea_1804B3AB8.c)
 *     ??0BatchLayout@CSwitchItemGrid@@QEAA@PEAV1@@Z @ 0x1804C5A48 (--0BatchLayout@CSwitchItemGrid@@QEAA@PEAV1@@Z.c)
 *     ??1BatchLayout@CSwitchItemGrid@@QEAA@XZ @ 0x1804C5BCC (--1BatchLayout@CSwitchItemGrid@@QEAA@XZ.c)
 *     ?_AddElementForObject@CSwitchItemGrid@@AEAAJPEAUIUnknown@@@Z @ 0x1804C7BD0 (-_AddElementForObject@CSwitchItemGrid@@AEAAJPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSwitchItemGrid::SetItems(CSwitchItemGrid *this, struct IObservableObjectArray *a2)
{
  CSwitchItemGrid *v4; // r15
  _QWORD *v5; // r12
  _QWORD *v6; // r13
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  unsigned int i; // r14d
  __int64 (__fastcall *v11)(struct IObservableObjectArray *, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v12; // rax
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  unsigned int v20; // [rsp+90h] [rbp+48h] BYREF
  struct IUnknown *v21; // [rsp+98h] [rbp+50h] BYREF
  char v22; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+60h] BYREF

  v4 = (CSwitchItemGrid *)((char *)this - 208);
  CSwitchItemGrid::BatchLayout::BatchLayout(
    (CSwitchItemGrid::BatchLayout *)&v22,
    (CSwitchItemGrid *)((char *)this - 208));
  (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)v4 + 80LL))(v4);
  v5 = (_QWORD *)((char *)this + 680);
  EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0((__int64)this + 680);
  v6 = (_QWORD *)((char *)this + 696);
  EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0((__int64)this + 696);
  if ( !a2 )
  {
LABEL_16:
    v8 = 0;
    goto LABEL_17;
  }
  v20 = 0;
  v7 = (*(__int64 (__fastcall **)(struct IObservableObjectArray *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v20);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = *winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
            &v23,
            (__int64)v4);
    for ( i = 0; i < v20; ++i )
    {
      v21 = 0LL;
      v11 = *(__int64 (__fastcall **)(struct IObservableObjectArray *, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
      v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v21);
      v13 = v11(a2, i, &GUID_00000000_0000_0000_c000_000000000046, v12);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AA,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9);
        goto LABEL_11;
      }
      v15 = CSwitchItemGrid::_AddElementForObject(v4, v21);
      v14 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AB,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
          (const char *)(unsigned int)v15);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9);
LABEL_11:
        v8 = v14;
        goto LABEL_17;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
    }
    v16 = EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register(
            v5,
            (__int64)a2);
    v14 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AF,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
        (const char *)(unsigned int)v16);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9);
      goto LABEL_11;
    }
    v17 = EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register(
            v6,
            (__int64)a2);
    v14 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B0,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
        (const char *)(unsigned int)v17);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9);
      goto LABEL_11;
    }
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19F,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
    (const char *)(unsigned int)v7);
LABEL_17:
  CSwitchItemGrid::BatchLayout::~BatchLayout((CSwitchItemGrid::BatchLayout *)&v22);
  return v8;
}
