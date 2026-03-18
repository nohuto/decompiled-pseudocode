/*
 * XREFs of KiBugCheckDebugBreak @ 0x1405E7550
 * Callers:
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x1405E7070 (KeEnterKernelDebugger.c)
 *     KiAttemptBugcheckRecovery @ 0x1405F9734 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x140534930 (DbgBreakPointWithStatus.c)
 *     KiHeadlessDisplayString @ 0x1405E857C (KiHeadlessDisplayString.c)
 *     HeadlessDispatch @ 0x1406CB870 (HeadlessDispatch.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
