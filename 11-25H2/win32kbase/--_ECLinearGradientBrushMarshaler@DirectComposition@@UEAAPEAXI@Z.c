/*
 * XREFs of ??_ECLinearGradientBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140123340
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

DirectComposition::CLinearGradientBrushMarshaler *__fastcall DirectComposition::CLinearGradientBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CLinearGradientBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CLinearGradientBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this);
  return this;
}
