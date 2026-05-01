/*
 * XREFs of ?DisableActivationTimeoutPolicy@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801F7A98
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x18023B458 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18023D23C (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001D8C8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001EA80 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UndockedSearchAppExperienceManager_ActivationTimeoutPolicyDisabled@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1801F7B98 (-UndockedSearchAppExperienceManager_ActivationTimeoutPolicyDisabled@SearchAppExperienceManagerTe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall UndockedSearchAppExperienceManager::DisableActivationTimeoutPolicy(char *pv)
{
  __int64 (__fastcall ****v1)(_QWORD, GUID *, __int64 *); // rdi
  struct _TP_TIMER **v2; // rbx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp+10h] BYREF

  v1 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(pv + 56);
  if ( *((_QWORD *)pv + 7) )
  {
    pftDueTime = (struct _FILETIME)-1200000000LL;
    v2 = (struct _TP_TIMER **)(pv + 752);
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_23b9e37225fb098a3c1eb5310313a894_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v2,
      ThreadpoolTimer);
    if ( *v2 )
    {
      SetThreadpoolTimer(*v2, &pftDueTime, 0, 0);
      v9 = 0LL;
      v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
             v1,
             &v9);
      v5 = retaddr;
      if ( v4 >= 0 )
      {
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivationTimeoutPolicyDisabled();
        v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 88LL))(v9, 1LL);
        v5 = retaddr;
        if ( v4 >= 0 )
          goto LABEL_8;
        v6 = 4175LL;
      }
      else
      {
        v6 = 4172LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v5,
        (void *)v6,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
LABEL_8:
      v7 = v9;
      if ( v9 )
      {
        v9 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
  }
}
