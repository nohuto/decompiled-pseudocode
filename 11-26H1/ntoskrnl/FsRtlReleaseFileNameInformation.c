/*
 * XREFs of FsRtlReleaseFileNameInformation @ 0x140922600
 * Callers:
 *     EtwpTraceImageUnloadApc @ 0x14046F760 (EtwpTraceImageUnloadApc.c)
 *     EtwpCancelTraceImageUnloadApc @ 0x1406C9060 (EtwpCancelTraceImageUnloadApc.c)
 *     EtwpEnumerateAddressSpace @ 0x140921CD0 (EtwpEnumerateAddressSpace.c)
 *     PsCallImageNotifyRoutines @ 0x1409E6750 (PsCallImageNotifyRoutines.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x140A32AF4 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCovSampEnumerateProcess @ 0x140A33C00 (EtwpCovSampEnumerateProcess.c)
 *     EtwpCovSampModuleGetName @ 0x140A35658 (EtwpCovSampModuleGetName.c)
 *     PerfLogImageUnload @ 0x140ABB148 (PerfLogImageUnload.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsRtlReleaseFileNameInformation(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
