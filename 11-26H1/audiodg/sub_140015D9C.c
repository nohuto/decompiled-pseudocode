/*
 * XREFs of sub_140015D9C @ 0x140015D9C
 * Callers:
 *     sub_140014350 @ 0x140014350 (sub_140014350.c)
 *     sub_140015070 @ 0x140015070 (sub_140015070.c)
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 *     sub_14003E994 @ 0x14003E994 (sub_14003E994.c)
 */

__int64 sub_140015D9C()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v2; // ebx
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp-28h]

  v2 = RtlLockCurrentThread();
  if ( v2 == -1073741663 && (int)sub_14003E994(0x100000LL) >= 0 )
    v2 = RtlLockCurrentThread();
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000EE40(v1, v0, v3, 12, 0, 0, 0, 0, v5, 0, v2);
  return v2 | 0x10000000u;
}
