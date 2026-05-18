/*
 * XREFs of sub_1800984F4 @ 0x1800984F4
 * Callers:
 *     sub_1800DE869 @ 0x1800DE869 (sub_1800DE869.c)
 *     sub_1800DE8D2 @ 0x1800DE8D2 (sub_1800DE8D2.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800984F4(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  *a1 = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  return result;
}
