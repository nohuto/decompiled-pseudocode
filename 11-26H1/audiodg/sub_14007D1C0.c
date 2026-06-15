/*
 * XREFs of sub_14007D1C0 @ 0x14007D1C0
 * Callers:
 *     sub_140077198 @ 0x140077198 (sub_140077198.c)
 *     sub_140077F60 @ 0x140077F60 (sub_140077F60.c)
 *     sub_14007D250 @ 0x14007D250 (sub_14007D250.c)
 *     sub_14007D260 @ 0x14007D260 (sub_14007D260.c)
 *     sub_14007D270 @ 0x14007D270 (sub_14007D270.c)
 *     sub_14007D7B0 @ 0x14007D7B0 (sub_14007D7B0.c)
 * Callees:
 *     sub_1400178AC @ 0x1400178AC (sub_1400178AC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14007D1C0(__int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 168);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 168), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = sub_1400178AC((volatile signed __int32 *)(2 * v1 + 16));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      sub_1400B6010(v2 + 16);
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
  }
  return v3;
}
