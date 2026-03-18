/*
 * XREFs of ??_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140068BF0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x140068944 (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CInteractionMarshaler *__fastcall DirectComposition::CInteractionMarshaler::`vector deleting destructor'(
        DirectComposition::CInteractionMarshaler *Buffer,
        char a2)
{
  DirectComposition::CInteractionMarshaler::~CInteractionMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
