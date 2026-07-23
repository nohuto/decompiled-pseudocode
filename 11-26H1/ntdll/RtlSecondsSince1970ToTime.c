/*
 * XREFs of RtlSecondsSince1970ToTime @ 0x18010C120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlSecondsSince1970ToTime(ULONG ElapsedSeconds, PLARGE_INTEGER Time)
{
  Time->QuadPart = 10000000 * (ElapsedSeconds + SecondsToStartOf1970);
}
