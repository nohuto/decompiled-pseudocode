/*
 * XREFs of sub_140056054 @ 0x140056054
 * Callers:
 *     sub_140045574 @ 0x140045574 (sub_140045574.c)
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_140194600 @ 0x140194600 (sub_140194600.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140056054(__int64 a1)
{
  if ( *(_DWORD *)a1 )
    return 3221225729LL;
  ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0x74636944u);
  return 0LL;
}
