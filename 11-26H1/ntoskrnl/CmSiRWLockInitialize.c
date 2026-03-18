/*
 * XREFs of CmSiRWLockInitialize @ 0x140B60560
 * Callers:
 *     SleepstudyHelperCreateLibraryEx @ 0x1404ED710 (SleepstudyHelperCreateLibraryEx.c)
 *     ??0RTLP_FLS_CALLBACK_ENTRY@@QEAA@XZ @ 0x140624694 (--0RTLP_FLS_CALLBACK_ENTRY@@QEAA@XZ.c)
 *     RtlHpHeapManagerInitialize @ 0x14062561C (RtlHpHeapManagerInitialize.c)
 *     RtlpHpHeapCreate @ 0x140638298 (RtlpHpHeapCreate.c)
 *     DbgkpInitializePhase0 @ 0x140CB5C08 (DbgkpInitializePhase0.c)
 *     SshInitialize @ 0x140CD7428 (SshInitialize.c)
 *     SshpSessionManagerInitialize @ 0x140CD7604 (SshpSessionManagerInitialize.c)
 *     SshpAlpcInitialize @ 0x140CD768C (SshpAlpcInitialize.c)
 *     CmFcManagerInitialize @ 0x140CF07BC (CmFcManagerInitialize.c)
 *     PspInitPhase0 @ 0x140D06FAC (PspInitPhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall CmSiRWLockInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
