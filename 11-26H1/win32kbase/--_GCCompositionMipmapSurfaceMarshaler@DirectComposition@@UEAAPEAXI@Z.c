/*
 * XREFs of ??_GCCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022A8F0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAA@XZ @ 0x140246CF0 (--1CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CCompositionMipmapSurfaceMarshaler *__fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::`scalar deleting destructor'(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *Buffer,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  DirectComposition::CCompositionMipmapSurfaceMarshaler::~CCompositionMipmapSurfaceMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer, v4, v5, v6);
  return Buffer;
}
