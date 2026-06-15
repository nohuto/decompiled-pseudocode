/*
 * XREFs of sub_140078A54 @ 0x140078A54
 * Callers:
 *     sub_14007F3A0 @ 0x14007F3A0 (sub_14007F3A0.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_14001A7C0 @ 0x14001A7C0 (sub_14001A7C0.c)
 *     sub_140076414 @ 0x140076414 (sub_140076414.c)
 */

__int64 __fastcall sub_140078A54(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v7; // ebx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v8 = 0LL;
  sub_1400125D4(&v8);
  v7 = sub_140076414(a2, &v8);
  if ( v7 >= 0 )
  {
    if ( v8 )
      v7 = sub_14001A7C0(a1, v8, *(_QWORD *)(*(_QWORD *)a2 + 24LL), a3);
    else
      v7 = -2147024809;
  }
  sub_1400125D4(&v8);
  return (unsigned int)v7;
}
