/*
 * XREFs of ??_ECEffectBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14015E140
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CEffectBrushMarshaler@DirectComposition@@UEAA@XZ @ 0x14015E178 (--1CEffectBrushMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CEffectBrushMarshaler *__fastcall DirectComposition::CEffectBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CEffectBrushMarshaler *Buffer,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  DirectComposition::CEffectBrushMarshaler::~CEffectBrushMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer, v4, v5, v6);
  return Buffer;
}
