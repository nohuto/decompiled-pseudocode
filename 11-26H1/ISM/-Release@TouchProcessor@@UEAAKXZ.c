/*
 * XREFs of ?Release@TouchProcessor@@UEAAKXZ @ 0x180021CB0
 * Callers:
 *     ?Release@ControllerProcessor@@W7EAAKXZ @ 0x1800F3400 (-Release@ControllerProcessor@@W7EAAKXZ.c)
 *     ?Release@TapProcessor@@WBA@EAAKXZ @ 0x1800F3410 (-Release@TapProcessor@@WBA@EAAKXZ.c)
 *     ?Release@ControllerProcessor@@WEI@EAAKXZ @ 0x18017F310 (-Release@ControllerProcessor@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall TouchProcessor::Release(TouchProcessor *this)
{
  return InputContext::Release((TouchProcessor *)((char *)this + 16));
}
