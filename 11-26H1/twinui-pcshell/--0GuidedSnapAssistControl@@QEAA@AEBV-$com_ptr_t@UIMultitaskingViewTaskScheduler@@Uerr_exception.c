/*
 * XREFs of ??0GuidedSnapAssistControl@@QEAA@AEBV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@wil@@PEAUISnapAssistCallback@@@Z @ 0x1800E498C
 * Callers:
 *     ?Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z @ 0x1800E40C0 (-Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$com_weak_copy@AEAPEAUISnapAssistCallback@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEAPEAUISnapAssistCallback@@@Z @ 0x180053490 (--$com_weak_copy@AEAPEAUISnapAssistCallback@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr_except.c)
 *     ??$capture@UIMultitaskingViewVisibilityService@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIMultitaskingViewTaskScheduler@@AEBU3@@winrt@@YA?AU?$com_ptr@UIMultitaskingViewVisibilityService@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIMultitaskingViewTaskScheduler@@1@Z @ 0x18026B3F4 (--$capture@UIMultitaskingViewVisibilityService@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIMult.c)
 *     ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802B8D3C (--4-$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_polic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GuidedSnapAssistControl::GuidedSnapAssistControl(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v5; // r14
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 *v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = a3;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v5 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = (__int64 *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 48) = 0;
  v7 = *a2;
  if ( *(_QWORD *)(a1 + 16) != *a2 )
  {
    if ( *v5 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 16));
    *v5 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v14 = *a2;
  v8 = (__int64 *)winrt::capture<IMultitaskingViewVisibilityService,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IMultitaskingViewTaskScheduler *,_GUID const &>(
                    &v12,
                    IUnknown_QueryService,
                    &v14);
  if ( v6 != v8 )
  {
    if ( *v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v6);
    v9 = *v8;
    *v8 = 0LL;
    *v6 = v9;
  }
  if ( v12 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v12);
  v10 = wil::com_weak_copy<ISnapAssistCallback * &>(&v12, &v13);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
    a1 + 32,
    v10);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return a1;
}
