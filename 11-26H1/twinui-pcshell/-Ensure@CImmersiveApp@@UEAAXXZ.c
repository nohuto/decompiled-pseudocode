/*
 * XREFs of ?Ensure@CImmersiveApp@@UEAAXXZ @ 0x1802FD070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::Ensure(CImmersiveApp *this)
{
  CImmersiveApp *v1; // rcx

  v1 = (CImmersiveApp *)((char *)this - 112);
  *((_BYTE *)v1 + 588) = 1;
  CImmersiveApp::_UpdateAppStateAndSendNotifications(v1);
}
