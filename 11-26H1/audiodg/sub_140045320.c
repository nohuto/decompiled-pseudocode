/*
 * XREFs of sub_140045320 @ 0x140045320
 * Callers:
 *     sub_140020D64 @ 0x140020D64 (sub_140020D64.c)
 *     sub_140052178 @ 0x140052178 (sub_140052178.c)
 *     sub_140052318 @ 0x140052318 (sub_140052318.c)
 *     sub_1400AF394 @ 0x1400AF394 (sub_1400AF394.c)
 * Callees:
 *     sub_140045350 @ 0x140045350 (sub_140045350.c)
 */

__int64 __fastcall sub_140045320(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_140045350(v2 + 16);
  return sub_140045378(a1);
}
