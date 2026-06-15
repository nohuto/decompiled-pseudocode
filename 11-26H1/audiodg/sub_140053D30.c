/*
 * XREFs of sub_140053D30 @ 0x140053D30
 * Callers:
 *     sub_140053DB0 @ 0x140053DB0 (sub_140053DB0.c)
 *     sub_140053DC0 @ 0x140053DC0 (sub_140053DC0.c)
 *     sub_140086DE8 @ 0x140086DE8 (sub_140086DE8.c)
 *     sub_140087320 @ 0x140087320 (sub_140087320.c)
 *     sub_140087370 @ 0x140087370 (sub_140087370.c)
 *     sub_140088D3C @ 0x140088D3C (sub_140088D3C.c)
 * Callees:
 *     sub_1400178AC @ 0x1400178AC (sub_1400178AC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140053D30(__int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 32);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v1 - 1, v1);
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
