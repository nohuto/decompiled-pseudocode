/*
 * XREFs of CAsyncCallbackWithLambda__lambda_da808c229d1077a2c468725fb6db7686___::Invoke @ 0x180348290
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801E7D3C (-UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_da808c229d1077a2c468725fb6db7686___::Invoke(__int64 a1)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = GamingOverlayExperienceManager::UpdateHotkeyRegistrationsTask(*(GamingOverlayExperienceManager **)(a1 + 48));
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1240,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)updated);
  return 0LL;
}
