/*
 * XREFs of ?StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x1803506EC
 * Callers:
 *     ?remove_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180246420 (-remove_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x1803415EC (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 *     ?StartWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18034FF1C (-StartWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?WinEventProc@GamingOverlayExperienceManager@@AEAAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x1803511A0 (-WinEventProc@GamingOverlayExperienceManager@@AEAAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800D2B94 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Log_GetLastErrorIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x18034A42C (-Log_GetLastErrorIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::StopWorkerWindowMessageThread(
        GamingOverlayExperienceManager *this,
        char a2)
{
  void *v4; // rcx
  const char *v5; // r9
  void *v6; // rcx
  char *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (void *)*((_QWORD *)this + 93);
  if ( v4 )
  {
    if ( !SetEvent(v4) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x569,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
        v5);
    *((_QWORD *)this + 93) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 75);
  if ( v6 && a2 )
  {
    LODWORD(v8) = WaitForSingleObject(v6, 0x1388u);
    wil::details::in1diag3::Log_GetLastErrorIfMsg(
      retaddr,
      (void *)0x56F,
      (__int64)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)((_DWORD)v8 != 0),
      (unsigned __int64)"StopWorkerWindowMessageThread Wait Result: 0x%08X",
      v8);
  }
  *((_QWORD *)this + 71) = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 75,
    0LL);
  return 0LL;
}
