/*
 * XREFs of ?Release@MPCInputRouter@@UEAAKXZ @ 0x180021300
 * Callers:
 *     ?Release@DWMInputRouter@@W7EAAKXZ @ 0x180100230 (-Release@DWMInputRouter@@W7EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBA@EAAKXZ @ 0x180100240 (-Release@DWMInputRouter@@WBA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBI@EAAKXZ @ 0x180100250 (-Release@DWMInputRouter@@WBI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCA@EAAKXZ @ 0x180100260 (-Release@DWMInputRouter@@WCA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WCHI@EAAKXZ @ 0x180100270 (-Release@MPCInputRouter@@WCHI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCI@EAAKXZ @ 0x180100290 (-Release@DWMInputRouter@@WCI@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WCIA@EAAKXZ @ 0x1801002A0 (-Release@MPCInputRouter@@WCIA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDA@EAAKXZ @ 0x1801002C0 (-Release@DWMInputRouter@@WDA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDI@EAAKXZ @ 0x1801002D0 (-Release@DWMInputRouter@@WDI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WEA@EAAKXZ @ 0x1801002E0 (-Release@DWMInputRouter@@WEA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WEI@EAAKXZ @ 0x1801002F0 (-Release@DWMInputRouter@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall MPCInputRouter::Release(MPCInputRouter *this)
{
  return InputContext::Release((MPCInputRouter *)((char *)this + 72));
}
