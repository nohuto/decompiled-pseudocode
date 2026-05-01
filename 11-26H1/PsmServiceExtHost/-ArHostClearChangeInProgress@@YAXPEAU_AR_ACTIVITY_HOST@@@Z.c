/*
 * XREFs of ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180014C1C
 * Callers:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180014468 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x180014800 (-ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 *     ?ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180067DD4 (-ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18006CC6C (-ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x180074F20 (-ArSrvCloseActivity@@YAJ_K0@Z.c)
 *     ?ArHostRundownActivities@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180075068 (-ArHostRundownActivities@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180014CE4 (-ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180014D3C (-ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 */

void __fastcall ArHostClearChangeInProgress(struct _AR_ACTIVITY_HOST *a1)
{
  struct _ACTIVITY_RESTARTER *v2; // rdi

  v2 = (struct _ACTIVITY_RESTARTER *)(*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL);
  ArManagerAcquireLockExclusive(v2);
  *((_BYTE *)a1 + 592) &= ~1u;
  ArManagerReleaseLockExclusive(v2);
  RtlWakeAddressAll((char *)a1 + 592);
}
