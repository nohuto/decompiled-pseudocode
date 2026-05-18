/*
 * XREFs of sub_180099D84 @ 0x180099D84
 * Callers:
 *     sub_180099C64 @ 0x180099C64 (sub_180099C64.c)
 * Callees:
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_180099290 @ 0x180099290 (sub_180099290.c)
 *     sub_180099374 @ 0x180099374 (sub_180099374.c)
 *     sub_1800D5364 @ 0x1800D5364 (sub_1800D5364.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180099D84(__int64 a1, __int64 a2)
{
  __int64 v4; // r14

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  v4 = a1 + 8;
  sub_1800D5364(a1 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  sub_180099290(a1 + 32);
  sub_180099290(a1 + 216);
  sub_180029674(v4);
  sub_180029674(a2 + 8);
  sub_180099374(a1 + 32, (__int64 *)(a2 + 32));
  sub_180099374(a1 + 216, (__int64 *)(a2 + 216));
  sub_1800297F4(a2 + 8);
  sub_1800297F4(v4);
  return a1;
}
