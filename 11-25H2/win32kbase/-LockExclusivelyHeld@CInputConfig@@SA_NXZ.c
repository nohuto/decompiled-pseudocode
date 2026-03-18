/*
 * XREFs of ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x1401479E0
 * Callers:
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1401F7794 (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1401F7A80 (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F7CFC (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1401F7EA8 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x1401F81F0 (-_FindDefaultInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1401F832C (-_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1401F84D4 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1401F8548 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1401F88D8 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     ?LockedExclusive@CEResourceLock@@QEBA_NXZ @ 0x1401F78F4 (-LockedExclusive@CEResourceLock@@QEBA_NXZ.c)
 */

bool __fastcall CInputConfig::LockExclusivelyHeld(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return CEResourceLock::LockedExclusive((CEResourceLock *)(UserSessionState + 18640));
}
