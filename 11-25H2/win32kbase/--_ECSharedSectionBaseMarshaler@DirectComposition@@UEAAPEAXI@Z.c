/*
 * XREFs of ??_ECSharedSectionBaseMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140124C10
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ @ 0x140124C48 (--1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CSharedSectionBaseMarshaler *__fastcall DirectComposition::CSharedSectionBaseMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedSectionBaseMarshaler *Buffer,
        char a2)
{
  DirectComposition::CSharedSectionBaseMarshaler::~CSharedSectionBaseMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
