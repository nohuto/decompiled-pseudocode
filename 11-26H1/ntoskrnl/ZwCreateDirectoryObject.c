/*
 * XREFs of ZwCreateDirectoryObject @ 0x140729540
 * Callers:
 *     DifZwCreateDirectoryObjectWrapper @ 0x1406A2620 (DifZwCreateDirectoryObjectWrapper.c)
 *     ObpInitializeRootNamespace @ 0x1407C5FFC (ObpInitializeRootNamespace.c)
 *     SepInitializationPhase1 @ 0x140815D14 (SepInitializationPhase1.c)
 *     ObpGetSilosRootDirectory @ 0x1408AD8F0 (ObpGetSilosRootDirectory.c)
 *     SeGetTokenDeviceMap @ 0x140A21DB8 (SeGetTokenDeviceMap.c)
 *     ExInitializeNls @ 0x140B700B4 (ExInitializeNls.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140CDEDF0 (PspInitializeCpuPartitionsPhase1.c)
 *     CmpInitializeDriverStores @ 0x140CF0F10 (CmpInitializeDriverStores.c)
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
