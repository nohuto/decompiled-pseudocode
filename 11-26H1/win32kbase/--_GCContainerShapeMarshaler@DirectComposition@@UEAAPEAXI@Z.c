/*
 * XREFs of ??_GCContainerShapeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140159420
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CContainerShapeMarshaler@DirectComposition@@UEAA@XZ @ 0x1401C5888 (--1CContainerShapeMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CContainerShapeMarshaler *__fastcall DirectComposition::CContainerShapeMarshaler::`scalar deleting destructor'(
        DirectComposition::CContainerShapeMarshaler *Buffer,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  DirectComposition::CContainerShapeMarshaler::~CContainerShapeMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer, v4, v5, v6);
  return Buffer;
}
