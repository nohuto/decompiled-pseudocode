/*
 * XREFs of NtOpenPartition @ 0x1408033A0
 * Callers:
 *     DifNtOpenPartitionWrapper @ 0x140681DA0 (DifNtOpenPartitionWrapper.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObOpenObjectByName @ 0x14092C800 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenPartition(
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // ebx
  KPROCESSOR_MODE PreviousMode; // si
  __int64 ULong64FromUser; // rax
  NTSTATUS result; // eax
  int v9; // edi
  HANDLE v10; // rbx
  HANDLE Handle[2]; // [rsp+48h] [rbp-10h] BYREF

  v3 = (int)ObjectAttributes;
  Handle[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(PartitionHandle);
    RtlWriteULong64ToUser(PartitionHandle, ULong64FromUser);
  }
  LOBYTE(ObjectAttributes) = PreviousMode;
  result = ObOpenObjectByName(
             v3,
             (_DWORD)PsPartitionType,
             (_DWORD)ObjectAttributes,
             0,
             DesiredAccess,
             0LL,
             (__int64)Handle);
  v9 = result;
  if ( result >= 0 )
  {
    v10 = Handle[0];
    if ( PreviousMode )
      RtlWriteULong64ToUser(PartitionHandle, (__int64)Handle[0]);
    else
      *PartitionHandle = Handle[0];
    if ( v9 < 0 )
      ObCloseHandle(v10, PreviousMode);
    return v9;
  }
  return result;
}
