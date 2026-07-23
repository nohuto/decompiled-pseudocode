/*
 * XREFs of KiBugCheckDebugBreak @ 0x1405E9EC0
 * Callers:
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x1405E99E0 (KeEnterKernelDebugger.c)
 *     KiAttemptBugcheckRecovery @ 0x1405FC154 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x140536DB0 (DbgBreakPointWithStatus.c)
 *     KiHeadlessDisplayString @ 0x1405EAEEC (KiHeadlessDisplayString.c)
 *     HeadlessDispatch @ 0x1406CF8A0 (HeadlessDispatch.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
