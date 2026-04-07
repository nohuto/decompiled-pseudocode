/*
 * XREFs of ?AddRef@CCubicBezierInterpolator@@UEAAKXZ @ 0x1800AB720
 * Callers:
 *     ?QueryInterface@CCubicBezierInterpolator@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ABCD0 (-QueryInterface@CCubicBezierInterpolator@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCubicBezierInterpolator::AddRef(CCubicBezierInterpolator *this)
{
  __int64 result; // rax

  result = (unsigned int)(*((_DWORD *)this + 19) + 1);
  *((_DWORD *)this + 19) = result;
  return result;
}
