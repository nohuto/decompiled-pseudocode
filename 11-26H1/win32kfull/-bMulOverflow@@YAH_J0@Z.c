/*
 * XREFs of ?bMulOverflow@@YAH_J0@Z @ 0x1400ED09C
 * Callers:
 *     ?bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1400EBACC (-bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bMulOverflow(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 0LL;
  if ( (a2 ^ a1) >= 0 )
  {
    if ( a1 <= 0 )
      return a1 == 0x8000000000000000uLL || a2 == 0x8000000000000000uLL || (__int64)0x8000000000000001uLL / a1 < -a2;
    return (__int64)(0x7FFFFFFFFFFFFFFFuLL / a1) < a2;
  }
  else if ( a1 >= 0 )
  {
    return a2 < (__int64)0x8000000000000000uLL / a1;
  }
  else
  {
    return a1 < (__int64)0x8000000000000000uLL / a2;
  }
}
