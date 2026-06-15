/*
 * XREFs of sub_1400756AC @ 0x1400756AC
 * Callers:
 *     sub_1400A2870 @ 0x1400A2870 (sub_1400A2870.c)
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 *     sub_14003E994 @ 0x14003E994 (sub_14003E994.c)
 */

__int64 __fastcall sub_1400756AC(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp-28h]

  if ( a1 )
  {
    v4 = ((__int64 (*)(void))RtlLockMemoryZone)();
    if ( v4 == -1073741663 && (int)sub_14003E994(0x100000LL) >= 0 )
      v4 = RtlLockMemoryZone(a1);
  }
  else
  {
    v4 = 0;
  }
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000EE40(a1, a2, a3, 8, a1, 0, 0, 0, v6, 0, v4);
  return v4 | 0x10000000u;
}
