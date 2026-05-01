/*
 * XREFs of ?RmHamHostIsPple@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180033F44
 * Callers:
 *     ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180033F6C (-HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@.c)
 * Callees:
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033A1C (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

_BOOL8 __fastcall RmHamHostIsPple(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  return RmpActivityHostIsPple((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)a1 - 56) & -(__int64)(a1 != 0LL)));
}
