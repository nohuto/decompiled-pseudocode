/*
 * XREFs of sub_180025E8C @ 0x180025E8C
 * Callers:
 *     sub_180027560 @ 0x180027560 (sub_180027560.c)
 *     sub_180027590 @ 0x180027590 (sub_180027590.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180025E8C(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8);
}
