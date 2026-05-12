/*
 * XREFs of sub_140139B00 @ 0x140139B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401352EC @ 0x1401352EC (sub_1401352EC.c)
 *     sub_14013BDC4 @ 0x14013BDC4 (sub_14013BDC4.c)
 *     sub_14013BE4C @ 0x14013BE4C (sub_14013BE4C.c)
 */

__int64 __fastcall sub_140139B00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  result = sub_14013BE4C(a3, *(unsigned int *)(a2 + 4));
  if ( (int)result >= 0 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    sub_1401352EC((char *)&v6, 8u);
    result = sub_14013BDC4(a3, &v6, 8LL);
    if ( (int)result >= 0 )
      return sub_14013BE4C(a3, 1LL);
  }
  return result;
}
