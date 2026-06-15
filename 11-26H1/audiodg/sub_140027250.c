/*
 * XREFs of sub_140027250 @ 0x140027250
 * Callers:
 *     sub_140053D00 @ 0x140053D00 (sub_140053D00.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140027250(__int64 a1)
{
  signed __int32 v1; // r8d
  unsigned __int32 v2; // ebx

  do
    v1 = *(_DWORD *)(a1 + 20);
  while ( v1 != 0x7FFFFFFF && v1 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 20), v1 - 1, v1) );
  v2 = v1 - 1;
  if ( v1 == 1 )
  {
    if ( a1 )
      sub_1400B6010(a1);
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
  }
  return v2;
}
