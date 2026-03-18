/*
 * XREFs of ??_GCLayerVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1400EE9D0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1400EEB10 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CVisualMarshaler *__fastcall DirectComposition::CLayerVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CVisualMarshaler *Buffer,
        char a2)
{
  *(_QWORD *)Buffer = &DirectComposition::CLayerVisualMarshaler::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
