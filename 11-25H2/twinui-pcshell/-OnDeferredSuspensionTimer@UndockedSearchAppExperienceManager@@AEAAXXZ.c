/*
 * XREFs of ?OnDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180219BB4
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1802499E0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180015918 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UndockedSearchAppExperienceManager_SuspensionEnabled@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x18023DA58 (-UndockedSearchAppExperienceManager_SuspensionEnabled@SearchAppExperienceManagerTelemetry@@SAXXZ.c)
 *     ?ResetActivationTimeoutPolicy@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1802C98F0 (-ResetActivationTimeoutPolicy@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UndockedSearchAppExperienceManager::OnDeferredSuspensionTimer(UndockedSearchAppExperienceManager *this)
{
  struct _TP_TIMER **v1; // rdi
  struct _TP_TIMER *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct _TP_TIMER **)((char *)this + 760);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 95);
  if ( v3 )
  {
    if ( !IsThreadpoolTimerSet(v3) )
    {
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        v1,
        0LL);
      UndockedSearchAppExperienceManager::ResetActivationTimeoutPolicy(this);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 32LL))(
              *((_QWORD *)this + 11),
              *((_QWORD *)this + 7)) )
      {
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SuspensionEnabled();
        v4 = *((_QWORD *)this + 7);
        if ( v4 )
        {
          v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 344LL))(v4, 1LL);
          if ( v5 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xF50,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
              (const char *)(unsigned int)v5);
        }
      }
    }
  }
}
