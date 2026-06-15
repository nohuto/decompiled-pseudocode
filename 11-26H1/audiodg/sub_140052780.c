/*
 * XREFs of sub_140052780 @ 0x140052780
 * Callers:
 *     sub_140051F3C @ 0x140051F3C (sub_140051F3C.c)
 * Callees:
 *     sub_140020D50 @ 0x140020D50 (sub_140020D50.c)
 *     sub_140047DA0 @ 0x140047DA0 (sub_140047DA0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140052780(__int64 a1)
{
  sub_140047DA0(a1);
  *(_QWORD *)a1 = &off_1400BBB18;
  *(_QWORD *)(a1 + 8) = off_1400BB970;
  *(_QWORD *)(a1 + 16) = off_1400BB9C8;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = &off_1400BB938;
  *(_QWORD *)(a1 + 8) = off_1400BBB90;
  *(_QWORD *)(a1 + 16) = off_1400BB9C8;
  *(_QWORD *)(a1 + 40) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 48), 0, 0);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  sub_140020D50((_QWORD *)(a1 + 104));
  *(_QWORD *)(a1 + 112) = 0LL;
  return a1;
}
