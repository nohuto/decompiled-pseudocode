/*
 * XREFs of GetAdjustedPointerPixelLocation @ 0x1400F1460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetAdjustedPointerPixelLocation(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r9
  __int64 v5; // r9

  v3 = (int)a1 + (__int64)(int)a2;
  if ( (unsigned __int64)(v3 + 0x80000000LL) > 0xFFFFFFFF )
  {
    *a3 = -1;
    return 0LL;
  }
  *a3 = v3;
  v5 = SHIDWORD(a2) + (__int64)SHIDWORD(a1);
  if ( (unsigned __int64)(v5 + 0x80000000LL) > 0xFFFFFFFF )
  {
    a3[1] = -1;
    return 0LL;
  }
  a3[1] = v5;
  return 1LL;
}
