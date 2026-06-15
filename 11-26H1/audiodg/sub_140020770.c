/*
 * XREFs of sub_140020770 @ 0x140020770
 * Callers:
 *     sub_14002067C @ 0x14002067C (sub_14002067C.c)
 * Callees:
 *     sub_140020D50 @ 0x140020D50 (sub_140020D50.c)
 *     sub_140047DA0 @ 0x140047DA0 (sub_140047DA0.c)
 *     sub_14005275C @ 0x14005275C (sub_14005275C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140020770(__int64 a1)
{
  sub_140047DA0();
  *(_QWORD *)a1 = off_1400BB098;
  *(_QWORD *)(a1 + 8) = off_1400BB0D0;
  *(_QWORD *)(a1 + 16) = off_1400B9570;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400B9590;
  *(_QWORD *)(a1 + 8) = off_1400B95C8;
  *(_QWORD *)(a1 + 16) = off_1400B9570;
  sub_14005275C(a1 + 56);
  *(_QWORD *)(a1 + 88) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 96), 0, 0);
  *(_BYTE *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  sub_140020D50(a1 + 176);
  *(_QWORD *)(a1 + 184) = 0LL;
  return a1;
}
