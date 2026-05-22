/*
 * XREFs of ?Release@GameControllerRawInputProvider@@UEAAKXZ @ 0x180021A30
 * Callers:
 *     ?Release@GameControllerRawInputProvider@@W7EAAKXZ @ 0x1800CDF40 (-Release@GameControllerRawInputProvider@@W7EAAKXZ.c)
 *     ?Release@GameControllerRawInputProvider@@WBA@EAAKXZ @ 0x1800CDF50 (-Release@GameControllerRawInputProvider@@WBA@EAAKXZ.c)
 *     ?Release@GameControllerRawInputProvider@@WBI@EAAKXZ @ 0x1800CDF60 (-Release@GameControllerRawInputProvider@@WBI@EAAKXZ.c)
 *     ?Release@GameControllerRawInputProvider@@WCA@EAAKXZ @ 0x1800CDF70 (-Release@GameControllerRawInputProvider@@WCA@EAAKXZ.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 */

unsigned int __fastcall GameControllerRawInputProvider::Release(GameControllerRawInputProvider *this)
{
  return InputContext::Release((GameControllerRawInputProvider *)((char *)this + 32));
}
