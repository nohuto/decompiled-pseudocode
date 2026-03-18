/*
 * XREFs of ??_ECShadowMaskCachingBlurProducer@@EEAAPEAXI@Z @ 0x1802B2CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CShadowMaskCachingBlurProducer@@EEAA@XZ @ 0x1802B2C80 (--1CShadowMaskCachingBlurProducer@@EEAA@XZ.c)
 */

volatile signed __int32 **__fastcall CShadowMaskCachingBlurProducer::`vector deleting destructor'(
        volatile signed __int32 **this,
        char a2)
{
  CShadowMaskCachingBlurProducer::~CShadowMaskCachingBlurProducer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
