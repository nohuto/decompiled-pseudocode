/*
 * XREFs of CAsyncCallbackWithLambda__lambda_3f6fc98b122671ebaaed1271aa6935a9___::Invoke @ 0x18034B730
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801DDA6C (-UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_3f6fc98b122671ebaaed1271aa6935a9___::Invoke(__int64 a1)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = GamingOverlayExperienceManager::UpdateHotkeyRegistrationsTask(*(GamingOverlayExperienceManager **)(a1 + 48));
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1359,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)updated);
  return 0LL;
}
