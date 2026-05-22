/*
 * XREFs of ?Release@GameInputProcessor@@UEAAKXZ @ 0x180021CD0
 * Callers:
 *     ?Release@GameInputProcessor@@W7EAAKXZ @ 0x1801B1630 (-Release@GameInputProcessor@@W7EAAKXZ.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 */

unsigned int __fastcall GameInputProcessor::Release(GameInputProcessor *this)
{
  return InputContext::Release((GameInputProcessor *)((char *)this + 8));
}
