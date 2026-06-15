/*
 * XREFs of sub_1400632D4 @ 0x1400632D4
 * Callers:
 *     sub_140071FE0 @ 0x140071FE0 (sub_140071FE0.c)
 * Callees:
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_1400634EC @ 0x1400634EC (sub_1400634EC.c)
 */

__int64 __fastcall sub_1400632D4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  _QWORD *v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]

  v4 = 0;
  v6 = *(_QWORD **)(a1 + 168);
  do
  {
    if ( !v6 )
      break;
    v7 = *sub_1400265D8(a1, &v6);
    v4 = sub_1400634EC(v7, a2, a3, a4);
  }
  while ( v4 >= 0 );
  return (unsigned int)v4;
}
