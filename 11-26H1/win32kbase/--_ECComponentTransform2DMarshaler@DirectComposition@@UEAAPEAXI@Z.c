/*
 * XREFs of ??_ECComponentTransform2DMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1401484E0
 * Callers:
 *     ??_ECBaseAnimationMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x14022A860 (--_ECBaseAnimationMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

DirectComposition::CComponentTransform2DMarshaler *__fastcall DirectComposition::CComponentTransform2DMarshaler::`vector deleting destructor'(
        DirectComposition::CComponentTransform2DMarshaler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this, a2, a3, a4);
  return this;
}
