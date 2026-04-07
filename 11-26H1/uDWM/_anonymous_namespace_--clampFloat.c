/*
 * XREFs of _anonymous_namespace_::clampFloat @ 0x18007A238
 * Callers:
 *     ??0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z @ 0x1800BAC34 (--0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall anonymous_namespace_::clampFloat(float a1, float a2, float a3)
{
  return fminf(fmaxf(a1, a2), a3);
}
