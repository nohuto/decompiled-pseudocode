/*
 * XREFs of ?Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@67@UUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@UWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@_K@Z @ 0x180074AD4
 * Callers:
 *     ??0LegacyUwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x180426F34 (--0LegacyUwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@Uwp.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_eb4780c1661a573af0d01df637dfa0a8___ @ 0x180071CA0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_eb4780c1661a573af0d01df637dfa0a8.c)
 *     ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x180071D90 (--4-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180071F24 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ??$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z @ 0x180073330 (--$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180074CD0 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800750D8 (--$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 UwpWindowWrapperBase::Initialize(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rdx
  DWORD CurrentThreadId; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  int *v13; // rax
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  va_list v16; // [rsp+30h] [rbp-30h]
  va_list v17; // [rsp+38h] [rbp-28h]
  __int128 *v18; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v20; // [rsp+80h] [rbp+20h] BYREF
  __int64 v21; // [rsp+98h] [rbp+38h] BYREF
  va_list va; // [rsp+98h] [rbp+38h]
  __int64 v23; // [rsp+A0h] [rbp+40h] BYREF
  va_list va1; // [rsp+A0h] [rbp+40h]
  __int64 v25; // [rsp+A8h] [rbp+48h]
  __int64 v26; // [rsp+B0h] [rbp+50h]
  __int64 v27; // [rsp+B8h] [rbp+58h] BYREF
  va_list va2; // [rsp+B8h] [rbp+58h]
  __int64 v29; // [rsp+C0h] [rbp+60h] BYREF
  va_list va3; // [rsp+C0h] [rbp+60h]
  __int64 v31; // [rsp+C8h] [rbp+68h] BYREF
  va_list va4; // [rsp+C8h] [rbp+68h]
  __int128 *v33; // [rsp+D0h] [rbp+70h] BYREF
  va_list va5; // [rsp+D0h] [rbp+70h]
  va_list va6; // [rsp+D8h] [rbp+78h] BYREF

  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  v25 = va_arg(va2, _QWORD);
  v26 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v27 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v29 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v31 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v33 = va_arg(va6, __int128 *);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 224LL))(a2);
  RmActivityImportanceInitialize(a1 + 252);
  v6 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *(_DWORD *)(a1 + 328) = v23;
  *(_DWORD *)(a1 + 352) = v25;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(a1 + 128, v26);
  *(_QWORD *)(a1 + 568) = v33;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(a1 + 280, a2);
  v7 = Windows::Internal::String::Initialize<unsigned short const *>(a1 + 320, (__int64 *)va3);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x74,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v7,
      v15);
  *(_QWORD *)&v15 = off_1806F8AD8;
  *((_QWORD *)&v15 + 1) = a1;
  v18 = &v15;
  v33 = &v15;
  std::function<void (bool)>::operator=(a1 + 400, (__int64)&v15);
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    (__int64)&v15,
    v8);
  *(_QWORD *)&v15 = a1;
  va_copy(*((va_list *)&v15 + 1), va);
  va_copy(v16, va2);
  va_copy(v17, va4);
  CurrentThreadId = GetCurrentThreadId();
  v11 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_eb4780c1661a573af0d01df637dfa0a8___(
          v10,
          CurrentThreadId,
          &v15);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC0,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v11,
      v15);
  v12 = a1 + 16;
  v33 = (__int128 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 280LL))(v12);
  v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 272LL))(v12);
  v13 = (int *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 288LL))(v12, (__int64 *)va1);
  ViewManagerInteropTraceLogging::ViewWrapperCreated<unsigned int,unsigned short const *,unsigned short const *>(
    v13,
    &v20,
    (__int64 *)va5);
  return 0LL;
}
