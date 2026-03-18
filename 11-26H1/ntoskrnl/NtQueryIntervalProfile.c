/*
 * XREFs of NtQueryIntervalProfile @ 0x140842770
 * Callers:
 *     DifNtQueryIntervalProfileWrapper @ 0x140683E50 (DifNtQueryIntervalProfileWrapper.c)
 * Callees:
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     KeQueryIntervalProfile @ 0x1407BADFC (KeQueryIntervalProfile.c)
 */

__int64 __fastcall NtQueryIntervalProfile(int a1, unsigned int *a2)
{
  int ULongFromUser; // eax

  if ( KeGetCurrentThread()->PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a2);
    RtlWriteULongToUser(a2, ULongFromUser);
  }
  *a2 = KeQueryIntervalProfile(a1);
  return 0LL;
}
