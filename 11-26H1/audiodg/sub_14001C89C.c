/*
 * XREFs of sub_14001C89C @ 0x14001C89C
 * Callers:
 *     sub_14001C154 @ 0x14001C154 (sub_14001C154.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001CCAC @ 0x14001CCAC (sub_14001CCAC.c)
 */

__int64 __fastcall sub_14001C89C(__int64 a1)
{
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v6; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0;
  v4 = 0x100000003LL;
  v3 = xmmword_1400C5F78;
  if ( (int)((__int64 (__fastcall *)(__int64, __int128 *, __int64, __int64, int, unsigned int *))sub_14001CCAC)(
              a1,
              &v3,
              24LL,
              a1 + 120,
              16,
              &v6) < 0 )
    return 0LL;
  if ( v6 >= 0x10 )
  {
    *(_BYTE *)(a1 + 136) = 1;
    return 0LL;
  }
  sub_14000C2A8(
    (int)retaddr,
    2099,
    (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    -2147467259);
  return 2147500037LL;
}
