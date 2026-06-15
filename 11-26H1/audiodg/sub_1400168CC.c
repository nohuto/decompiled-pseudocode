/*
 * XREFs of sub_1400168CC @ 0x1400168CC
 * Callers:
 *     sub_140015F50 @ 0x140015F50 (sub_140015F50.c)
 *     sub_140016BCC @ 0x140016BCC (sub_140016BCC.c)
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 *     sub_14003E994 @ 0x14003E994 (sub_14003E994.c)
 */

__int64 __fastcall sub_1400168CC(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  char v4; // di
  int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp-28h]

  v3 = 0LL;
  v4 = a1;
  if ( a1 )
  {
    do
    {
      v5 = RtlLockMemoryBlockLookaside();
      if ( v5 != -1073741663 )
        break;
      if ( v3 > 0x6400000 )
        break;
      v3 += 0x100000LL;
    }
    while ( (int)sub_14003E994(v3) >= 0 );
  }
  else
  {
    v5 = 0;
  }
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000EE40(a1, a2, a3, 8, v4, 0, 0, 0, v7, 0, v5);
  return v5 | 0x10000000u;
}
