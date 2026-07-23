/*
 * XREFs of ZwCreateDirectoryObject @ 0x14069C6C0
 * Callers:
 *     DifZwCreateDirectoryObjectWrapper @ 0x140631480 (DifZwCreateDirectoryObjectWrapper.c)
 *     ObpInitializeRootNamespace @ 0x140737C88 (ObpInitializeRootNamespace.c)
 *     SepInitializationPhase1 @ 0x14077FC20 (SepInitializationPhase1.c)
 *     ObpGetSilosRootDirectory @ 0x14081B360 (ObpGetSilosRootDirectory.c)
 *     SeGetTokenDeviceMap @ 0x14097F108 (SeGetTokenDeviceMap.c)
 *     ExInitializeNls @ 0x140ABD924 (ExInitializeNls.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140C244C4 (PspInitializeCpuPartitionsPhase1.c)
 *     CmpInitializeDriverStores @ 0x140C35F30 (CmpInitializeDriverStores.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
