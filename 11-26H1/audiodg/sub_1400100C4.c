/*
 * XREFs of sub_1400100C4 @ 0x1400100C4
 * Callers:
 *     sub_140010230 @ 0x140010230 (sub_140010230.c)
 *     sub_140018E74 @ 0x140018E74 (sub_140018E74.c)
 * Callees:
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000FFE4 @ 0x14000FFE4 (sub_14000FFE4.c)
 */

void __fastcall sub_1400100C4(__int64 a1)
{
  sub_14000FFE4((_QWORD *)a1);
  sub_140008C08((void **)(a1 + 8), 0LL);
  *(_BYTE *)(a1 + 24) = 0;
}
