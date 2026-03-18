/*
 * XREFs of sub_14001942C @ 0x14001942C
 * Callers:
 *     sub_140019450 @ 0x140019450 (sub_140019450.c)
 *     sub_14001C664 @ 0x14001C664 (sub_14001C664.c)
 *     sub_1400286F4 @ 0x1400286F4 (sub_1400286F4.c)
 *     sub_14002AED8 @ 0x14002AED8 (sub_14002AED8.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14001942C(__int64 a1)
{
  return *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209;
}
