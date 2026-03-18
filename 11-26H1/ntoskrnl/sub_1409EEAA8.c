/*
 * XREFs of sub_1409EEAA8 @ 0x1409EEAA8
 * Callers:
 *     sub_1409ED3B8 @ 0x1409ED3B8 (sub_1409ED3B8.c)
 * Callees:
 *     sub_1409ED1D0 @ 0x1409ED1D0 (sub_1409ED1D0.c)
 *     sub_1409EEB04 @ 0x1409EEB04 (sub_1409EEB04.c)
 */

__int64 __fastcall sub_1409EEAA8(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a2 + 48);
  v6 = 0LL;
  v4 = sub_1409EEB04((int)a1 + 8, v2, 8, -1, (__int64)&v6);
  if ( v4 >= 0 )
    sub_1409ED1D0(a1, v6);
  return (unsigned int)v4;
}
