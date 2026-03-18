/*
 * XREFs of DestroyThreadsTimers @ 0x140246280
 * Callers:
 *     <none>
 * Callees:
 *     FreeTimer @ 0x140246670 (FreeTimer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x14028BBF4 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DestroyThreadsTimers(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  struct _HEAD *v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx

  if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
  {
    result = W32GetUserSessionState(v3, v2);
    v8 = (_QWORD *)(result + 57544);
    v9 = *(_QWORD **)(result + 57544);
    while ( v9 != v8 )
    {
      result = (__int64)(v9 - 9);
      v9 = (_QWORD *)*v9;
      if ( (*(_DWORD *)(result + 48) & 0x1000) != 0 )
      {
        result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1224LL);
      }
      else if ( *(_QWORD *)(result + 24) == a1 )
      {
        result = FreeTimer((struct _HEAD *)result);
        v9 = (_QWORD *)result;
      }
    }
  }
  else
  {
    result = W32GetUserSessionState(v3, v2);
    v5 = (_QWORD *)(result + 57544);
    v6 = *(_QWORD **)(result + 57544);
    while ( v6 != v5 )
    {
      v7 = (struct _HEAD *)(v6 - 9);
      v6 = (_QWORD *)*v6;
      if ( *((_QWORD *)v7 + 3) == a1 )
        result = FreeTimer(v7);
    }
  }
  return result;
}
