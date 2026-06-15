/*
 * XREFs of sub_14001C260 @ 0x14001C260
 * Callers:
 *     sub_14001B288 @ 0x14001B288 (sub_14001B288.c)
 *     sub_14001C880 @ 0x14001C880 (sub_14001C880.c)
 *     sub_140047484 @ 0x140047484 (sub_140047484.c)
 *     sub_14007D3B0 @ 0x14007D3B0 (sub_14007D3B0.c)
 *     sub_14007D3C0 @ 0x14007D3C0 (sub_14007D3C0.c)
 * Callees:
 *     sub_1400178AC @ 0x1400178AC (sub_1400178AC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14001C260(__int64 a1)
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
      goto LABEL_5;
  }
  v3 = sub_1400178AC((volatile signed __int32 *)(2 * v1 + 16));
LABEL_5:
  if ( !v3 )
  {
    if ( v2 )
      sub_1400B6010(v2);
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
  }
  return v3;
}
