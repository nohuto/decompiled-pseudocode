/*
 * XREFs of ??_ECShadowMaskProducer@@EEAAPEAXI@Z @ 0x1802B2D10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CShadowMaskProducer@@EEAA@XZ @ 0x1802B2CA8 (--1CShadowMaskProducer@@EEAA@XZ.c)
 */

CShadowMaskProducer *__fastcall CShadowMaskProducer::`vector deleting destructor'(CShadowMaskProducer *this, char a2)
{
  CShadowMaskProducer::~CShadowMaskProducer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
