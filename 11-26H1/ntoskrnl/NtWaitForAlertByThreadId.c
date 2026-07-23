/*
 * XREFs of NtWaitForAlertByThreadId @ 0x140A73250
 * Callers:
 *     DifNtWaitForAlertByThreadIdWrapper @ 0x140694A60 (DifNtWaitForAlertByThreadIdWrapper.c)
 * Callees:
 *     KeWaitForAlertByThreadId @ 0x140223DF0 (KeWaitForAlertByThreadId.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 */

NTSTATUS __cdecl NtWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  char PreviousMode; // bl
  __int64 ULong64FromUser; // [rsp+40h] [rbp+18h] BYREF

  ULong64FromUser = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( Timeout && PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(Timeout);
    Timeout = (PLARGE_INTEGER)&ULong64FromUser;
  }
  return KeWaitForAlertByThreadId(PreviousMode, (__int64)Timeout, (struct _KTHREAD *)Address);
}
