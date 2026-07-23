/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x140B1DACC
 * Callers:
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 */

void __fastcall MiUnmapImageInSystemSpace(ULONG_PTR *a1)
{
  MiRemoveFromSystemSpace(*a1);
}
