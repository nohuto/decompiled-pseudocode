/*
 * XREFs of ??_GCRegionGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140107720
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CRegionGeometryMarshaler@DirectComposition@@UEAA@XZ @ 0x140107758 (--1CRegionGeometryMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CRegionGeometryMarshaler *__fastcall DirectComposition::CRegionGeometryMarshaler::`scalar deleting destructor'(
        DirectComposition::CRegionGeometryMarshaler *Buffer,
        char a2)
{
  DirectComposition::CRegionGeometryMarshaler::~CRegionGeometryMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
