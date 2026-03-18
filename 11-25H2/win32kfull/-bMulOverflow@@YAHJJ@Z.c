/*
 * XREFs of ?bMulOverflow@@YAHJJ@Z @ 0x14031E8F8
 * Callers:
 *     ?lSizeDDA@rotate@@YAJPEAU_PLGDDA@1@@Z @ 0x1400EA3E0 (-lSizeDDA@rotate@@YAJPEAU_PLGDDA@1@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bMulOverflow(int a1)
{
  _BOOL8 result; // rax

  result = 0;
  if ( a1 )
  {
    if ( a1 >= 0 ? (int)(0x7FFFFFFFu / a1) < 8 : a1 < -268435456 )
      return 1;
  }
  return result;
}
