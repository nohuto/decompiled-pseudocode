/*
 * XREFs of _lambda_3ce309c2898001e1825685631cfe3bc0_::_lambda_invoker_cdecl_ @ 0x18045F1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800B6514 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

void __fastcall lambda_3ce309c2898001e1825685631cfe3bc0_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        struct IUnknown *Context,
        PTP_TIMER Timer)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(0LL, Context, 0LL);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x69F,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v3);
}
