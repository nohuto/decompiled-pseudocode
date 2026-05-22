/*
 * XREFs of ?AddRef@DWMInputTarget@@UEAAKXZ @ 0x1800608E0
 * Callers:
 *     ?AddRef@DWMInputTarget@@W7EAAKXZ @ 0x1800F7070 (-AddRef@DWMInputTarget@@W7EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WBA@EAAKXZ @ 0x1800F7080 (-AddRef@DWMInputTarget@@WBA@EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WBI@EAAKXZ @ 0x1800F7090 (-AddRef@DWMInputTarget@@WBI@EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WCA@EAAKXZ @ 0x1800F70A0 (-AddRef@DWMInputTarget@@WCA@EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WCI@EAAKXZ @ 0x1800F70B0 (-AddRef@DWMInputTarget@@WCI@EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WDA@EAAKXZ @ 0x1800F70C0 (-AddRef@DWMInputTarget@@WDA@EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WDI@EAAKXZ @ 0x1800F70D0 (-AddRef@DWMInputTarget@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::AddRef(DWMInputTarget *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 16);
}
