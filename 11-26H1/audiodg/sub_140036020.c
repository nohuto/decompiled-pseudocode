/*
 * XREFs of sub_140036020 @ 0x140036020
 * Callers:
 *     sub_1400ABB80 @ 0x1400ABB80 (sub_1400ABB80.c)
 *     sub_1400ABC90 @ 0x1400ABC90 (sub_1400ABC90.c)
 *     sub_1400AC4A0 @ 0x1400AC4A0 (sub_1400AC4A0.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION **__fastcall sub_140036020(
        struct _RTL_CRITICAL_SECTION **a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  *a1 = 0LL;
  if ( a2 )
  {
    *a1 = a2;
    EnterCriticalSection(a2);
  }
  return a1;
}
