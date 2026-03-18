/*
 * XREFs of ??_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140058260
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CGenericInkMarshaler@DirectComposition@@UEAA@XZ @ 0x140058298 (--1CGenericInkMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CGenericInkMarshaler *__fastcall DirectComposition::CGenericInkMarshaler::`scalar deleting destructor'(
        DirectComposition::CGenericInkMarshaler *Buffer,
        char a2)
{
  DirectComposition::CGenericInkMarshaler::~CGenericInkMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
