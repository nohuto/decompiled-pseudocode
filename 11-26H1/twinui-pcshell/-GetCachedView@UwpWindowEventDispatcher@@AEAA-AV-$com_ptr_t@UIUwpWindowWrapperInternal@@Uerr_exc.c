/*
 * XREFs of ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x1800EC464
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180037DF0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?TryShowAsViewModeAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@_KPEAUIAsyncCallback@@@Z @ 0x1800EC680 (-TryShowAsViewModeAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI.c)
 *     ?WindowRemoved@UwpWindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800ED8C0 (-WindowRemoved@UwpWindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Inte.c)
 *     ?SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1804243A0 (-SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@U.c)
 *     ?TerminateActivityHost@UwpWindowEventDispatcher@@UEAAJIW4TerminateActivityHostOptions@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180424620 (-TerminateActivityHost@UwpWindowEventDispatcher@@UEAAJIW4TerminateActivityHostOptions@ViewManage.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall UwpWindowEventDispatcher::GetCachedView(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbx
  char v10; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+10h]

  v11 = a2;
  *a2 = 0LL;
  v5 = *(_QWORD **)(a1 + 384);
  v6 = *(_QWORD **)(a1 + 392);
  while ( v5 != v6 )
  {
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v5 + 288LL))(*v5, &v10) == a3 )
    {
      v7 = *v5;
      v8 = *a2;
      *a2 = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      return a2;
    }
    ++v5;
  }
  return a2;
}
