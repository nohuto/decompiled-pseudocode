/*
 * XREFs of sub_140039E2C @ 0x140039E2C
 * Callers:
 *     sub_140016310 @ 0x140016310 (sub_140016310.c)
 *     sub_140039DC0 @ 0x140039DC0 (sub_140039DC0.c)
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 */

__int64 __fastcall sub_140039E2C(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp-28h]

  v3 = a1;
  if ( a1 )
    v4 = RtlUnlockMemoryBlockLookaside();
  else
    v4 = 0;
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000EE40(a1, a2, a3, 9, v3, 0, 0, 0, v6, 0, v4);
  return v4 | 0x10000000u;
}
