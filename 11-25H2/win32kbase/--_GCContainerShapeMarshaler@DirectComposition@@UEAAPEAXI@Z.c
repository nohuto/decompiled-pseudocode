/*
 * XREFs of ??_GCContainerShapeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140120530
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

DirectComposition::CContainerShapeMarshaler *__fastcall DirectComposition::CContainerShapeMarshaler::`scalar deleting destructor'(
        DirectComposition::CContainerShapeMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CContainerShapeMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this);
  return this;
}
