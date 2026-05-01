/*
 * XREFs of ?RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180031570
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008383C (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLI.c)
 * Callees:
 *     ?RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180032550 (-RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 */

void __fastcall RmpPsmAppFamilyTableCheckDelete(struct _RM_SERVICE_GLOBALS *a1, struct _RM_PSM_APP_FAMILY *a2)
{
  if ( !*((_QWORD *)a2 + 69) )
    RmpPsmAppFamilyTableRemove(a1, a2);
}
