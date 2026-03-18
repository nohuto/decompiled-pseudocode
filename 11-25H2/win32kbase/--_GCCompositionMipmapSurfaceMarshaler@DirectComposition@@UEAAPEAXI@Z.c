/*
 * XREFs of ??_GCCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140228560
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAA@XZ @ 0x14023C494 (--1CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CCompositionMipmapSurfaceMarshaler *__fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::`scalar deleting destructor'(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *Buffer,
        char a2)
{
  DirectComposition::CCompositionMipmapSurfaceMarshaler::~CCompositionMipmapSurfaceMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
