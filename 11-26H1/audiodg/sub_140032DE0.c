/*
 * XREFs of sub_140032DE0 @ 0x140032DE0
 * Callers:
 *     sub_140032D48 @ 0x140032D48 (sub_140032D48.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140032DE0(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 448;
  sub_1400B6010(a1 + 448);
  return sub_1400B6010(v1);
}
