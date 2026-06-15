/*
 * XREFs of sub_14002A37C @ 0x14002A37C
 * Callers:
 *     sub_14002A2D4 @ 0x14002A2D4 (sub_14002A2D4.c)
 * Callees:
 *     sub_140020D50 @ 0x140020D50 (sub_140020D50.c)
 *     sub_1400250E0 @ 0x1400250E0 (sub_1400250E0.c)
 *     sub_14002A54C @ 0x14002A54C (sub_14002A54C.c)
 *     sub_14002A670 @ 0x14002A670 (sub_14002A670.c)
 *     sub_1400444FC @ 0x1400444FC (sub_1400444FC.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_140047F4C @ 0x140047F4C (sub_140047F4C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall sub_14002A37C(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  sub_1400250E0(a1);
  *(_QWORD *)a1 = off_1400B9DD0;
  *(_QWORD *)(a1 + 8) = off_1400B9D90;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400B9E58;
  *(_QWORD *)(a1 + 8) = off_1400B9E18;
  *(_QWORD *)(a1 + 24) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 32), 0, 0);
  *(_BYTE *)(a1 + 72) = 0;
  v4 = a1 + 80;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v2 = (_QWORD *)sub_140044584(56LL);
  *v2 = v2;
  v2[1] = v2;
  *(_QWORD *)(a1 + 88) = v2;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 7LL;
  *(_QWORD *)(a1 + 136) = 8LL;
  *(_DWORD *)(a1 + 80) = 1065353216;
  sub_14002A54C(a1 + 104, 16LL, *(_QWORD *)(a1 + 88));
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 144), 0, 0);
  sub_140047F4C(a1 + 184);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 248), 0, 0);
  sub_140020D50((_QWORD *)(a1 + 288));
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 312), 0, 0);
  LODWORD(v4) = 0;
  sub_14002A670(a1 + 352, &v4);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 416), 0, 0);
  LODWORD(v4) = 0;
  sub_1400444FC(a1 + 456, &v4);
  return a1;
}
