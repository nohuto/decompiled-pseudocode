/*
 * XREFs of sub_180055168 @ 0x180055168
 * Callers:
 *     sub_180054AF0 @ 0x180054AF0 (sub_180054AF0.c)
 * Callees:
 *     sub_180031F14 @ 0x180031F14 (sub_180031F14.c)
 *     sub_180031FB4 @ 0x180031FB4 (sub_180031FB4.c)
 *     sub_18005485C @ 0x18005485C (sub_18005485C.c)
 */

__int64 __fastcall sub_180055168(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall *v5)(); // [rsp+48h] [rbp+10h] BYREF

  v4 = a1;
  *(_BYTE *)(a1 + 426) = 0;
  *(_BYTE *)(a1 + 425) = 1;
  v5 = sub_180055960;
  sub_18005485C((__int64)&v3, &v5, &v4);
  sub_180031FB4(a1 + 104, &v3);
  return sub_180031F14((__int64)&v3);
}
