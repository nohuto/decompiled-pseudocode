/*
 * XREFs of sub_1400774C8 @ 0x1400774C8
 * Callers:
 *     sub_1400763A4 @ 0x1400763A4 (sub_1400763A4.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400774C8(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &off_1400B8DE0;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1400BAE88;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_1400BD798;
  return a1;
}
