/*
 * XREFs of sub_18003B59C @ 0x18003B59C
 * Callers:
 *     sub_180086D20 @ 0x180086D20 (sub_180086D20.c)
 * Callees:
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 */

char __fastcall sub_18003B59C(__int64 a1)
{
  sub_18003D718(a1);
  return HIWORD(*(_DWORD *)(a1 + 448)) & 1;
}
