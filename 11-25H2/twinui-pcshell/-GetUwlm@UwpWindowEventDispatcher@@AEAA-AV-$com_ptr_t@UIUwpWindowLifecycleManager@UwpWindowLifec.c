/*
 * XREFs of ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1801466AC
 * Callers:
 *     ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18006C234 (-AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal.c)
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18006C8A0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180144BC0 (-UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagem.c)
 *     ?WindowRemoved@UwpWindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180145860 (-WindowRemoved@UwpWindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Inte.c)
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180145A10 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 *     ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x18024D520 (-OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z.c)
 *     ?ImmersiveWindowCreated@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180418AA0 (-ImmersiveWindowCreated@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleMan.c)
 *     ?UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180419E90 (-UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowMan.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1802B3890 (--$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@In.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall UwpWindowEventDispatcher::GetUwlm(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD *); // rsi
  __int64 v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+48h] [rbp+10h]

  v14 = a2;
  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 320);
  if ( !v3 )
    goto LABEL_8;
  v4 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, &v13);
  v5 = *v4;
  *v4 = 0LL;
  v6 = *a2;
  *a2 = v5;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( !*a2 )
  {
LABEL_8:
    wil::GetActivationFactory<Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleManagerStatics>(&v13);
    v8 = v13;
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 48LL);
    v10 = *a2;
    *a2 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = v9(v8, a2);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC8F,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v11,
        1);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  }
  return a2;
}
