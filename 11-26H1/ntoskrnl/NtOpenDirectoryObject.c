/*
 * XREFs of NtOpenDirectoryObject @ 0x140A9DF40
 * Callers:
 *     DifNtOpenDirectoryObjectWrapper @ 0x140680750 (DifNtOpenDirectoryObjectWrapper.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __cdecl NtOpenDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // si
  __int64 ULong64FromUser; // rax
  POBJECT_TYPE v8; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS v10; // ebx
  void *v12; // [rsp+48h] [rbp-20h] BYREF

  v12 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(DirectoryHandle);
    RtlWriteULong64ToUser(DirectoryHandle, ULong64FromUser);
  }
  v8 = ObpDirectoryObjectType;
  CurrentSilo = PsGetCurrentSilo();
  v10 = ObOpenObjectByNameEx(
          (__int64)ObjectAttributes,
          (__int64)v8,
          PreviousMode,
          0LL,
          DesiredAccess,
          0LL,
          (__int64)CurrentSilo,
          &v12);
  if ( PreviousMode )
    RtlWriteULong64ToUser(DirectoryHandle, (__int64)v12);
  else
    *DirectoryHandle = v12;
  return v10;
}
