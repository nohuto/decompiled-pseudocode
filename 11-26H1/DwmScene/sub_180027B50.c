/*
 * XREFs of sub_180027B50 @ 0x180027B50
 * Callers:
 *     sub_1800277FC @ 0x1800277FC (sub_1800277FC.c)
 *     sub_18002F2EC @ 0x18002F2EC (sub_18002F2EC.c)
 *     sub_18002F3F4 @ 0x18002F3F4 (sub_18002F3F4.c)
 *     sub_18004C300 @ 0x18004C300 (sub_18004C300.c)
 *     sub_180051E20 @ 0x180051E20 (sub_180051E20.c)
 *     sub_18005FFB4 @ 0x18005FFB4 (sub_18005FFB4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_180027B50(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 48);
    if ( v3 )
      sub_180010EC8(v3);
  }
  return sub_180027ACC(a1);
}
