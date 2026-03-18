/*
 * XREFs of _SetHimetricToPixelRatio @ 0x140185ED0
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
  if ( v3 >= (__int64)0xFFFFFFFF80000000uLL && v3 <= 0x7FFFFFFF )
    *(_DWORD *)(a3 + 184) = v3;
  result = 1000LL * (a2[3] - a2[1]) / (a1[3] - a1[1]);
  if ( result >= (__int64)0xFFFFFFFF80000000uLL && result <= 0x7FFFFFFF )
    *(_DWORD *)(a3 + 188) = result;
  return result;
}
