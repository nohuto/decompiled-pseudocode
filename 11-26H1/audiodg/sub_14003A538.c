/*
 * XREFs of sub_14003A538 @ 0x14003A538
 * Callers:
 *     sub_1400AEFE4 @ 0x1400AEFE4 (sub_1400AEFE4.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 */

__int64 __fastcall sub_14003A538(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_140003238((__int64 *)(v2 + 24));
  return sub_14003A568(a1);
}
