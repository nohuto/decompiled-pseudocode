/*
 * XREFs of NtOpenSymbolicLinkObject @ 0x140A95620
 * Callers:
 *     DifNtOpenSymbolicLinkObjectWrapper @ 0x140682D00 (DifNtOpenSymbolicLinkObjectWrapper.c)
 *     AdtpInitializeDriveLetters @ 0x140897178 (AdtpInitializeDriveLetters.c)
 *     IopReassignSystemRoot @ 0x140CC3E74 (IopReassignSystemRoot.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __cdecl NtOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // si
  PVOID v7; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS v9; // ebx
  __int64 ULong64FromUser; // rax
  void *v12; // [rsp+48h] [rbp-20h] BYREF

  v12 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(LinkHandle);
    RtlWriteULong64ToUser(LinkHandle, ULong64FromUser);
  }
  v7 = ObpSymbolicLinkObjectType;
  CurrentSilo = PsGetCurrentSilo();
  v9 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (__int64)v7,
         PreviousMode,
         0LL,
         DesiredAccess,
         0LL,
         (__int64)CurrentSilo,
         &v12);
  if ( PreviousMode )
    RtlWriteULong64ToUser(LinkHandle, (__int64)v12);
  else
    *LinkHandle = v12;
  return v9;
}
