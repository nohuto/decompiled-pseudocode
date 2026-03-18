/*
 * XREFs of ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401B6474
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerInfoCallout @ 0x1401A8D3C (UserPowerInfoCallout.c)
 * Callees:
 *     QueuePowerRequest @ 0x140111D40 (QueuePowerRequest.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PowerDisplayBurst@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401B65A0 (-PowerDisplayBurst@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 */

void __fastcall PowerDisplayBurst(enum POWER_MONITOR_REQUEST_REASON a1)
{
  __int64 v1; // rbx
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  __int64 UserSessionState; // rdi
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  v1 = a1;
  v6 = 0uLL;
  v8 = 0;
  InputTraceLogging::Power::PowerDisplayBurst(a1);
  UserSessionState = W32GetUserSessionState(v3, v2, v4);
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
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1464);
      break;
  }
  if ( !*(_DWORD *)(UserSessionState + 2752) )
  {
    v7 = 4;
    v9 = v1;
    QueuePowerRequest(&v6, 0);
  }
}
