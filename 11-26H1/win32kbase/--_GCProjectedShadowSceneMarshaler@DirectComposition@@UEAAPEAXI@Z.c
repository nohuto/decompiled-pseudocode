/*
 * XREFs of ??_GCProjectedShadowSceneMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140192A00
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CProjectedShadowSceneMarshaler@DirectComposition@@UEAA@XZ @ 0x1401C3A2C (--1CProjectedShadowSceneMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CProjectedShadowSceneMarshaler *__fastcall DirectComposition::CProjectedShadowSceneMarshaler::`scalar deleting destructor'(
        DirectComposition::CProjectedShadowSceneMarshaler *Buffer,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  DirectComposition::CProjectedShadowSceneMarshaler::~CProjectedShadowSceneMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer, v4, v5, v6);
  return Buffer;
}
