/*
 * XREFs of sub_1401362A0 @ 0x1401362A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401352EC @ 0x1401352EC (sub_1401352EC.c)
 *     sub_14013BDC4 @ 0x14013BDC4 (sub_14013BDC4.c)
 *     sub_14013C0F0 @ 0x14013C0F0 (sub_14013C0F0.c)
 */

__int64 __fastcall sub_1401362A0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int v5; // edx
  __int64 result; // rax
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = *a4;
  sub_1401352EC((char *)&v7, 8u);
  result = sub_14013BDC4(a3, &v7, v5);
  if ( (int)result >= 0 )
    return sub_14013C0F0(a3, 0LL, 0LL);
  return result;
}
