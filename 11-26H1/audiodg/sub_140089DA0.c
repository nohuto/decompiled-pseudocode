/*
 * XREFs of sub_140089DA0 @ 0x140089DA0
 * Callers:
 *     sub_1400892B4 @ 0x1400892B4 (sub_1400892B4.c)
 *     sub_1400897B4 @ 0x1400897B4 (sub_1400897B4.c)
 *     sub_140089E20 @ 0x140089E20 (sub_140089E20.c)
 *     sub_140089E30 @ 0x140089E30 (sub_140089E30.c)
 *     sub_140089E40 @ 0x140089E40 (sub_140089E40.c)
 * Callees:
 *     sub_1400178AC @ 0x1400178AC (sub_1400178AC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140089DA0(__int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 80);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = sub_1400178AC((volatile signed __int32 *)(2 * v1 + 16));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      sub_1400B6010(v2 + 8);
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
  }
  return v3;
}
