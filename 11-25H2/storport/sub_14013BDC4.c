/*
 * XREFs of sub_14013BDC4 @ 0x14013BDC4
 * Callers:
 *     sub_140136240 @ 0x140136240 (sub_140136240.c)
 *     sub_1401362A0 @ 0x1401362A0 (sub_1401362A0.c)
 *     sub_1401377C0 @ 0x1401377C0 (sub_1401377C0.c)
 *     sub_1401385C0 @ 0x1401385C0 (sub_1401385C0.c)
 *     sub_1401398D0 @ 0x1401398D0 (sub_1401398D0.c)
 *     sub_140139940 @ 0x140139940 (sub_140139940.c)
 *     sub_140139B00 @ 0x140139B00 (sub_140139B00.c)
 *     sub_14013BC70 @ 0x14013BC70 (sub_14013BC70.c)
 *     sub_14013BDC4 @ 0x14013BDC4 (sub_14013BDC4.c)
 *     sub_14013C088 @ 0x14013C088 (sub_14013C088.c)
 * Callees:
 *     sub_14013BDC4 @ 0x14013BDC4 (sub_14013BDC4.c)
 *     sub_14013BECC @ 0x14013BECC (sub_14013BECC.c)
 *     sub_14013BF9C @ 0x14013BF9C (sub_14013BF9C.c)
 *     sub_14013C1C8 @ 0x14013C1C8 (sub_14013C1C8.c)
 */

__int64 __fastcall sub_14013BDC4(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a3 <= 0xF )
    return sub_14013C1C8();
  if ( a3 <= 0x7FF )
    return sub_14013BF9C();
  if ( a3 <= 0xFFFFFF )
    return sub_14013BECC(a1, a2, a3, 0LL);
  LOBYTE(a4) = 1;
  result = sub_14013BECC(a1, a2, 0xFFFFFFLL, a4);
  if ( (int)result >= 0 )
    return sub_14013BDC4(a1, a2 + 0xFFFFFF, a3 - 0xFFFFFF);
  return result;
}
