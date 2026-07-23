/*
 * XREFs of NtOpenEvent @ 0x140AA8FA0
 * Callers:
 *     DifNtOpenEventWrapper @ 0x140680C00 (DifNtOpenEventWrapper.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByName @ 0x14092C800 (ObOpenObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __cdecl NtOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // si
  POBJECT_TYPE *v7; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS v9; // ebx
  __int64 ULong64FromUser; // rax
  __int64 v12[2]; // [rsp+50h] [rbp-28h] BYREF

  v12[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(EventHandle);
    RtlWriteULong64ToUser(EventHandle, ULong64FromUser);
  }
  v7 = ExEventObjectType;
  CurrentSilo = PsGetCurrentSilo();
  v9 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (__int64)v7,
         PreviousMode,
         0LL,
         DesiredAccess,
         0LL,
         (__int64)CurrentSilo,
         v12);
  if ( v9 == -1073741788 && WheapConfigTableLock.WaitBlock[1].WaitListEntry.Blink )
    v9 = ObOpenObjectByName(
           (__int64)ObjectAttributes,
           (__int64)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Blink,
           PreviousMode,
           0LL,
           DesiredAccess,
           0LL,
           (__int64)v12);
  if ( v9 >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(EventHandle, v12[0]);
    else
      *EventHandle = (HANDLE)v12[0];
  }
  return v9;
}
