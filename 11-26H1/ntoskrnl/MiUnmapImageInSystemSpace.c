/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x140B1B8C8
 * Callers:
 *     MiSetPagesModified @ 0x14045BE6C (MiSetPagesModified.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14048FFF8 (MiRemoveFromSystemSpace.c)
 */

void __fastcall MiUnmapImageInSystemSpace(ULONG_PTR *a1)
{
  MiRemoveFromSystemSpace(*a1);
}
