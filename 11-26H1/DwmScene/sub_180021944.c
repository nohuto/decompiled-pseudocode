/*
 * XREFs of sub_180021944 @ 0x180021944
 * Callers:
 *     sub_180021D60 @ 0x180021D60 (sub_180021D60.c)
 *     sub_180024190 @ 0x180024190 (sub_180024190.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_1800217C0 @ 0x1800217C0 (sub_1800217C0.c)
 */

char __fastcall sub_180021944(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  char result; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  *(_QWORD *)(a1 + 136) = 23LL;
  *(_QWORD *)(a1 + 144) = 0x1900000000LL;
  v5 = v2;
  memset((void *)a1, 0, 0x81uLL);
  result = sub_1800217C0((unsigned __int8 *)&v5, 0x10uLL, a1);
  *(_WORD *)(a1 + 22) = 46;
  return result;
}
