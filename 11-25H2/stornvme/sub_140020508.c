/*
 * XREFs of sub_140020508 @ 0x140020508
 * Callers:
 *     sub_14001C664 @ 0x14001C664 (sub_14001C664.c)
 * Callees:
 *     sub_14001A2D4 @ 0x14001A2D4 (sub_14001A2D4.c)
 */

__int64 __fastcall sub_140020508(__int64 a1)
{
  int v2; // [rsp+28h] [rbp-B0h]
  int v3; // [rsp+30h] [rbp-A8h]
  int v4; // [rsp+38h] [rbp-A0h]
  int v5; // [rsp+40h] [rbp-98h]

  return sub_14001A2D4(
           a1,
           0LL,
           0LL,
           3,
           "QueueMappingFallback",
           v2,
           v3,
           v4,
           v5,
           "Total SQ Count",
           *(unsigned __int16 *)(a1 + 330),
           "Total CQ Count",
           *(unsigned __int16 *)(a1 + 332),
           "CE 0 processor count",
           *(unsigned int *)(a1 + 308),
           "CE 1 processor count",
           *(unsigned int *)(a1 + 312),
           "CE 0 module count",
           *(unsigned int *)(a1 + 300),
           "CE 1 module count",
           *(unsigned int *)(a1 + 304),
           "Total message count",
           *(unsigned __int16 *)(a1 + 272),
           "Total processor count",
           *(unsigned __int16 *)(a1 + 234));
}
