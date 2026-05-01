/*
 * XREFs of ?DeferAuditWebSearchExtensions@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803A7630
 * Callers:
 *     wistd::__function::__func__lambda_965821502783f03cb100012e5845a5d5__void___cdecl(void)_::operator() @ 0x1803A6520 (wistd--__function--__func__lambda_965821502783f03cb100012e5845a5d5__void___cdecl(void)_--operato.c)
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@9@3V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@9@@Z @ 0x1803AFDC0 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewC.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6db94de70d757cfff8084104786dd102___ @ 0x18039EE8C (Windows--Internal--ComTaskPool--QueueTask__lambda_6db94de70d757cfff8084104786dd102___.c)
 */

void __fastcall UndockedSearchAppExperienceManager::DeferAuditWebSearchExtensions(
        UndockedSearchAppExperienceManager *this,
        __int64 a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Windows::Internal::ComTaskPool::QueueTask__lambda_6db94de70d757cfff8084104786dd102___(
         (__int64)this,
         a2,
         *((_DWORD *)this + 41));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11A5,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
}
