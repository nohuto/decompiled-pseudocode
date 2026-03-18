/*
 * XREFs of ??_GCShapeVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140143210
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CShapeVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1401C111C (--1CShapeVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CShapeVisualMarshaler *__fastcall DirectComposition::CShapeVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CShapeVisualMarshaler *Buffer,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  DirectComposition::CShapeVisualMarshaler::~CShapeVisualMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer, v4, v5, v6);
  return Buffer;
}
