/*
 * XREFs of _lambda_e71bfef6371fb90ba2cfa7f4102823cf_::_lambda_invoker_cdecl_ @ 0x18045F300
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800B6514 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 *     ??$StartDidntOpenIn2Seconds@I@CommonStartTelemetry@@SAX$$QEAI@Z @ 0x180460158 (--$StartDidntOpenIn2Seconds@I@CommonStartTelemetry@@SAX$$QEAI@Z.c)
 */

void __fastcall lambda_e71bfef6371fb90ba2cfa7f4102823cf_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = *(_DWORD *)(a2 + 64);
  CommonStartTelemetry::StartDidntOpenIn2Seconds<unsigned int>(&v5);
  v3 = ExperienceManagerUtils::PostToUIThread(0LL, (struct IUnknown *)a2, (void *)7);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x60E,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v3);
}
