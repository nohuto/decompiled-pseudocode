/*
 * XREFs of FsRtlReleaseFileNameInformation @ 0x1409FDA00
 * Callers:
 *     EtwpTraceImageUnloadApc @ 0x140475FE0 (EtwpTraceImageUnloadApc.c)
 *     EtwpCancelTraceImageUnloadApc @ 0x1406C5420 (EtwpCancelTraceImageUnloadApc.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x14093F9E4 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCovSampEnumerateProcess @ 0x140940AF0 (EtwpCovSampEnumerateProcess.c)
 *     EtwpCovSampModuleGetName @ 0x140942548 (EtwpCovSampModuleGetName.c)
 *     EtwpEnumerateAddressSpace @ 0x1409FD0D0 (EtwpEnumerateAddressSpace.c)
 *     PsCallImageNotifyRoutines @ 0x140A791A4 (PsCallImageNotifyRoutines.c)
 *     PerfLogImageUnload @ 0x140AB9C84 (PerfLogImageUnload.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsRtlReleaseFileNameInformation(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
