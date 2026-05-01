/*
 * XREFs of _lambda_219695f63e651180cfc7ae358f81f100_::operator() @ 0x180387988
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_219695f63e651180cfc7ae358f81f100___::Run @ 0x18038ACA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_219695f63e651180cfc7ae358f81f100___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Cloak@CSingleViewShellExperience@@QEAAJXZ @ 0x18017435C (-Cloak@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?PendingCloakingStatus_@StartMenuExperienceTelemetry@@QEAAX_NGG@Z @ 0x180389EF8 (-PendingCloakingStatus_@StartMenuExperienceTelemetry@@QEAAX_NGG@Z.c)
 *     ?get@?$static_lazy@VStartMenuExperienceTelemetry@@@details@wil@@QEAAPEAVStartMenuExperienceTelemetry@@P6AXXZ@Z @ 0x18038B444 (-get@-$static_lazy@VStartMenuExperienceTelemetry@@@details@wil@@QEAAPEAVStartMenuExperienceTelem.c)
 */

__int64 __fastcall lambda_219695f63e651180cfc7ae358f81f100_::operator()(__int64 a1)
{
  unsigned __int16 v1; // si
  unsigned __int16 v3; // bp
  char v4; // di
  _DWORD *v5; // rcx
  StartMenuExperienceTelemetry *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_WORD *)(a1 + 20);
  v3 = *(_WORD *)(a1 + 16);
  v4 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 763LL);
  v5 = *(_DWORD **)(wil::details::static_lazy<StartMenuExperienceTelemetry>::get(
                      a1,
                      _lambda_61b654bec5a673602743fd344e831919_::_lambda_invoker_cdecl_)
                  + 8);
  if ( v5 && *v5 )
  {
    wil::details::static_lazy<StartMenuExperienceTelemetry>::get(
      v5,
      _lambda_61b654bec5a673602743fd344e831919_::_lambda_invoker_cdecl_);
    StartMenuExperienceTelemetry::PendingCloakingStatus_(v6, v4, v3, v1);
  }
  if ( !v4 )
    return 0LL;
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 763LL) = 0;
  v7 = CSingleViewShellExperience::Cloak((HSTRING *)(*(_QWORD *)(a1 + 8) + 320LL));
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1EC,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
