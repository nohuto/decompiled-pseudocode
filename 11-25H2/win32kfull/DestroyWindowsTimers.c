/*
 * XREFs of DestroyWindowsTimers @ 0x14024634C
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1401DFB58 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 * Callees:
 *     FreeTimer @ 0x140246670 (FreeTimer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x14028BBF4 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DestroyWindowsTimers(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  struct _HEAD *v6; // rsi

  result = W32GetUserSessionState(a1, a2);
  v4 = (_QWORD *)(result + 57544);
  v5 = *(_QWORD **)(result + 57544);
  while ( v5 != v4 )
  {
    v6 = (struct _HEAD *)(v5 - 9);
    v5 = (_QWORD *)*v5;
    if ( (*((_DWORD *)v6 + 12) & 0x1000) != 0 )
    {
      result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1277LL);
    }
    else if ( *((_QWORD *)v6 + 13) == a1 )
    {
      if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
      {
        result = FreeTimer(v6);
        v5 = (_QWORD *)result;
      }
      else
      {
        result = FreeTimer(v6);
      }
    }
  }
  return result;
}
