/*
 * XREFs of ??1CCubicBezierInterpolator@@IEAA@XZ @ 0x1800AB6FC
 * Callers:
 *     ?Release@CCubicBezierInterpolator@@UEAAKXZ @ 0x1800ABD40 (-Release@CCubicBezierInterpolator@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCubicBezierInterpolator::~CCubicBezierInterpolator(CCubicBezierInterpolator *this)
{
  *(_QWORD *)this = &CCubicBezierInterpolator::`vftable';
  CCubicBezierInterpolator::Cleanup(this);
}
