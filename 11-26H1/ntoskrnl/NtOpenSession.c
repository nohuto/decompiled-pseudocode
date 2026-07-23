/*
 * XREFs of NtOpenSession @ 0x140B29D00
 * Callers:
 *     DifNtOpenSessionWrapper @ 0x140682B80 (DifNtOpenSessionWrapper.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByName @ 0x14092C800 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenSession(PHANDLE SessionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // si
  __int64 ULong64FromUser; // rax
  NTSTATUS v8; // edi
  void *v10; // [rsp+50h] [rbp-18h] BYREF

  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(SessionHandle);
    RtlWriteULong64ToUser(SessionHandle, ULong64FromUser);
  }
  v8 = ObOpenObjectByName(
         (__int64)ObjectAttributes,
         (__int64)MmSessionObjectType,
         PreviousMode,
         0LL,
         DesiredAccess,
         0LL,
         (__int64)&v10);
  if ( PreviousMode )
    RtlWriteULong64ToUser(SessionHandle, (__int64)v10);
  else
    *SessionHandle = v10;
  return v8;
}
