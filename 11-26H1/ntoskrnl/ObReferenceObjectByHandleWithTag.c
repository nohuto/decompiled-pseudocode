/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x1408F9EF0
 * Callers:
 *     SepReferenceTokenByHandle @ 0x1402AC430 (SepReferenceTokenByHandle.c)
 *     ExpSetTimer2 @ 0x1403A9844 (ExpSetTimer2.c)
 *     PopCreatePowerThread @ 0x1403B653C (PopCreatePowerThread.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403DBD20 (NtSignalAndWaitForSingleObject.c)
 *     NtSetTimerEx @ 0x140436460 (NtSetTimerEx.c)
 *     NtSetTimer @ 0x140436D00 (NtSetTimer.c)
 *     MiReferenceAweHandle @ 0x140513A44 (MiReferenceAweHandle.c)
 *     MiInsertNewZeroThread @ 0x1405161C8 (MiInsertNewZeroThread.c)
 *     PspQueryInformationProcessAvailableCpus @ 0x14052CCA8 (PspQueryInformationProcessAvailableCpus.c)
 *     DbgkCaptureLiveKernelDump @ 0x1405B4278 (DbgkCaptureLiveKernelDump.c)
 *     PspTimerDelayProcess @ 0x140617460 (PspTimerDelayProcess.c)
 *     NtCancelTimer @ 0x1406CF780 (NtCancelTimer.c)
 *     PspBuildCreateProcessContext @ 0x140A00BC4 (PspBuildCreateProcessContext.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140CD0B50 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall ObReferenceObjectByHandleWithTag(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag,
        PVOID *Object,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  return ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, Tag, (__int64)Object, (__int64)HandleInformation, 0LL);
}
