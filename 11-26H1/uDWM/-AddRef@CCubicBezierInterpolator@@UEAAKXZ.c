/*
 * XREFs of ?AddRef@CCubicBezierInterpolator@@UEAAKXZ @ 0x1800A97C0
 * Callers:
 *     ?QueryInterface@CCubicBezierInterpolator@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A9C40 (-QueryInterface@CCubicBezierInterpolator@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCubicBezierInterpolator::AddRef(CCubicBezierInterpolator *this)
{
  return (unsigned int)++*((_DWORD *)this + 19);
}
