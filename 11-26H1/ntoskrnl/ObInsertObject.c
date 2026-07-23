/*
 * XREFs of ObInsertObject @ 0x140906AE0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1403100A0 (FsRtlCreateSectionForDataScan.c)
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x140425ADC (PopPowerRequestCreateUserModeRequest.c)
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     PspInitPhase1 @ 0x140CDE4AC (PspInitPhase1.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140CDEDF0 (PspInitializeCpuPartitionsPhase1.c)
 *     CmpCreateRegistryRoot @ 0x140CF0AAC (CmpCreateRegistryRoot.c)
 *     MiSectionInitialization @ 0x140CFEA3C (MiSectionInitialization.c)
 *     IopInitializeBuiltinDriver @ 0x140D0F138 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall ObInsertObject(
        PVOID Object,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        ULONG ObjectPointerBias,
        PVOID *NewObject,
        PHANDLE Handle)
{
  return ObInsertObjectEx(Object, PassedAccessState, DesiredAccess, ObjectPointerBias, 0, NewObject, Handle);
}
