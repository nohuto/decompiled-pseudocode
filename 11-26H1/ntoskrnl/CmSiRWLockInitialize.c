/*
 * XREFs of CmSiRWLockInitialize @ 0x140B63600
 * Callers:
 *     SleepstudyHelperCreateLibraryEx @ 0x1404E6CF0 (SleepstudyHelperCreateLibraryEx.c)
 *     ??0RTLP_FLS_CALLBACK_ENTRY@@QEAA@XZ @ 0x1406276E4 (--0RTLP_FLS_CALLBACK_ENTRY@@QEAA@XZ.c)
 *     RtlHpHeapManagerInitialize @ 0x14062866C (RtlHpHeapManagerInitialize.c)
 *     RtlpHpHeapCreate @ 0x14063B29C (RtlpHpHeapCreate.c)
 *     DbgkpInitializePhase0 @ 0x140CBBC48 (DbgkpInitializePhase0.c)
 *     SshInitialize @ 0x140CDD7A8 (SshInitialize.c)
 *     SshpSessionManagerInitialize @ 0x140CDD984 (SshpSessionManagerInitialize.c)
 *     SshpAlpcInitialize @ 0x140CDDA0C (SshpAlpcInitialize.c)
 *     CmFcManagerInitialize @ 0x140CF6B34 (CmFcManagerInitialize.c)
 *     PspInitPhase0 @ 0x140D0D27C (PspInitPhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall CmSiRWLockInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
