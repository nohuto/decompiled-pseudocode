/*
 * XREFs of ?_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ @ 0x1803A56B0
 * Callers:
 *     ?_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x1803A4AEC (-_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1803A4BB0 (-_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001D8C8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001EA80 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetViewWrapper@SearchAppExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1803A473C (-_GetViewWrapper@SearchAppExperienceManager@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@Sh.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchAppExperienceManager::_ResetActivationTimeoutPolicy(SearchAppExperienceManager *this)
{
  struct _TP_TIMER **v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct _TP_TIMER **)((char *)this + 464);
  if ( *v2 )
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v2,
      0LL);
  SearchAppExperienceManager::_GetViewWrapper((__int64)this, (__int64 *)&v9);
  if ( v9 )
  {
    v8 = 0LL;
    v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
           &v9,
           &v8);
    v4 = retaddr;
    if ( v3 >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 88LL))(v8, 0LL);
      v4 = retaddr;
      if ( v3 >= 0 )
      {
LABEL_9:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
        goto LABEL_10;
      }
      v5 = 1322LL;
    }
    else
    {
      v5 = 1320LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v4,
      (void *)v5,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  return 0LL;
}
