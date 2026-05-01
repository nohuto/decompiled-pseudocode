/*
 * XREFs of ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x18037C040
 * Callers:
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801731A4 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     wil::details::ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___::_ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___ @ 0x1802C31C8 (wil--details--ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___--_ScopeExitFn__lambda_39f8.c)
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800250B4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CCW@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A0188 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CCW@@@details@wil@@QEAAX_NW4ReportingKind.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CToastCenterExperienceManager::Close(CToastCenterExperienceManager *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 45);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 40LL))(v4, *((unsigned int *)this + 92));
    if ( v5 >= 0 )
      *((_DWORD *)this + 92) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x17E,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
  v6 = *((_QWORD *)this + 71);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, *((unsigned int *)this + 128));
    if ( v7 >= 0 )
      *((_DWORD *)this + 128) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x186,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 71) + 32LL))(
           *((_QWORD *)this + 71),
           *((unsigned int *)this + 129));
    if ( v8 >= 0 )
      *((_DWORD *)this + 128) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18B,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
  }
  v9 = *((_QWORD *)this + 72);
  if ( v9 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, *((unsigned int *)this + 130));
    if ( v10 >= 0 )
      *((_DWORD *)this + 130) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x193,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
  }
  if ( *((_DWORD *)this + 126) )
  {
    v11 = SmartCookie::Unregister((CToastCenterExperienceManager *)((char *)this + 384));
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19B,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
  }
  if ( *((_QWORD *)this + 39) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 39) = 0LL;
  }
  if ( *((_QWORD *)this + 37) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 37) = 0LL;
  }
  if ( *((_QWORD *)this + 38) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 38) = 0LL;
  }
  v12 = *((_QWORD *)this + 76);
  if ( v12 && *((_QWORD *)this + 78) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 72LL))(v12);
    *((_QWORD *)this + 78) = 0LL;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CCW>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CCW>::GetImpl'::`2'::impl,
    1u,
    a3);
  return 0LL;
}
