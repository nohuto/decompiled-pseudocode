/*
 * XREFs of ?bIsDefault@SURFACE@@QEBA_NXZ @ 0x14030CCF8
 * Callers:
 *     vMirrorIncludeNotifyWrap @ 0x140198020 (vMirrorIncludeNotifyWrap.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x14019AE90 (vAccNotifyDeleteSurfaceWrap.c)
 * Callees:
 *     <none>
 */

bool __fastcall SURFACE::bIsDefault(SURFACE *this)
{
  return this == *((SURFACE **)Gre::Base::Globals(this) + 547);
}
