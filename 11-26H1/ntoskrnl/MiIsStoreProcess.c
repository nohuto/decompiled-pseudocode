/*
 * XREFs of MiIsStoreProcess @ 0x1403FD910
 * Callers:
 *     MiAgeWorkingSet @ 0x1402DF150 (MiAgeWorkingSet.c)
 *     MiDecommitInitializePacket @ 0x140363928 (MiDecommitInitializePacket.c)
 *     MiInPagePageTable @ 0x1403A69D0 (MiInPagePageTable.c)
 *     MiProcessSuitableForCombining @ 0x1403FD3DC (MiProcessSuitableForCombining.c)
 *     MiStoreCheckCandidatePage @ 0x1403FD488 (MiStoreCheckCandidatePage.c)
 *     MiCheckFatalAccessViolation @ 0x14049A444 (MiCheckFatalAccessViolation.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
 *     MiCloneProcessAddressSpace @ 0x140A07308 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 1198));
  return *(_DWORD *)(v1 + 1300) != -1 && *(_QWORD *)(v1 + 2056) == a1;
}
