/*
 * XREFs of ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800804C8
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180074560 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18000F294 (-RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BFDC (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?Rundown@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180081AEC (-Rundown@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180083E2C (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180087D80 (-RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemNotificationContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180088508 (-RmpSystemNotificationContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

void __fastcall RmpRundownAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  struct _RM_GAME_MODE_CONTEXT *v1; // rdi
  ExecutionModel::ResourceManager *v3; // rcx

  v1 = (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2208);
  RmpGameModeAcquireLock((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2208));
  RmpAcquireGlobalLock();
  *((_DWORD *)a1 + 884) |= 1u;
  RmpReleaseGlobalLock();
  *((_DWORD *)a1 + 572) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 2280);
  HampManagerRundown((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2360));
  v3 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 443);
  if ( v3 )
    ExecutionModel::ResourceManager::Rundown(v3);
  if ( *((_QWORD *)a1 + 272) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)a1 + 272) = 0LL;
  }
  RmpEnforcerContextRundown(a1);
  RmpGameModeRundown(v1);
  if ( *((_QWORD *)a1 + 46) )
  {
    SetEvent(*((HANDLE *)a1 + 42));
    WaitForSingleObject(*((HANDLE *)a1 + 46), 0xFFFFFFFF);
  }
  RmpSystemNotificationContextRundown(a1);
  if ( *((_QWORD *)a1 + 84) )
  {
    RmpAcquireGlobalLock();
    TpSetTimer(*((_QWORD *)a1 + 84), 0LL, 0LL, 0LL);
    RmpReleaseGlobalLock();
    TpWaitForTimer(*((_QWORD *)a1 + 84), 1LL);
  }
}
