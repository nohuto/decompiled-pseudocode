/*
 * XREFs of ?Release@CSnapAssistController@@UEAAKXZ @ 0x180235C80
 * Callers:
 *     ?Release@CSnapAssistController@@W7EAAKXZ @ 0x180583870 (-Release@CSnapAssistController@@W7EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WBA@EAAKXZ @ 0x180583880 (-Release@CSnapAssistController@@WBA@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WBEI@EAAKXZ @ 0x180583890 (-Release@CSnapAssistController@@WBEI@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WBI@EAAKXZ @ 0x1805838B0 (-Release@CSnapAssistController@@WBI@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WCA@EAAKXZ @ 0x1805838C0 (-Release@CSnapAssistController@@WCA@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WCI@EAAKXZ @ 0x1805838D0 (-Release@CSnapAssistController@@WCI@EAAKXZ.c)
 *     ?Release@CSnapAssistController@@WDA@EAAKXZ @ 0x1805838E0 (-Release@CSnapAssistController@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CSnapAssistController::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CSnapAssistControllerBase>::Release(this);
}
