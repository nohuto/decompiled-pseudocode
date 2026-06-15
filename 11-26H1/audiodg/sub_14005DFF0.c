/*
 * XREFs of sub_14005DFF0 @ 0x14005DFF0
 * Callers:
 *     sub_1400440C4 @ 0x1400440C4 (sub_1400440C4.c)
 *     sub_14005E820 @ 0x14005E820 (sub_14005E820.c)
 *     sub_140060BB8 @ 0x140060BB8 (sub_140060BB8.c)
 *     sub_14006496C @ 0x14006496C (sub_14006496C.c)
 *     sub_140088F00 @ 0x140088F00 (sub_140088F00.c)
 *     sub_1400890D4 @ 0x1400890D4 (sub_1400890D4.c)
 *     sub_14008A044 @ 0x14008A044 (sub_14008A044.c)
 *     sub_14008A660 @ 0x14008A660 (sub_14008A660.c)
 *     sub_14008C6C4 @ 0x14008C6C4 (sub_14008C6C4.c)
 *     sub_14008CC5C @ 0x14008CC5C (sub_14008CC5C.c)
 *     sub_14008CE38 @ 0x14008CE38 (sub_14008CE38.c)
 *     sub_14008D014 @ 0x14008D014 (sub_14008D014.c)
 *     sub_14008D1FC @ 0x14008D1FC (sub_14008D1FC.c)
 *     sub_14008E414 @ 0x14008E414 (sub_14008E414.c)
 *     sub_14008EF9C @ 0x14008EF9C (sub_14008EF9C.c)
 *     sub_14008F17C @ 0x14008F17C (sub_14008F17C.c)
 *     sub_14008F354 @ 0x14008F354 (sub_14008F354.c)
 *     sub_140091540 @ 0x140091540 (sub_140091540.c)
 *     sub_1400915E0 @ 0x1400915E0 (sub_1400915E0.c)
 *     sub_140091680 @ 0x140091680 (sub_140091680.c)
 *     sub_140091720 @ 0x140091720 (sub_140091720.c)
 *     sub_140092584 @ 0x140092584 (sub_140092584.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 *__fastcall sub_14005DFF0(__int64 *a1, __int64 a2)
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
