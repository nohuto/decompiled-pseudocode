/*
 * XREFs of KeAlertThreadByThreadId @ 0x1404F297C
 * Callers:
 *     RtlRunOnceComplete @ 0x1409D58C0 (RtlRunOnceComplete.c)
 *     VslCallEnclave @ 0x140B1C25C (VslCallEnclave.c)
 * Callees:
 *     KeAlertThreadByThreadIdEx @ 0x140383010 (KeAlertThreadByThreadIdEx.c)
 */

__int64 __fastcall KeAlertThreadByThreadId(__int64 a1, __int64 a2, void *a3, unsigned int a4)
{
  return KeAlertThreadByThreadIdEx(a1, 0LL, a3, a4);
}
