/*
 * XREFs of NtOpenIoCompletion @ 0x140799970
 * Callers:
 *     DifNtOpenIoCompletionWrapper @ 0x140680F30 (DifNtOpenIoCompletionWrapper.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByName @ 0x14092C800 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // ebx
  char PreviousMode; // si
  __int64 ULong64FromUser; // rax
  NTSTATUS v8; // ebx
  void *v10; // [rsp+50h] [rbp-18h] BYREF

  v3 = (int)ObjectAttributes;
  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(IoCompletionHandle);
    RtlWriteULong64ToUser(IoCompletionHandle, ULong64FromUser);
  }
  LOBYTE(ObjectAttributes) = PreviousMode;
  v8 = ObOpenObjectByName(
         v3,
         (_DWORD)IoCompletionObjectType,
         (_DWORD)ObjectAttributes,
         0,
         DesiredAccess,
         0LL,
         (__int64)&v10);
  if ( v8 >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(IoCompletionHandle, (__int64)v10);
    else
      *IoCompletionHandle = v10;
  }
  return v8;
}
