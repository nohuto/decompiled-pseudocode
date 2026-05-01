/*
 * XREFs of ?OnViewPropertiesChanging@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180379D20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801D6274 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?DecideDrawingArea@ImeNotificationExperienceManager@@AEAAJAEAUSize@Foundation@Windows@@PEAUtagRECT@@@Z @ 0x1803799B0 (-DecideDrawingArea@ImeNotificationExperienceManager@@AEAAJAEAUSize@Foundation@Windows@@PEAUtagRE.c)
 */

__int64 __fastcall ImeNotificationExperienceManager::OnViewPropertiesChanging(
        ImeNotificationExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  const char *v4; // r9
  struct tagRECT v6; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  if ( (int)ImeNotificationExperienceManager::DecideDrawingArea(
              this,
              (struct CSingleViewShellExperience *)((char *)a2 + 44),
              &v6) >= 0
    && *((_QWORD *)this + 4) )
  {
    try
    {
      v3 = CSingleViewShellExperience::SetPosition((ImeNotificationExperienceManager *)((char *)this + 8), &v6);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB3,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x9B,
                             (int)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
                             v4);
    }
  }
  return 0LL;
}
