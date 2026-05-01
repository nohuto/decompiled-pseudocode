/*
 * XREFs of ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x1800428F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTitleUpdated@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@@Z @ 0x180042928 (-OnTitleUpdated@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@@Z.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x1800429B8 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 */

void __fastcall CImmersiveApp::OnTitleUpdated(CImmersiveApp *this, HWND a2)
{
  CImmersiveApp::CImmersiveWindowCollection::OnTitleUpdated((CImmersiveApp *)((char *)this + 176), a2);
  CImmersiveApp::_UpdateWindowTitleAndButtons((CImmersiveApp *)((char *)this - 112));
  CImmersiveApp::_QueuePresentationChangeNotification((char *)this - 112, 2LL);
}
