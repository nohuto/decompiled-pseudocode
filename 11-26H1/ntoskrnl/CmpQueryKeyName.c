/*
 * XREFs of CmpQueryKeyName @ 0x140A78540
 * Callers:
 *     <none>
 * Callees:
 *     CmpDoQueryKeyName @ 0x140261160 (CmpDoQueryKeyName.c)
 *     CmpFatalFilter @ 0x14085930C (CmpFatalFilter.c)
 */

__int64 __fastcall CmpQueryKeyName(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, char a6)
{
  return CmpDoQueryKeyName(a1, a2, a3, a4, a5, a6);
}
