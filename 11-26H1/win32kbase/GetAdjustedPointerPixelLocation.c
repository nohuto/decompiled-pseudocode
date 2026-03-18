/*
 * XREFs of GetAdjustedPointerPixelLocation @ 0x140136310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetAdjustedPointerPixelLocation(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // r8
  __int64 v6; // rcx

  v4 = (int)a1 + (__int64)(int)a2;
  if ( v4 < (__int64)0xFFFFFFFF80000000uLL || v4 > 0x7FFFFFFF )
  {
    *a3 = -1;
    return 0LL;
  }
  v6 = SHIDWORD(a2) + (__int64)SHIDWORD(a1);
  *a3 = v4;
  if ( v6 < (__int64)0xFFFFFFFF80000000uLL || v6 > 0x7FFFFFFF )
  {
    a3[1] = -1;
    return 0LL;
  }
  a3[1] = v6;
  return 1LL;
}
