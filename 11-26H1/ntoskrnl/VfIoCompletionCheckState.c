/*
 * XREFs of VfIoCompletionCheckState @ 0x140C46BD0
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140C45570 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
 */

void __fastcall VfIoCompletionCheckState(unsigned int *Entry, ULONG_PTR a2)
{
  __int64 v4; // rdx

  if ( (MmVerifierData & 0x10) != 0 && *(_BYTE *)Entry != KeGetCurrentIrql() )
    CarReportRuleViolationFromNt(196, 250LL, a2, *(unsigned __int8 *)Entry, KeGetCurrentIrql(), 4u, a2);
  if ( (MmVerifierData & 0x10) != 0 )
  {
    v4 = Entry[1];
    if ( (_DWORD)v4 != KeGetCurrentThread()->WaitBlock[3].SpareLong )
      CarReportRuleViolationFromNt(196, 251LL, a2, KeGetCurrentThread()->CombinedApcDisable, v4, 4u, a2);
  }
  ExFreeToNPagedLookasideList(&ViIoCallbackStateLookaside, Entry);
}
