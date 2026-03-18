/*
 * XREFs of ?CurrentInertiaVelocity@CPositionMotion@@MEBAMXZ @ 0x1801D1060
 * Callers:
 *     <none>
 * Callees:
 *     ?CurrentInertiaPanningVelocity@CPositionMotion@@AEBAMXZ @ 0x1801D10A0 (-CurrentInertiaPanningVelocity@CPositionMotion@@AEBAMXZ.c)
 */

float __fastcall CPositionMotion::CurrentInertiaVelocity(CPositionMotion *this)
{
  return CPositionMotion::CurrentInertiaPanningVelocity(this)
       + (float)((float)(*((float *)this + 29) / *((float *)this + 35))
               * (float)(*((float *)this + 34) - *((float *)this + 30)));
}
