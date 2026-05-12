/*
 * XREFs of sub_140068984 @ 0x140068984
 * Callers:
 *     sub_140056688 @ 0x140056688 (sub_140056688.c)
 *     sub_1400566DC @ 0x1400566DC (sub_1400566DC.c)
 *     sub_140056730 @ 0x140056730 (sub_140056730.c)
 *     sub_140056784 @ 0x140056784 (sub_140056784.c)
 *     sub_1400567D8 @ 0x1400567D8 (sub_1400567D8.c)
 *     sub_1400697B0 @ 0x1400697B0 (sub_1400697B0.c)
 *     sub_14009031C @ 0x14009031C (sub_14009031C.c)
 *     sub_140090370 @ 0x140090370 (sub_140090370.c)
 *     sub_1400903C4 @ 0x1400903C4 (sub_1400903C4.c)
 *     sub_1400A53B8 @ 0x1400A53B8 (sub_1400A53B8.c)
 *     sub_1400A540C @ 0x1400A540C (sub_1400A540C.c)
 *     sub_1400A5460 @ 0x1400A5460 (sub_1400A5460.c)
 *     sub_1400A54B4 @ 0x1400A54B4 (sub_1400A54B4.c)
 *     sub_1400A5508 @ 0x1400A5508 (sub_1400A5508.c)
 *     sub_1400A555C @ 0x1400A555C (sub_1400A555C.c)
 *     sub_1400A55B0 @ 0x1400A55B0 (sub_1400A55B0.c)
 *     sub_1400A5604 @ 0x1400A5604 (sub_1400A5604.c)
 *     sub_1400AA160 @ 0x1400AA160 (sub_1400AA160.c)
 *     sub_1400C93D8 @ 0x1400C93D8 (sub_1400C93D8.c)
 *     sub_1400DB228 @ 0x1400DB228 (sub_1400DB228.c)
 *     sub_1400F76C0 @ 0x1400F76C0 (sub_1400F76C0.c)
 * Callees:
 *     sub_140068544 @ 0x140068544 (sub_140068544.c)
 *     sub_1400686B8 @ 0x1400686B8 (sub_1400686B8.c)
 *     sub_1400687C8 @ 0x1400687C8 (sub_1400687C8.c)
 */

__int64 __fastcall sub_140068984(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = sub_1400686B8(*a3, a1, (__int64)a3);
    v5 = v6;
  }
  if ( a2 )
  {
    sub_140068544((__int64)a3, v6, a2);
    if ( a2 - 3 <= 1 )
      sub_1400687C8(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
