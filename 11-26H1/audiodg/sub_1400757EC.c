/*
 * XREFs of sub_1400757EC @ 0x1400757EC
 * Callers:
 *     sub_1400A2AB0 @ 0x1400A2AB0 (sub_1400A2AB0.c)
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 */

__int64 __fastcall sub_1400757EC(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp-28h]

  v3 = a1;
  if ( a1 )
    v4 = RtlUnlockMemoryZone();
  else
    v4 = 0;
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000EE40(a1, a2, a3, 9, v3, 0, 0, 0, v6, 0, v4);
  return v4 | 0x10000000u;
}
