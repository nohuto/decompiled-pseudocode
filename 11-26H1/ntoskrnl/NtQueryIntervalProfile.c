/*
 * XREFs of NtQueryIntervalProfile @ 0x14084B810
 * Callers:
 *     DifNtQueryIntervalProfileWrapper @ 0x140687A30 (DifNtQueryIntervalProfileWrapper.c)
 * Callees:
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     KeQueryIntervalProfile @ 0x1407BDE5C (KeQueryIntervalProfile.c)
 */

NTSTATUS __cdecl NtQueryIntervalProfile(KPROFILE_SOURCE ProfileSource, PULONG Interval)
{
  int ULongFromUser; // eax

  if ( KeGetCurrentThread()->PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(Interval);
    RtlWriteULongToUser(Interval, ULongFromUser);
  }
  *Interval = KeQueryIntervalProfile(ProfileSource);
  return 0;
}
