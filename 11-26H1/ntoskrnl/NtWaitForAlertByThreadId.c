/*
 * XREFs of NtWaitForAlertByThreadId @ 0x140A66280
 * Callers:
 *     DifNtWaitForAlertByThreadIdWrapper @ 0x140690E80 (DifNtWaitForAlertByThreadIdWrapper.c)
 * Callees:
 *     KeWaitForAlertByThreadId @ 0x140222460 (KeWaitForAlertByThreadId.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall NtWaitForAlertByThreadId(struct _KTHREAD *a1, __int64 *p_ULong64FromUser)
{
  char PreviousMode; // bl
  __int64 ULong64FromUser; // [rsp+40h] [rbp+18h] BYREF

  ULong64FromUser = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( p_ULong64FromUser && PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(p_ULong64FromUser);
    p_ULong64FromUser = &ULong64FromUser;
  }
  return KeWaitForAlertByThreadId(PreviousMode, (__int64)p_ULong64FromUser, a1);
}
