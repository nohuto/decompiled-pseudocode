/*
 * XREFs of ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180063A78
 * Callers:
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180023F94 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008383C (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLI.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostCleanupCommonState(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)a1 + 163);
  if ( v2 )
  {
    TpReleaseWork(v2);
    *((_QWORD *)a1 + 163) = 0LL;
  }
}
