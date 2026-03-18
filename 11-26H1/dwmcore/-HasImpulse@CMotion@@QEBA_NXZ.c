/*
 * XREFs of ?HasImpulse@CMotion@@QEBA_NXZ @ 0x18013A07C
 * Callers:
 *     ?HasImpulse@CScrollAnimation@@QEBA_NXZ @ 0x1801391E8 (-HasImpulse@CScrollAnimation@@QEBA_NXZ.c)
 *     ?IsInMotion@CMotion@@QEBA_NXZ @ 0x180139FF8 (-IsInMotion@CMotion@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMotion::HasImpulse(CMotion *this)
{
  return *((float *)this + 16) != 0.0;
}
