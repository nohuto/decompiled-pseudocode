/*
 * XREFs of ?HampDonationDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_DONATION_DEPENDENCY@@@Z @ 0x180067F3C
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A2EC (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180029A08 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall HampDonationDepInitialize(
        struct _HAM_DEPENDENCY_LINK *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        __int64 a3,
        struct _RM_HAM_ACTIVITY_HOST *a4,
        struct _HAM_DONATION_DEPENDENCY *a5)
{
  memset_0(a5, 0, 0x70uLL);
  *((_BYTE *)a5 + 40) = 4;
  *((_QWORD *)a5 + 1) = a1;
  *((_BYTE *)a5 + 104) = 0;
  RmpAcquireGlobalLock();
  *((_QWORD *)a5 + 6) = RmHamHostReference(a2);
  *((_QWORD *)a5 + 7) = RmHamHostReference(a4);
  RmpReleaseGlobalLock();
  *((_QWORD *)a5 + 8) = a3;
}
