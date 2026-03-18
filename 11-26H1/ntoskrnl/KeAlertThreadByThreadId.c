/*
 * XREFs of KeAlertThreadByThreadId @ 0x1404F936C
 * Callers:
 *     RtlRunOnceComplete @ 0x1409E73A0 (RtlRunOnceComplete.c)
 *     VslCallEnclave @ 0x140B19E0C (VslCallEnclave.c)
 * Callees:
 *     KeAlertThreadByThreadIdEx @ 0x140381260 (KeAlertThreadByThreadIdEx.c)
 */

__int64 __fastcall KeAlertThreadByThreadId(__int64 a1, __int64 a2, void *a3, unsigned int a4)
{
  return KeAlertThreadByThreadIdEx(a1, 0LL, a3, a4);
}
