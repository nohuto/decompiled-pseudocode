/*
 * XREFs of sub_14005440C @ 0x14005440C
 * Callers:
 *     sub_14000CE18 @ 0x14000CE18 (sub_14000CE18.c)
 * Callees:
 *     sub_140012A84 @ 0x140012A84 (sub_140012A84.c)
 *     sub_140012ABC @ 0x140012ABC (sub_140012ABC.c)
 *     sub_14001E1F0 @ 0x14001E1F0 (sub_14001E1F0.c)
 *     sub_140029830 @ 0x140029830 (sub_140029830.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14005440C(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  KIRQL v4; // bl
  int v5; // esi
  char v6; // cl
  char v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 376;
  strcpy(v7, "wakeup=1");
  result = sub_140012ABC((char **)(a1 + 376), v7);
  if ( (int)result >= 0 )
  {
    *(_BYTE *)(a1 + 104) |= 0x10u;
    v4 = sub_14001E1F0(a1);
    v5 = sub_140012A84(v1);
    sub_140029830(a1, v4);
    v6 = *(_BYTE *)(a1 + 104) & 0xEF;
    *(_BYTE *)(a1 + 104) = v6;
    if ( v5 >= 0 )
      *(_BYTE *)(a1 + 104) = v6 | 1;
    return (unsigned int)v5;
  }
  return result;
}
