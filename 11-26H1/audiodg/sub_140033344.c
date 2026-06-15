/*
 * XREFs of sub_140033344 @ 0x140033344
 * Callers:
 *     sub_140029B30 @ 0x140029B30 (sub_140029B30.c)
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 *     sub_14008DBD0 @ 0x14008DBD0 (sub_14008DBD0.c)
 *     sub_1400B3AB0 @ 0x1400B3AB0 (sub_1400B3AB0.c)
 * Callees:
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 */

void __fastcall sub_140033344(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
    sub_140008C08(*(void ***)a1, *(void **)(a1 + 8));
}
