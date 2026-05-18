/*
 * XREFs of sub_18002F140 @ 0x18002F140
 * Callers:
 *     sub_18002E584 @ 0x18002E584 (sub_18002E584.c)
 *     sub_18002F3F4 @ 0x18002F3F4 (sub_18002F3F4.c)
 *     sub_1800380E0 @ 0x1800380E0 (sub_1800380E0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18002F140(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v3; // bl

  v3 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
    return (int)_std_type_info_compare(*a3 + 8LL, *(_QWORD *)(a2 + 32) + 8LL) >= 0;
  return v3;
}
