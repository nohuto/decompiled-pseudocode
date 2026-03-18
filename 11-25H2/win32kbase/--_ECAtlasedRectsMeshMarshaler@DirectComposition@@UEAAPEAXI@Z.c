/*
 * XREFs of ??_ECAtlasedRectsMeshMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1402307F0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CAtlasedRectsMeshMarshaler@DirectComposition@@UEAA@XZ @ 0x140230580 (--1CAtlasedRectsMeshMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CAtlasedRectsMeshMarshaler *__fastcall DirectComposition::CAtlasedRectsMeshMarshaler::`vector deleting destructor'(
        DirectComposition::CAtlasedRectsMeshMarshaler *Buffer,
        char a2)
{
  DirectComposition::CAtlasedRectsMeshMarshaler::~CAtlasedRectsMeshMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
