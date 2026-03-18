/*
 * XREFs of sub_14000C8C0 @ 0x14000C8C0
 * Callers:
 *     sub_140007800 @ 0x140007800 (sub_140007800.c)
 *     sub_1400095E0 @ 0x1400095E0 (sub_1400095E0.c)
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_1400185C0 @ 0x1400185C0 (sub_1400185C0.c)
 *     sub_14001BA90 @ 0x14001BA90 (sub_14001BA90.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14000C8C0(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( a2 )
    return 10000 * (1000 * (a1 % a2) / a2 + 1000 * (a1 / a2)) + 10000 * (1000 * (a1 % a2) % a2) / a2;
  else
    return 0LL;
}
