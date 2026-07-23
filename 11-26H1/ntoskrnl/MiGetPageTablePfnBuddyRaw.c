/*
 * XREFs of MiGetPageTablePfnBuddyRaw @ 0x1403FD950
 * Callers:
 *     MiSetProbePagesAhead @ 0x1402D1B90 (MiSetProbePagesAhead.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402D2A30 (MiLegitimatePageForDriversToMap.c)
 *     MiIdentifyPfn @ 0x1402D2F70 (MiIdentifyPfn.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiRecheckCombineVm @ 0x1403FD34C (MiRecheckCombineVm.c)
 *     MiPfnToOwningProcess @ 0x1403FD420 (MiPfnToOwningProcess.c)
 *     MiStoreCheckCandidatePage @ 0x1403FD488 (MiStoreCheckCandidatePage.c)
 *     MiLockStealUserVm @ 0x140458690 (MiLockStealUserVm.c)
 *     MiCapturePfnVm @ 0x14050D140 (MiCapturePfnVm.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
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
    return (PEPROCESS)(qword_140E37D10 + 16LL * ((_QWORD)result - 1));
  if ( result == (PEPROCESS)0x10000000001LL )
  {
    if ( PsInitialSystemProcess )
      return PsInitialSystemProcess;
  }
  return result;
}
