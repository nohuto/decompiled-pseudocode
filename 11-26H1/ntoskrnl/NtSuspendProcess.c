/*
 * XREFs of NtSuspendProcess @ 0x140B3E200
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsSuspendProcess @ 0x1408029A0 (PsSuspendProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtSuspendProcess(HANDLE ProcessHandle)
{
  char PreviousMode; // r9
  NTSTATUS v2; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v2 = ObpReferenceObjectByHandleWithTag(
         (ULONG_PTR)ProcessHandle,
         2048,
         (__int64)PsProcessType,
         PreviousMode,
         0x75537350u,
         &Object,
         0LL,
         0LL);
  if ( v2 >= 0 )
  {
    v2 = PsSuspendProcess(Object);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
  }
  return v2;
}
