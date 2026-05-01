/*
 * XREFs of ?CacheWindowWrapper@UwpWindowEventDispatcher@@AEAAXV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1800FD770
 * Callers:
 *     ?RecoverViews@UwpWindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x1800F7160 (-RecoverViews@UwpWindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z.c)
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180145A10 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$WindowEventDispatcher_CachedView@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x180070FD4 (--$WindowEventDispatcher_CachedView@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800E8F1C (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800FDDE0 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@w.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802ED74C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall UwpWindowEventDispatcher::CacheWindowWrapper(__int64 a1, __int64 *a2, __int128 *a3, const char *a4)
{
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  _DWORD *v10; // rbx
  std::_Ref_count_base *v11; // rcx
  _BYTE v12[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v13; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  const WCHAR *v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = (const WCHAR *)a3;
  if ( !*(_QWORD *)a3 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0xBBC,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      a4);
  v7 = (_QWORD *)*a2;
  v8 = *(_QWORD *)*a2;
  v13 = 0LL;
  v9 = *((_QWORD *)a3 + 1);
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  v13 = *a3;
  (*(void (__fastcall **)(_QWORD *, __int128 *, _QWORD))(v8 + 304))(v7, &v13, (unsigned int)a4);
  if ( *(_QWORD *)(a1 + 392) == *(_QWORD *)(a1 + 400) )
  {
    std::vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy> const &>(
      a1 + 384,
      *(_QWORD *)(a1 + 392),
      a2);
  }
  else
  {
    wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
      *(__int64 **)(a1 + 392),
      a2);
    *(_QWORD *)(a1 + 392) += 8LL;
  }
  v10 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a2 + 288LL))(*a2, v12);
  v15 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 272LL))(*a2);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_CachedView<unsigned short const *,unsigned int>(&v15, v10);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a2);
  v11 = (std::_Ref_count_base *)*((_QWORD *)a3 + 1);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
}
