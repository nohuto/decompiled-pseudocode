/*
 * XREFs of sub_14001821C @ 0x14001821C
 * Callers:
 *     sub_1400181B4 @ 0x1400181B4 (sub_1400181B4.c)
 *     sub_140018580 @ 0x140018580 (sub_140018580.c)
 *     sub_140019480 @ 0x140019480 (sub_140019480.c)
 *     sub_140060370 @ 0x140060370 (sub_140060370.c)
 *     sub_14006083C @ 0x14006083C (sub_14006083C.c)
 *     sub_140077830 @ 0x140077830 (sub_140077830.c)
 *     sub_1400778E0 @ 0x1400778E0 (sub_1400778E0.c)
 *     sub_1400779D0 @ 0x1400779D0 (sub_1400779D0.c)
 *     sub_140077AA4 @ 0x140077AA4 (sub_140077AA4.c)
 *     sub_14007BD30 @ 0x14007BD30 (sub_14007BD30.c)
 *     sub_14007DD08 @ 0x14007DD08 (sub_14007DD08.c)
 *     sub_14007DDB0 @ 0x14007DDB0 (sub_14007DDB0.c)
 *     sub_14009EE00 @ 0x14009EE00 (sub_14009EE00.c)
 *     sub_14009F2B0 @ 0x14009F2B0 (sub_14009F2B0.c)
 *     sub_1400A01A0 @ 0x1400A01A0 (sub_1400A01A0.c)
 *     sub_1400A10D0 @ 0x1400A10D0 (sub_1400A10D0.c)
 *     sub_1400AA1A8 @ 0x1400AA1A8 (sub_1400AA1A8.c)
 *     sub_1400AA844 @ 0x1400AA844 (sub_1400AA844.c)
 *     sub_1400AC6D0 @ 0x1400AC6D0 (sub_1400AC6D0.c)
 *     sub_1400ACC20 @ 0x1400ACC20 (sub_1400ACC20.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 *__fastcall sub_14001821C(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = a2;
  if ( a2 )
    sub_1400B6010(a2);
  if ( v3 )
    sub_1400B6010(v3);
  return a1;
}
