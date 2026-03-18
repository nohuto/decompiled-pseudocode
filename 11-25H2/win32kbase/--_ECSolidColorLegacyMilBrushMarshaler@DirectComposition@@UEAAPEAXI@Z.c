/*
 * XREFs of ??_ECSolidColorLegacyMilBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14012EC20
 * Callers:
 *     ??_ECBaseAnimationMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x140228490 (--_ECBaseAnimationMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

DirectComposition::CSolidColorLegacyMilBrushMarshaler *__fastcall DirectComposition::CSolidColorLegacyMilBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CSolidColorLegacyMilBrushMarshaler *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this);
  return this;
}
