/*
 * XREFs of ?UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801DDA6C
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_3f6fc98b122671ebaaed1271aa6935a9___::Invoke @ 0x18034B730 (CAsyncCallbackWithLambda__lambda_3f6fc98b122671ebaaed1271aa6935a9___--Invoke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801DDADC (-UnregisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?RegisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801DDB74 (-RegisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::UpdateHotkeyRegistrationsTask(GamingOverlayExperienceManager *this)
{
  int v2; // eax
  int v3; // eax
  const char *v4; // r9
  unsigned int v5; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    v2 = GamingOverlayExperienceManager::UnregisterHotkeys(this);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1365,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v2);
    v3 = GamingOverlayExperienceManager::RegisterHotkeys(this);
    v5 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1366,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v3);
      result = v5;
    }
    else
    {
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1369,
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                           v4);
  }
  return result;
}
