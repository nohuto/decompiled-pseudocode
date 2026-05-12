/*
 * XREFs of sub_1401398D0 @ 0x1401398D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401352EC @ 0x1401352EC (sub_1401352EC.c)
 *     sub_14013BDC4 @ 0x14013BDC4 (sub_14013BDC4.c)
 *     sub_14013C088 @ 0x14013C088 (sub_14013C088.c)
 */

__int64 __fastcall sub_1401398D0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = *a4;
  sub_1401352EC((char *)&v7, 8u);
  result = sub_14013BDC4(a3, &v7, 8LL);
  if ( (int)result >= 0 )
    return sub_14013C088(a3, 0LL, a4[1] + 4);
  return result;
}
