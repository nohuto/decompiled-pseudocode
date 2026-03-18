/*
 * XREFs of ?bSubOverflow@@YAH_J0@Z @ 0x1400ED174
 * Callers:
 *     ?bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1400EBACC (-bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall bSubOverflow(__int64 a1, __int64 a2)
{
  if ( (a2 ^ a1) >= 0 )
    return 0;
  if ( a1 < 0 )
    return a1 < (__int64)(a2 + 0x8000000000000000uLL);
  return a1 > a2 + 0x7FFFFFFFFFFFFFFFLL;
}
