/*
 * XREFs of ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800805F8
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180074560 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z @ 0x18005C0D0 (-RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z.c)
 *     ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z @ 0x180074B4C (-RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z.c)
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007C270 (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpSystemNotificationContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800885B0 (-RmpSystemNotificationContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

__int64 __fastcall RmpStartAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // rbx
  HANDLE Thread; // rax
  int v4; // ebx
  int v5; // ebx
  DWORD TickCount; // eax

  v1 = (char *)a1 + 312;
  Thread = CreateThread(0LL, 0LL, RmpMemoryMonitorWorker, (char *)a1 + 312, 0, 0LL);
  *((_QWORD *)v1 + 7) = Thread;
  if ( Thread )
  {
    *((_DWORD *)v1 + 48) &= ~2u;
    *((_DWORD *)v1 + 48) |= 1u;
    RmpAcquireGlobalLock();
    v4 = RtlSubscribeWnfStateChangeNotification(
           (char *)a1 + 2176,
           WNF_AUDC_CPUSET_ID_SYSTEM,
           0LL,
           RmpCpuSetManagerAudioCpuWnfCallback,
           (char *)a1 + 792,
           0LL,
           0,
           0);
    RmpReleaseGlobalLock();
    if ( v4 >= 0 )
    {
      v4 = RmpSystemNotificationContextStart(a1);
      if ( v4 >= 0 )
      {
        RmpAcquireGlobalLock();
        v5 = (*((_DWORD *)a1 + 192) & 1) != 0 ? 0x2932E0 : 0;
        *((_DWORD *)a1 + 170) = GetTickCount();
        TickCount = GetTickCount();
        RmpTelemetrySetTimer(a1, v5 + 900000, TickCount);
        RmpReleaseGlobalLock();
        v4 = RmpRpExtStart((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 776));
        if ( v4 >= 0 )
        {
          v4 = HampManagerStart((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2360));
          if ( v4 >= 0 )
            return 0;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v4;
}
