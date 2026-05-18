/*
 * XREFs of sub_180033F34 @ 0x180033F34
 * Callers:
 *     sub_180032FE0 @ 0x180032FE0 (sub_180032FE0.c)
 *     sub_18005D6DC @ 0x18005D6DC (sub_18005D6DC.c)
 *     sub_180083D38 @ 0x180083D38 (sub_180083D38.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180029B0C @ 0x180029B0C (sub_180029B0C.c)
 *     sub_180029DD4 @ 0x180029DD4 (sub_180029DD4.c)
 */

_QWORD *__fastcall sub_180033F34(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *i; // rdx
  _BYTE v8[32]; // [rsp+28h] [rbp-20h] BYREF

  sub_180029DD4(a1 + 112, (__int64)v8);
  for ( i = *(_QWORD **)(a1 + 88); i != *(_QWORD **)(a1 + 96); i += 2 )
  {
    if ( *(_DWORD *)(*i + 244LL) == a3 )
    {
      sub_180012C40(a2, i);
      goto LABEL_7;
    }
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_7:
  sub_180029B0C((__int64)v8);
  return a2;
}
