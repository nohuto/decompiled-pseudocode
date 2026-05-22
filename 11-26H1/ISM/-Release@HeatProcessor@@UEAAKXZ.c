/*
 * XREFs of ?Release@HeatProcessor@@UEAAKXZ @ 0x180021CC0
 * Callers:
 *     ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x1800CD190 (-Release@DWMCursorBroker@@W7EAAKXZ.c)
 *     ?Release@InputStateManager@@WBA@EAAKXZ @ 0x1800CD1A0 (-Release@InputStateManager@@WBA@EAAKXZ.c)
 *     ?Release@InputStateManager@@WBI@EAAKXZ @ 0x1800CD1B0 (-Release@InputStateManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall HeatProcessor::Release(HeatProcessor *this)
{
  return InputContext::Release((HeatProcessor *)((char *)this + 24));
}
