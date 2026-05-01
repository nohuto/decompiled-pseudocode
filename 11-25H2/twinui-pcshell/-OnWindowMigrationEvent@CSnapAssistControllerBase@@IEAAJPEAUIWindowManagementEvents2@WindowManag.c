/*
 * XREFs of ?OnWindowMigrationEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIWindowMigrationEventArgs@3456@@Z @ 0x180238020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ?CancelIfActive@GuidedSnapAssistControl@@QEAAXXZ @ 0x18059894C (-CancelIfActive@GuidedSnapAssistControl@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSnapAssistControllerBase::OnWindowMigrationEvent(
        GuidedSnapAssistControl **this,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // eax
  char v6; // dl
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v10 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *, int *))(v3 + 88))(
         a3,
         &v10);
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( !v10 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(
        `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
        v6);
      GuidedSnapAssistControl::CancelIfActive(this[36]);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4CD,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v5);
    return v7;
  }
}
