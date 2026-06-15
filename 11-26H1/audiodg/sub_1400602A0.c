/*
 * XREFs of sub_1400602A0 @ 0x1400602A0
 * Callers:
 *     sub_140060320 @ 0x140060320 (sub_140060320.c)
 *     sub_140060330 @ 0x140060330 (sub_140060330.c)
 *     sub_140060340 @ 0x140060340 (sub_140060340.c)
 *     sub_140060350 @ 0x140060350 (sub_140060350.c)
 *     sub_140060360 @ 0x140060360 (sub_140060360.c)
 * Callees:
 *     sub_1400178AC @ 0x1400178AC (sub_1400178AC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400602A0(__int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 56);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = sub_1400178AC((volatile signed __int32 *)(2 * v1 + 16));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      sub_1400B6010(v2);
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
  }
  return v3;
}
