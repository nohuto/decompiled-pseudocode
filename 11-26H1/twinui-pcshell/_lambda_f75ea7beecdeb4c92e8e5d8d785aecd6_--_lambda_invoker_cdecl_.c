/*
 * XREFs of _lambda_f75ea7beecdeb4c92e8e5d8d785aecd6_::_lambda_invoker_cdecl_ @ 0x18045F360
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800B6514 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 *     ??$StartDidntOpenIn10Seconds@I@CommonStartTelemetry@@SAX$$QEAI@Z @ 0x1804600E8 (--$StartDidntOpenIn10Seconds@I@CommonStartTelemetry@@SAX$$QEAI@Z.c)
 */

void __fastcall lambda_f75ea7beecdeb4c92e8e5d8d785aecd6_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = *(_DWORD *)(a2 + 64);
  CommonStartTelemetry::StartDidntOpenIn10Seconds<unsigned int>(&v5);
  v3 = ExperienceManagerUtils::PostToUIThread(0LL, (struct IUnknown *)a2, (void *)8);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x647,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v3);
}
