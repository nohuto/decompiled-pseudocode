/*
 * XREFs of sub_14007FD50 @ 0x14007FD50
 * Callers:
 *     sub_14007F160 @ 0x14007F160 (sub_14007F160.c)
 * Callees:
 *     sub_14004FC0C @ 0x14004FC0C (sub_14004FC0C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14007FD50(int a1, __int16 a2, int a3)
{
  int v4; // [rsp+48h] [rbp+20h] BYREF
  __int16 v5; // [rsp+4Ch] [rbp+24h]
  __int16 v6; // [rsp+4Eh] [rbp+26h]

  v6 = 0;
  v4 = a1;
  v5 = a2;
  if ( a3 )
    v6 |= 1u;
  if ( qword_1400E9780 )
    return sub_1400B6010(&v4);
  qword_1400E9780 = (__int64)sub_14004FC0C("RtlNotifyFeatureUsage");
  if ( qword_1400E9780 )
    return sub_1400B6010(&v4);
  else
    return 3221225785LL;
}
