/*
 * XREFs of ?ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x180064A38
 * Callers:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180014468 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180067DD4 (-ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18006CC6C (-ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArActStartAsync(struct _AR_ACTIVITY *a1)
{
  __int64 result; // rax

  result = HamStartActivityAsync(
             *(_QWORD *)((*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 80),
             *((_QWORD *)a1 + 1),
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    *((_BYTE *)a1 + 32) = 1;
    return 0LL;
  }
  return result;
}
