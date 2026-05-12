/*
 * XREFs of sub_140136240 @ 0x140136240
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401352EC @ 0x1401352EC (sub_1401352EC.c)
 *     sub_14013BDC4 @ 0x14013BDC4 (sub_14013BDC4.c)
 *     sub_14013C0F0 @ 0x14013C0F0 (sub_14013C0F0.c)
 */

__int64 __fastcall sub_140136240(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 result; // rax
  int v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = *a4;
  sub_1401352EC((char *)&v6, 4u);
  result = sub_14013BDC4(a3, &v6, 4LL);
  if ( (int)result >= 0 )
    return sub_14013C0F0(a3, 2LL, 1LL);
  return result;
}
