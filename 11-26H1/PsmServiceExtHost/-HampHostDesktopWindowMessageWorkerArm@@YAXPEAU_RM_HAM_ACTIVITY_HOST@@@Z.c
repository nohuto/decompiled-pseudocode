/*
 * XREFs of ?HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180078F30
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002365C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023628 (-RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostDesktopWindowMessageWorkerArm(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  HampHostAcquireLockExclusiveEx(a1, 0);
  *((_QWORD *)a1 + 84) |= 0x20uLL;
  RmActivityHostReferenceFromHam(a1);
  TpPostWork(*((_QWORD *)a1 + 81));
  HampHostReleaseLockExclusive(a1);
}
