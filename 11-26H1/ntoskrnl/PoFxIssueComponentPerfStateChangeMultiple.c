/*
 * XREFs of PoFxIssueComponentPerfStateChangeMultiple @ 0x140606EF0
 * Callers:
 *     PoFxIssueComponentPerfStateChange @ 0x140606EC0 (PoFxIssueComponentPerfStateChange.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404F2DC0 (PopFxIssueComponentPerfStateChanges.c)
 */

NTSTATUS __fastcall PoFxIssueComponentPerfStateChangeMultiple(
        ULONG_PTR BugCheckParameter2,
        char a2,
        unsigned int a3,
        unsigned int a4,
        void *Src,
        __int64 a6)
{
  if ( (a2 & 1) != 0 && (KeGetCurrentIrql() >= 2u || (a2 & 2) != 0) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, a3, 1uLL);
  if ( a3 >= *(_DWORD *)(BugCheckParameter2 + 868) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, a3, 2uLL);
  return PopFxIssueComponentPerfStateChanges(
           BugCheckParameter2,
           *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * a3),
           a2,
           a4,
           Src,
           a6);
}
