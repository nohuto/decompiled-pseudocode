/*
 * XREFs of ??_ECEffectBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140123310
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

DirectComposition::CEffectBrushMarshaler *__fastcall DirectComposition::CEffectBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CEffectBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CEffectBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this);
  return this;
}
