/*
 * XREFs of sub_1400528E0 @ 0x1400528E0
 * Callers:
 *     sub_140052008 @ 0x140052008 (sub_140052008.c)
 * Callees:
 *     sub_140020D50 @ 0x140020D50 (sub_140020D50.c)
 *     sub_140047DA0 @ 0x140047DA0 (sub_140047DA0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400528E0(__int64 a1)
{
  sub_140047DA0(a1);
  *(_QWORD *)a1 = &off_1400BB990;
  *(_QWORD *)(a1 + 8) = off_1400BBAA0;
  *(_QWORD *)(a1 + 16) = off_1400BB918;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = &off_1400BB8E0;
  *(_QWORD *)(a1 + 8) = off_1400BB898;
  *(_QWORD *)(a1 + 16) = off_1400BB918;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 72), 0, 0);
  *(_BYTE *)(a1 + 112) = 0;
  sub_140020D50((_QWORD *)(a1 + 120));
  *(_QWORD *)(a1 + 128) = 0LL;
  return a1;
}
