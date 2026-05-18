/*
 * XREFs of sub_1800219C0 @ 0x1800219C0
 * Callers:
 *     sub_180021A50 @ 0x180021A50 (sub_180021A50.c)
 *     sub_180021CEC @ 0x180021CEC (sub_180021CEC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_1800217C0 @ 0x1800217C0 (sub_1800217C0.c)
 */

char __fastcall sub_1800219C0(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  char result; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  *(_QWORD *)(a1 + 136) = 17LL;
  *(_QWORD *)(a1 + 144) = 0x1300000000LL;
  v5 = v2;
  memset((void *)a1, 0, 0x81uLL);
  result = sub_1800217C0((unsigned __int8 *)&v5, 0xCuLL, a1);
  *(_WORD *)(a1 + 16) = 46;
  return result;
}
