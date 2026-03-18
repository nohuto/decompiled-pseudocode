/*
 * XREFs of LongLongToLong @ 0x1400FD290
 * Callers:
 *     ?bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z @ 0x1401FB550 (-bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z.c)
 *     ?GetAdjustedHimetricLong@@YAHJJJPEAJ@Z @ 0x14021B008 (-GetAdjustedHimetricLong@@YAHJJJPEAJ@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall LongLongToLong(LONGLONG llOperand, LONG *plResult)
{
  if ( (unsigned __int64)(llOperand + 0x80000000LL) <= 0xFFFFFFFF )
  {
    *plResult = llOperand;
    return 0;
  }
  else
  {
    *plResult = -1;
    return -2147024362;
  }
}
