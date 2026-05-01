/*
 * XREFs of ?HampHostProcessDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x18007F0E8
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A2EC (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180029A08 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall HampHostProcessDepInitialize(
        struct _HAM_DEPENDENCY_LINK *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        struct _HAM_HOST_PROCESS_DEPENDENCY *a4)
{
  memset_0(a4, 0, 0x60uLL);
  *((_QWORD *)a4 + 1) = a1;
  RmpAcquireGlobalLock();
  *((_QWORD *)a4 + 6) = RmHamHostReference(a2);
  *((_QWORD *)a4 + 7) = RmHamHostReference(a3);
  RmpReleaseGlobalLock();
}
