/*
 * XREFs of ?IsConstructed@VIDPN_MGR@@UEBAEXZ @ 0x140096680
 * Callers:
 *     ?IsConstructed@VIDPN_MGR@@WEI@EBAEXZ @ 0x140096690 (-IsConstructed@VIDPN_MGR@@WEI@EBAEXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDPN_MGR::IsConstructed(VIDPN_MGR *this)
{
  return *((_DWORD *)this + 22) == 2;
}
