/*
 * XREFs of sub_1400409B0 @ 0x1400409B0
 * Callers:
 *     sub_1400B4550 @ 0x1400B4550 (sub_1400B4550.c)
 * Callees:
 *     sub_1400471D8 @ 0x1400471D8 (sub_1400471D8.c)
 *     sub_140047C6C @ 0x140047C6C (sub_140047C6C.c)
 *     sub_140047FF8 @ 0x140047FF8 (sub_140047FF8.c)
 *     sub_1400481F8 @ 0x1400481F8 (sub_1400481F8.c)
 *     sub_140048218 @ 0x140048218 (sub_140048218.c)
 *     sub_14004DB08 @ 0x14004DB08 (sub_14004DB08.c)
 */

__int64 __fastcall sub_1400409B0(__int64 a1)
{
  __int64 v2; // rcx

  *(_BYTE *)a1 = 0;
  sub_1400471D8(a1 + 48, 0LL);
  sub_1400471D8(a1 + 56, 0LL);
  v2 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 256) = 0LL;
  if ( v2 )
    sub_14004DB08();
  sub_140048218(a1 + 224);
  sub_140047C6C(a1 + 152);
  sub_140047FF8(a1 + 144);
  sub_140047C6C(a1 + 72);
  sub_1400481F8(a1 + 56);
  sub_1400481F8(a1 + 48);
  return sub_140045540(a1 + 8);
}
