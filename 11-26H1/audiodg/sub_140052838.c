/*
 * XREFs of sub_140052838 @ 0x140052838
 * Callers:
 *     sub_140051EB0 @ 0x140051EB0 (sub_140051EB0.c)
 * Callees:
 *     sub_140020D50 @ 0x140020D50 (sub_140020D50.c)
 *     sub_140047DA0 @ 0x140047DA0 (sub_140047DA0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140052838(__int64 a1)
{
  sub_140047DA0(a1);
  *(_QWORD *)a1 = &off_1400BBAC0;
  *(_QWORD *)(a1 + 8) = off_1400BBA80;
  *(_QWORD *)(a1 + 16) = off_1400BBAF8;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = &off_1400BBA48;
  *(_QWORD *)(a1 + 8) = off_1400BBB50;
  *(_QWORD *)(a1 + 16) = off_1400BBAF8;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 40), 0, 0);
  *(_QWORD *)(a1 + 80) = 0LL;
  sub_140020D50((_QWORD *)(a1 + 88));
  *(_QWORD *)(a1 + 96) = 0LL;
  return a1;
}
