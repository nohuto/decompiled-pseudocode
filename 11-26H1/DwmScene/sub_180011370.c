/*
 * XREFs of sub_180011370 @ 0x180011370
 * Callers:
 *     sub_1800102F0 @ 0x1800102F0 (sub_1800102F0.c)
 * Callees:
 *     sub_180011338 @ 0x180011338 (sub_180011338.c)
 */

FARPROC __fastcall sub_180011370(const CHAR *a1)
{
  HMODULE v2; // rax

  v2 = sub_180011338();
  return GetProcAddress(v2, a1);
}
