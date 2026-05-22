/*
 * XREFs of ?Release@MPCFocusTarget@@UEAAKXZ @ 0x180021310
 * Callers:
 *     ?Release@ComboButtonProcessor@@W7EAAKXZ @ 0x1800A21D0 (-Release@ComboButtonProcessor@@W7EAAKXZ.c)
 *     ?Release@MPCFocusTarget@@WFA@EAAKXZ @ 0x1801013D0 (-Release@MPCFocusTarget@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall MPCFocusTarget::Release(MPCFocusTarget *this)
{
  return InputContext::Release((MPCFocusTarget *)((char *)this + 8));
}
