/*
 * XREFs of ?Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@67@UUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@UWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@_K@Z @ 0x1800ED4B0
 * Callers:
 *     ??0LegacyUwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x180432D48 (--0LegacyUwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@Uwp.c)
 * Callees:
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180016460 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180058064 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z @ 0x18006BD70 (--$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_eb4780c1661a573af0d01df637dfa0a8___ @ 0x18006C2E8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_eb4780c1661a573af0d01df637dfa0a8.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x18006CCEC (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800EF200 (--$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ??0_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@H@ZAEAW42@AEAHAEAJ@Z @ 0x1802931FC (--0_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@H@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 UwpWindowWrapperBase::Initialize(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rdx
  _OWORD *v9; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v11; // rcx
  int v12; // eax
  int *v13; // rax
  int v15; // [rsp+20h] [rbp-50h]
  int v16; // [rsp+20h] [rbp-50h]
  _QWORD v17[8]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v19; // [rsp+90h] [rbp+20h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+38h] BYREF
  va_list va; // [rsp+A8h] [rbp+38h]
  __int64 v22; // [rsp+B0h] [rbp+40h] BYREF
  va_list va1; // [rsp+B0h] [rbp+40h]
  __int64 v24; // [rsp+B8h] [rbp+48h]
  __int64 v25; // [rsp+C0h] [rbp+50h]
  __int64 v26; // [rsp+C8h] [rbp+58h] BYREF
  va_list va2; // [rsp+C8h] [rbp+58h]
  __int64 v28; // [rsp+D0h] [rbp+60h] BYREF
  va_list va3; // [rsp+D0h] [rbp+60h]
  __int64 v30; // [rsp+D8h] [rbp+68h] BYREF
  va_list va4; // [rsp+D8h] [rbp+68h]
  _QWORD *v32; // [rsp+E0h] [rbp+70h] BYREF
  va_list va5; // [rsp+E0h] [rbp+70h]
  va_list va6; // [rsp+E8h] [rbp+78h] BYREF

  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  v24 = va_arg(va2, _QWORD);
  v25 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v26 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v28 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v30 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v32 = va_arg(va6, _QWORD *);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 224LL))(a2);
  RmActivityImportanceInitialize(a1 + 252);
  v6 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *(_DWORD *)(a1 + 328) = v22;
  *(_DWORD *)(a1 + 352) = v24;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 128),
    v25);
  *(_QWORD *)(a1 + 552) = v32;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 280),
    a2);
  v7 = Windows::Internal::String::Initialize<unsigned short const *>(a1 + 320, (__int64 *)va3);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x74,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v7,
      v15);
  winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
    (_QWORD **)va5,
    a1);
  v17[0] = off_180720CB0;
  v17[1] = v32;
  v17[7] = v17;
  v32 = v17;
  std::function<void (void)>::operator=(a1 + 384, (__int64)v17);
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    (__int64)v17,
    v8);
  v9 = (_OWORD *)_lambda_5724e9f0897f2fd11b6a24af4b09628e_::_lambda_5724e9f0897f2fd11b6a24af4b09628e_(
                   (unsigned int)v17,
                   a1,
                   (unsigned int)va,
                   (unsigned int)va2,
                   (__int64)va4);
  CurrentThreadId = GetCurrentThreadId();
  v12 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_eb4780c1661a573af0d01df637dfa0a8___(
          v11,
          CurrentThreadId,
          v9);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC0,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v12,
      v16);
  v32 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 280LL))(a1 + 16);
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 272LL))(a1 + 16);
  v13 = (int *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 16) + 288LL))(a1 + 16, (__int64 *)va1);
  ViewManagerInteropTraceLogging::ViewWrapperCreated<unsigned int,unsigned short const *,unsigned short const *>(
    v13,
    &v19,
    (__int64 *)va5);
  return 0LL;
}
