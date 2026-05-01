/*
 * XREFs of _lambda_055d3ca9173c3810bb1268cfe695d4b8_::_lambda_invoker_cdecl_ @ 0x180384F40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800FC868 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 *     ??$JumpViewDidntOpenInSpecifiedTime@K@JumpViewProvider@@SAX$$QEAK@Z @ 0x18038502C (--$JumpViewDidntOpenInSpecifiedTime@K@JumpViewProvider@@SAX$$QEAK@Z.c)
 */

void __fastcall lambda_055d3ca9173c3810bb1268cfe695d4b8_::_lambda_invoker_cdecl_(__int64 a1, struct IUnknown *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = 5000;
  JumpViewProvider::JumpViewDidntOpenInSpecifiedTime<unsigned long>(&v5);
  v3 = ExperienceManagerUtils::PostToUIThread(0LL, a2, 0LL);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x474,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
}
