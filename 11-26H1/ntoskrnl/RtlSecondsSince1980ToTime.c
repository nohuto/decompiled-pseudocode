/*
 * XREFs of RtlSecondsSince1980ToTime @ 0x14061A740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlSecondsSince1980ToTime(ULONG ElapsedSeconds, PLARGE_INTEGER Time)
{
  Time->QuadPart = 10000000 * (ElapsedSeconds + SecondsToStartOf1980);
}
