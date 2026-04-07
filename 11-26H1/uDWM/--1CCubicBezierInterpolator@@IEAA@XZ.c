/*
 * XREFs of ??1CCubicBezierInterpolator@@IEAA@XZ @ 0x1800A97A4
 * Callers:
 *     ?Release@CCubicBezierInterpolator@@UEAAKXZ @ 0x1800A9CB0 (-Release@CCubicBezierInterpolator@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCubicBezierInterpolator::~CCubicBezierInterpolator(CCubicBezierInterpolator *this)
{
  *(_QWORD *)this = &CCubicBezierInterpolator::`vftable';
  CCubicBezierInterpolator::Cleanup(this);
}
