/*
 * XREFs of sub_140065DE0 @ 0x140065DE0
 * Callers:
 *     sub_140065E60 @ 0x140065E60 (sub_140065E60.c)
 *     sub_140065E70 @ 0x140065E70 (sub_140065E70.c)
 *     sub_140065E80 @ 0x140065E80 (sub_140065E80.c)
 *     sub_140065E90 @ 0x140065E90 (sub_140065E90.c)
 *     sub_140065EA0 @ 0x140065EA0 (sub_140065EA0.c)
 *     sub_140065EB0 @ 0x140065EB0 (sub_140065EB0.c)
 *     sub_140065EC0 @ 0x140065EC0 (sub_140065EC0.c)
 * Callees:
 *     sub_1400178AC @ 0x1400178AC (sub_1400178AC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140065DE0(__int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 72);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), v1 - 1, v1);
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
