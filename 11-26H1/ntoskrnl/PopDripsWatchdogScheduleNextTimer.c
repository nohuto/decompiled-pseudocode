/*
 * XREFs of PopDripsWatchdogScheduleNextTimer @ 0x140A3C818
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x1407DE0A0 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1407DE3A0 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogStartWatchdog @ 0x140A3C690 (PopDripsWatchdogStartWatchdog.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404DE3B8 (PopOkayToQueueNextWorkItem.c)
 *     Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline @ 0x1404F7B44 (Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PopDripsWatchdogScheduleNextTimer(__int64 a1)
{
  _DWORD *v2; // rsi
  __int64 result; // rax
  __int64 v4; // rbx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_DWORD *)(a1 + 180);
  if ( !(unsigned int)Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline()
    || (result = (unsigned int)*v2, (result & 2) == 0) )
  {
    *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000008];
    v4 = -10000000LL * *(unsigned int *)(a1 + 176);
    v5[0] = 0LL;
    v5[1] = -1LL;
    if ( !(unsigned int)Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(_DWORD *)(a1 + 168) )
        PopOkayToQueueNextWorkItem(a1 + 136);
    }
    result = KeSetTimer2(a1, v4, 0LL, (__int64)v5);
    *v2 |= 2u;
  }
  return result;
}
