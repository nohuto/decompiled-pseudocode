/*
 * XREFs of ?AddRef@MPCInputRouter@@UEAAKXZ @ 0x18007AEE0
 * Callers:
 *     ?AddRef@MPCInputRouter@@W7EAAKXZ @ 0x1800FE570 (-AddRef@MPCInputRouter@@W7EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WBA@EAAKXZ @ 0x1800FE580 (-AddRef@DWMInputRouter@@WBA@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WBI@EAAKXZ @ 0x1800FE590 (-AddRef@DWMInputRouter@@WBI@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WCA@EAAKXZ @ 0x1800FE5A0 (-AddRef@DWMInputRouter@@WCA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WCHI@EAAKXZ @ 0x1800FE5B0 (-AddRef@MPCInputRouter@@WCHI@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WCI@EAAKXZ @ 0x1800FE5D0 (-AddRef@DWMInputRouter@@WCI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WCIA@EAAKXZ @ 0x1800FE5E0 (-AddRef@MPCInputRouter@@WCIA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDA@EAAKXZ @ 0x1800FE600 (-AddRef@MPCInputRouter@@WDA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDI@EAAKXZ @ 0x1800FE610 (-AddRef@MPCInputRouter@@WDI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WEA@EAAKXZ @ 0x1800FE620 (-AddRef@MPCInputRouter@@WEA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WEI@EAAKXZ @ 0x1800FE630 (-AddRef@MPCInputRouter@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputRouter::AddRef(MPCInputRouter *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 20);
}
