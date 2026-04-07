/*
 * XREFs of ?ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z @ 0x180008980
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18008F8D0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z @ 0x180008B30 (-UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18006E69C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::ProcessAnimationTick(union _LARGE_INTEGER *a1, union _LARGE_INTEGER *a2, bool *a3)
{
  signed int v6; // ebx
  int v7; // r8d
  CDesktopManager *QuadPart; // rcx
  LARGE_INTEGER v9; // rax
  double v10; // xmm6_8
  int updated; // eax
  signed int LastError; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+38h] [rbp-60h]
  _BYTE v16[16]; // [rsp+40h] [rbp-58h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  if ( CDesktopManager::s_pDesktopManagerInstance )
  {
    PerformanceCount.QuadPart = 0LL;
    SetLastError(0);
    if ( QueryPerformanceCounter(&PerformanceCount) )
    {
      QuadPart = (CDesktopManager *)a1->QuadPart;
      v9 = PerformanceCount;
      if ( a1->QuadPart == -1 )
      {
        *a1 = PerformanceCount;
        QuadPart = (CDesktopManager *)v9.QuadPart;
      }
      v10 = (double)(v9.LowPart - (int)QuadPart) / (double)(int)a2->QuadPart;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (unsigned int)&UdwmAnimation_Info,
          v7,
          1,
          (__int64)v16);
      updated = CDesktopManager::UpdateGlobalTime(QuadPart, v10, a3);
      v6 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x7D3u, 0LL);
      else
        *a1 = PerformanceCount;
    }
    else
    {
      LastError = GetLastError();
      v6 = LastError;
      if ( LastError > 0 )
        v6 = (unsigned __int16)LastError | 0x80070000;
      if ( v6 >= 0 )
        v6 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x7C9u, 0LL);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v6;
}
