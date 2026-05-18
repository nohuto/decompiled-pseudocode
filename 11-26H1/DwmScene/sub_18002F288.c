/*
 * XREFs of sub_18002F288 @ 0x18002F288
 * Callers:
 *     sub_1800305DC @ 0x1800305DC (sub_1800305DC.c)
 * Callees:
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 */

_QWORD *__fastcall sub_18002F288(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  sub_180012B20(&v7);
  v4 = v7;
  *a1 = v7;
  if ( *a2 > 0 )
  {
    v5 = 1000000000 * *a2;
    if ( v4 >= 0x7FFFFFFFFFFFFFFFLL - v5 )
      *a1 = 0x7FFFFFFFFFFFFFFFLL;
    else
      *a1 = v4 + v5;
  }
  return a1;
}
