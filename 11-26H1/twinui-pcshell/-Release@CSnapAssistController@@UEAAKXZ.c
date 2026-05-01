/*
 * XREFs of ?Release@CSnapAssistController@@UEAAKXZ @ 0x1801EE0C0
 * Callers:
 *     ?Release@CSnapAssistController@@W7EAAKXZ @ 0x1805A76B0 (-Release@CSnapAssistController@@W7EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WBA@EAAKXZ @ 0x1805A76C0 (-Release@CSnapAssistController@@WBA@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WBEI@EAAKXZ @ 0x1805A76D0 (-Release@CSnapAssistController@@WBEI@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WBI@EAAKXZ @ 0x1805A76F0 (-Release@CSnapAssistController@@WBI@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WCA@EAAKXZ @ 0x1805A7700 (-Release@CSnapAssistController@@WCA@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WCI@EAAKXZ @ 0x1805A7710 (-Release@CSnapAssistController@@WCI@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WDA@EAAKXZ @ 0x1805A7720 (-Release@CSnapAssistController@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CSnapAssistController::Release(CSnapAssistController *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CSnapAssistControllerBase>::Release(this);
}
