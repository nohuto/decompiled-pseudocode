/*
 * XREFs of NtOpenSemaphore @ 0x140ACA880
 * Callers:
 *     DifNtOpenSemaphoreWrapper @ 0x140682A00 (DifNtOpenSemaphoreWrapper.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __cdecl NtOpenSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // si
  POBJECT_TYPE *v7; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS v9; // ebx
  __int64 ULong64FromUser; // rax
  void *v12; // [rsp+48h] [rbp-20h] BYREF

  v12 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(SemaphoreHandle);
    RtlWriteULong64ToUser(SemaphoreHandle, ULong64FromUser);
  }
  v7 = ExSemaphoreObjectType;
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
  if ( v9 >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(SemaphoreHandle, (__int64)v12);
    else
      *SemaphoreHandle = v12;
  }
  return v9;
}
