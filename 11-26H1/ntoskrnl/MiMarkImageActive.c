/*
 * XREFs of MiMarkImageActive @ 0x140AFF5C4
 * Callers:
 *     MiRelocateImageAgain @ 0x14087B470 (MiRelocateImageAgain.c)
 *     MiRelocateFinish @ 0x1409CB614 (MiRelocateFinish.c)
 * Callees:
 *     MiWriteControlAreaFlags2 @ 0x1404B65F0 (MiWriteControlAreaFlags2.c)
 */

void __fastcall MiMarkImageActive(__int64 a1)
{
  MiWriteControlAreaFlags2(a1, 0x400000, 0x400000, 0);
}
