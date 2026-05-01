/*
 * XREFs of ?Unensure@CImmersiveApp@@UEAAXXZ @ 0x180300AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::Unensure(CImmersiveApp *this)
{
  CImmersiveApp *v1; // rcx

  v1 = (CImmersiveApp *)((char *)this - 112);
  *((_BYTE *)v1 + 588) = 0;
  CImmersiveApp::_UpdateAppStateAndSendNotifications(v1);
}
