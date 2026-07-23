/*
 * XREFs of NtCreatePartition @ 0x140802EC0
 * Callers:
 *     DifNtCreatePartitionWrapper @ 0x140676050 (DifNtCreatePartitionWrapper.c)
 * Callees:
 *     PsCreatePartition @ 0x14080347C (PsCreatePartition.c)
 */

NTSTATUS __cdecl NtCreatePartition(
        HANDLE ParentPartitionHandle,
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG PreferredNode)
{
  return PsCreatePartition(
           (int)ParentPartitionHandle,
           (int)PartitionHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           KeGetCurrentThread()->PreviousMode,
           0);
}
