/*
 * XREFs of ?GetWindowBand@CWindowData@@QEBA?AW4ZBID@@XZ @ 0x18001AC0C
 * Callers:
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18001AAFC (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001ABD8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x1800E3C90 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowData::GetWindowBand(__int64 a1)
{
  return *(unsigned int *)(a1 + 128);
}
