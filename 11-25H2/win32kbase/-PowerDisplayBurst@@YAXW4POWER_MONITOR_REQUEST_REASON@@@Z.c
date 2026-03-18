/*
 * XREFs of ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401B003C
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerInfoCallout @ 0x1401B1014 (UserPowerInfoCallout.c)
 * Callees:
 *     QueuePowerRequest @ 0x1400E9340 (QueuePowerRequest.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PowerDisplayBurst@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401B0168 (-PowerDisplayBurst@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 */

void __fastcall PowerDisplayBurst(enum POWER_MONITOR_REQUEST_REASON a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rdi
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+34h] [rbp-14h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v1 = a1;
  v5 = 0uLL;
  v7 = 0;
  InputTraceLogging::Power::PowerDisplayBurst(a1);
  UserSessionState = W32GetUserSessionState(v3, v2);
  switch ( (_DWORD)v1 )
  {
    case 6:
      *(_QWORD *)(UserSessionState + 2856) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    case 5:
    case 0x10:
      *(_QWORD *)(UserSessionState + 2864) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    case 0x19:
      *(_QWORD *)(UserSessionState + 2872) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1506);
      break;
  }
  if ( !*(_DWORD *)(UserSessionState + 2756) )
  {
    v6 = 4;
    v8 = v1;
    QueuePowerRequest(&v5, 0);
  }
}
