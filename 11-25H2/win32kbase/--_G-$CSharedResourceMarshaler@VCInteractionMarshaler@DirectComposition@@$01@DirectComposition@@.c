/*
 * XREFs of ??_G?$CSharedResourceMarshaler@VCInteractionMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x140069810
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x140068944 (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CInteractionMarshaler *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CInteractionMarshaler,2>::`scalar deleting destructor'(
        DirectComposition::CInteractionMarshaler *Buffer,
        char a2)
{
  *(_QWORD *)Buffer = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CInteractionMarshaler,2>::`vftable';
  DirectComposition::CInteractionMarshaler::~CInteractionMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
