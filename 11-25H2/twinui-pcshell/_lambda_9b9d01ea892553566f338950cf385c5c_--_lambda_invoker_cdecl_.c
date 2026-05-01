/*
 * XREFs of _lambda_9b9d01ea892553566f338950cf385c5c_::_lambda_invoker_cdecl_ @ 0x180452B10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800FC868 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 *     ??$CortanaDidntOpenInSpecifiedTime@KI@StartWindowTelemetry@@SAX$$QEAK$$QEAI@Z @ 0x180452D60 (--$CortanaDidntOpenInSpecifiedTime@KI@StartWindowTelemetry@@SAX$$QEAK$$QEAI@Z.c)
 */

void __fastcall lambda_9b9d01ea892553566f338950cf385c5c_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+38h] [rbp+10h] BYREF
  int v6; // [rsp+48h] [rbp+20h] BYREF

  v5 = *(_DWORD *)(a2 + 64);
  v6 = 1000 * *(_DWORD *)(a2 + 68);
  StartWindowTelemetry::CortanaDidntOpenInSpecifiedTime<unsigned long,unsigned int>(&v6, &v5);
  v3 = ExperienceManagerUtils::PostToUIThread(0LL, (struct IUnknown *)a2, (void *)4);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x699,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v3);
}
