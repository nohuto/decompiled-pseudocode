/*
 * XREFs of ObInsertObject @ 0x14092AFB0
 * Callers:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x1402C53E0 (FsRtlCreateSectionForDataScan.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x140436B4C (PopPowerRequestCreateUserModeRequest.c)
 *     PspInitPhase1 @ 0x140CD812C (PspInitPhase1.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140CD8A70 (PspInitializeCpuPartitionsPhase1.c)
 *     CmpCreateRegistryRoot @ 0x140CEA70C (CmpCreateRegistryRoot.c)
 *     MiSectionInitialization @ 0x140CF86BC (MiSectionInitialization.c)
 *     IopInitializeBuiltinDriver @ 0x140D08E68 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
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
