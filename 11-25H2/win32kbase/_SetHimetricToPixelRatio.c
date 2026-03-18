/*
 * XREFs of _SetHimetricToPixelRatio @ 0x14014E850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetHimetricToPixelRatio(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = 1000LL * (a2[2] - *a2) / (a1[2] - *a1);
  if ( (unsigned __int64)(v3 + 0x80000000LL) <= 0xFFFFFFFF )
    *(_DWORD *)(a3 + 184) = v3;
  result = 1000LL * (a2[3] - a2[1]) / (a1[3] - a1[1]);
  if ( (unsigned __int64)(result + 0x80000000LL) <= 0xFFFFFFFF )
    *(_DWORD *)(a3 + 188) = result;
  return result;
}
