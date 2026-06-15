/*
 * XREFs of sub_14003D1EC @ 0x14003D1EC
 * Callers:
 *     sub_140014350 @ 0x140014350 (sub_140014350.c)
 *     sub_140015070 @ 0x140015070 (sub_140015070.c)
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 */

__int64 sub_14003D1EC()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v2; // ebx
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp-28h]

  v2 = RtlUnlockCurrentThread();
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000EE40(v1, v0, v3, 13, 0, 0, 0, 0, v5, 0, v2);
  return v2 | 0x10000000u;
}
