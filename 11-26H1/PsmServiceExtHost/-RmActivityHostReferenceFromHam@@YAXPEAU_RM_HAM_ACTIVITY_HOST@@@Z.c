/*
 * XREFs of ?RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023628
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x18000C220 (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024AB0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180078F30 (-HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmActivityHostReferenceFromHam(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rdx

  v1 = 16LL;
  if ( a1 )
    v1 = (__int64)a1 - 40;
  if ( _InterlockedIncrement64((volatile signed __int64 *)v1) <= 1 )
    __fastfail(0xEu);
}
