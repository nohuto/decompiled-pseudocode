/*
 * XREFs of MiIsStoreProcess @ 0x140404810
 * Callers:
 *     MiAgeWorkingSet @ 0x1402FD0D0 (MiAgeWorkingSet.c)
 *     MiDecommitInitializePacket @ 0x140361B88 (MiDecommitInitializePacket.c)
 *     MiInPagePageTable @ 0x1403A4C70 (MiInPagePageTable.c)
 *     MiProcessSuitableForCombining @ 0x1404042DC (MiProcessSuitableForCombining.c)
 *     MiStoreCheckCandidatePage @ 0x140404388 (MiStoreCheckCandidatePage.c)
 *     MiCheckFatalAccessViolation @ 0x1404A08F4 (MiCheckFatalAccessViolation.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070A464 (MiStoreDiscardPoisonedPage.c)
 *     MiCloneProcessAddressSpace @ 0x140961614 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 1198));
  return *(_DWORD *)(v1 + 1300) != -1 && *(_QWORD *)(v1 + 2056) == a1;
}
