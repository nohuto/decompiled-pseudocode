/*
 * XREFs of sub_18007B264 @ 0x18007B264
 * Callers:
 *     sub_18007B100 @ 0x18007B100 (sub_18007B100.c)
 *     sub_18007B9FC @ 0x18007B9FC (sub_18007B9FC.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 *     sub_18007C314 @ 0x18007C314 (sub_18007C314.c)
 *     sub_18007E4C4 @ 0x18007E4C4 (sub_18007E4C4.c)
 * Callees:
 *     sub_18007AD20 @ 0x18007AD20 (sub_18007AD20.c)
 */

__int64 __fastcall sub_18007B264(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  v5 = a1;
  v6 = a1;
  v7 = a3;
  if ( a2 )
  {
    do
      sub_18007AD20((__int64)&v5);
    while ( v3 != 1 );
    return v6;
  }
  return a1;
}
