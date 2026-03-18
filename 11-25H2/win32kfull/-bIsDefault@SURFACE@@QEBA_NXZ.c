/*
 * XREFs of ?bIsDefault@SURFACE@@QEBA_NXZ @ 0x1402FDBCC
 * Callers:
 *     vMirrorIncludeNotifyWrap @ 0x140164880 (vMirrorIncludeNotifyWrap.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x14016A050 (vAccNotifyDeleteSurfaceWrap.c)
 * Callees:
 *     <none>
 */

bool __fastcall SURFACE::bIsDefault(SURFACE *this)
{
  return this == *((SURFACE **)Gre::Base::Globals(this) + 533);
}
