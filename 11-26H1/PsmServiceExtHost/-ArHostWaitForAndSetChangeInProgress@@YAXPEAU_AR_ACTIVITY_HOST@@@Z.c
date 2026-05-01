/*
 * XREFs of ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180014C6C
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

void __fastcall ArHostWaitForAndSetChangeInProgress(struct _AR_ACTIVITY_HOST *a1)
{
  struct _ACTIVITY_RESTARTER *v2; // rdi
  char v3; // al
  char i; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _ACTIVITY_RESTARTER *)(*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL);
  for ( i = 0; ; RtlWaitOnAddress((char *)a1 + 592, &i, 1LL) )
  {
    ArManagerAcquireLockExclusive(v2);
    v3 = *((_BYTE *)a1 + 592);
    if ( (v3 & 1) == 0 )
      break;
    i = *((_BYTE *)a1 + 592);
    ArManagerReleaseLockExclusive(v2);
  }
  *((_BYTE *)a1 + 592) = v3 | 1;
  ArManagerReleaseLockExclusive(v2);
}
