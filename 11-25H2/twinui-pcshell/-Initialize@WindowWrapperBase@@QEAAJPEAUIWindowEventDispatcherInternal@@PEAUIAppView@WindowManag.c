/*
 * XREFs of ?Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@W4AppModelKind@4567@UAppViewId@4567@PEAUIWindow@4567@UWindowId@4567@PEBGW4WindowCreatedType@@@Z @ 0x180430578
 * Callers:
 *     ??0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x180420C94 (--0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@A.c)
 *     ??0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x180422684 (--0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@Applica.c)
 * Callees:
 *     ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x180071D90 (--4-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180071F24 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ??$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z @ 0x180073330 (--$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180074CD0 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800750D8 (--$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e___ @ 0x18042B3AC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowWrapperBase::Initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        const WCHAR *a9,
        char a10)
{
  __int64 v14; // rsi
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rdx
  DWORD CurrentThreadId; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rbx
  _QWORD v23[3]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v24[9]; // [rsp+38h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  _QWORD *v26; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+38h] BYREF

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 216LL))(a2);
  RmActivityImportanceInitialize(a1 + 252);
  v14 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = *(_QWORD *)(a1 + 320);
  *(_QWORD *)(a1 + 320) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  *(_DWORD *)(a1 + 328) = a5;
  *(_DWORD *)(a1 + 352) = a6;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 128),
    a7);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 280),
    a2);
  v16 = Windows::Internal::String::Initialize<unsigned short const *>((HSTRING *)(a1 + 312), &a9);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x72,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v16,
      v23[0]);
  v24[0] = off_180719718;
  v24[1] = a1;
  v24[7] = v24;
  v26 = v24;
  std::function<void (bool)>::operator=(a1 + 400, (__int64)v24);
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    (__int64)v24,
    v17);
  v23[0] = a1;
  v23[1] = &a8;
  v23[2] = &a10;
  CurrentThreadId = GetCurrentThreadId();
  v20 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e___(
          v19,
          CurrentThreadId,
          (__int64)v23);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC3,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v20,
      v23[0]);
  v21 = a1 + 16;
  v26 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 280LL))(v21);
  v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 272LL))(v21);
  a5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 288LL))(v21);
  ViewManagerInteropTraceLogging::ViewWrapperCreated<unsigned int,unsigned short const *,unsigned short const *>(
    &a5,
    &v27,
    (__int64 *)&v26);
  return 0LL;
}
