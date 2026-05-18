/*
 * XREFs of sub_180098508 @ 0x180098508
 * Callers:
 *     sub_1800983DC @ 0x1800983DC (sub_1800983DC.c)
 *     sub_18009A280 @ 0x18009A280 (sub_18009A280.c)
 *     sub_18009B084 @ 0x18009B084 (sub_18009B084.c)
 *     sub_1800DE94D @ 0x1800DE94D (sub_1800DE94D.c)
 * Callees:
 *     sub_180099318 @ 0x180099318 (sub_180099318.c)
 *     sub_1800D5408 @ 0x1800D5408 (sub_1800D5408.c)
 */

void **__fastcall sub_180098508(_QWORD *a1)
{
  void **result; // rax

  sub_180099318(a1 + 27);
  sub_180099318(a1 + 4);
  sub_1800D5408(a1 + 1);
  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  *a1 = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  return result;
}
