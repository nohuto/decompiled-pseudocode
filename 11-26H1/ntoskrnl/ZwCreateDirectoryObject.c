/*
 * XREFs of ZwCreateDirectoryObject @ 0x140724970
 * Callers:
 *     DifZwCreateDirectoryObjectWrapper @ 0x14069EA40 (DifZwCreateDirectoryObjectWrapper.c)
 *     ObpInitializeRootNamespace @ 0x1407C2F9C (ObpInitializeRootNamespace.c)
 *     SepInitializationPhase1 @ 0x140810284 (SepInitializationPhase1.c)
 *     ObpGetSilosRootDirectory @ 0x1408A7480 (ObpGetSilosRootDirectory.c)
 *     SeGetTokenDeviceMap @ 0x140A18788 (SeGetTokenDeviceMap.c)
 *     ExInitializeNls @ 0x140B6CCE4 (ExInitializeNls.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140CD8A70 (PspInitializeCpuPartitionsPhase1.c)
 *     CmpInitializeDriverStores @ 0x140CEAB70 (CmpInitializeDriverStores.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle, *(_QWORD *)&DesiredAccess);
}
