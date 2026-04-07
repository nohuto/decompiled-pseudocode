/*
 * XREFs of ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800AC2C8
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800720A0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800429A0 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18007AE6C (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x180088ED0 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x18008DDB4 (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800AC730 (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::NotifyRedirectionShutdown(CDesktopManager *this)
{
  int v2; // eax
  signed int v3; // ebx
  int v4; // esi
  char v5; // bp
  int v6; // r8d
  signed int v7; // eax
  signed int LastError; // eax
  void *v9; // rcx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp-38h] BYREF

  *((_BYTE *)this + 20) = 1;
  v2 = CDesktopManager::EnableMonitorRenderTargets(this, 0);
  v3 = v2;
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x215u, 0LL);
  CDesktopManager::ReleaseDCompResources(this);
  v5 = CDesktopManager::CheckAnyPreference(0x10u);
  CDesktopManager::SetPreferences();
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmShutdownMessage_Info,
      v6,
      1,
      (__int64)&v11);
  if ( *((_QWORD *)this + 142) )
  {
    SetLastError(0);
    if ( PostThreadMessageW(*((_DWORD *)this + 282), 0x12u, 0LL, 0LL) )
    {
      if ( v4 >= 0 )
      {
        v11 = &CDesktopManager::s_csDwmInstance;
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        SetLastError(0);
        if ( WaitForSingleObject(*((HANDLE *)this + 142), 0xFFFFFFFF) )
        {
          LastError = GetLastError();
          v3 = LastError;
          if ( LastError > 0 )
            v3 = (unsigned __int16)LastError | 0x80070000;
          if ( v3 >= 0 )
            v3 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x229u, 0LL);
        }
        else
        {
          v3 = v4;
        }
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      }
    }
    else
    {
      v7 = GetLastError();
      v3 = v7;
      if ( v7 > 0 )
        v3 = (unsigned __int16)v7 | 0x80070000;
      if ( v3 >= 0 )
        v3 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x221u, 0LL);
    }
    *((_DWORD *)this + 282) = 0;
    v9 = (void *)*((_QWORD *)this + 142);
    if ( v9 )
    {
      CloseHandle(v9);
      *((_QWORD *)this + 142) = 0LL;
    }
  }
  if ( !v5 )
    CDesktopManager::ClearPreferences();
  return (unsigned int)v3;
}
