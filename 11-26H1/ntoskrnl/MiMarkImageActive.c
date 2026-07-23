/*
 * XREFs of MiMarkImageActive @ 0x140B01254
 * Callers:
 *     MiRelocateImageAgain @ 0x140881870 (MiRelocateImageAgain.c)
 *     MiRelocateFinish @ 0x14099C5F4 (MiRelocateFinish.c)
 * Callees:
 *     MiWriteControlAreaFlags2 @ 0x1404AFA40 (MiWriteControlAreaFlags2.c)
 */

void __fastcall MiMarkImageActive(__int64 a1)
{
  MiWriteControlAreaFlags2(a1, 0x400000, 0x400000, 0);
}
