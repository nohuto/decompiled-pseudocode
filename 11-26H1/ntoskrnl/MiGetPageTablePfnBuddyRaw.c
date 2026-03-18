/*
 * XREFs of MiGetPageTablePfnBuddyRaw @ 0x140404850
 * Callers:
 *     MiSetProbePagesAhead @ 0x1402EFB10 (MiSetProbePagesAhead.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402F09B0 (MiLegitimatePageForDriversToMap.c)
 *     MiIdentifyPfn @ 0x1402F0EF0 (MiIdentifyPfn.c)
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     MiGetPagePrivilege @ 0x1402F9878 (MiGetPagePrivilege.c)
 *     MiRecheckCombineVm @ 0x14040424C (MiRecheckCombineVm.c)
 *     MiPfnToOwningProcess @ 0x140404320 (MiPfnToOwningProcess.c)
 *     MiStoreCheckCandidatePage @ 0x140404388 (MiStoreCheckCandidatePage.c)
 *     MiLockStealUserVm @ 0x14045EF90 (MiLockStealUserVm.c)
 *     MiCapturePfnVm @ 0x1405136D0 (MiCapturePfnVm.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070A464 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     <none>
 */

PEPROCESS __fastcall MiGetPageTablePfnBuddyRaw(__int64 a1)
{
  __int64 v1; // rdx
  PEPROCESS result; // rax

  v1 = *(_QWORD *)a1 >> 1;
  LODWORD(v1) = v1 & 0x7FFFFFFF;
  result = (PEPROCESS)(v1 | ((unsigned __int64)(*(_DWORD *)(a1 + 36) & 0x3FF0000) << 15));
  if ( !result )
    return 0LL;
  if ( (unsigned __int64)&result[-2411209711LL].CpuPartitionList.Blink > 1 )
    return (PEPROCESS)(qword_140E37B90 + 16LL * ((_QWORD)result - 1));
  if ( result == (PEPROCESS)0x10000000001LL )
  {
    if ( PsInitialSystemProcess )
      return PsInitialSystemProcess;
  }
  return result;
}
