/*
 * XREFs of ?Release@CShellSnapComponent@@UEAAKXZ @ 0x1801917D0
 * Callers:
 *     ?Release@CShellSnapComponent@@W7EAAKXZ @ 0x1805A13D0 (-Release@CShellSnapComponent@@W7EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WDA@EAAKXZ @ 0x1805A13E0 (-Release@CShellSnapComponent@@WDA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WDI@EAAKXZ @ 0x1805A13F0 (-Release@CShellSnapComponent@@WDI@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WHA@EAAKXZ @ 0x1805A1400 (-Release@CShellSnapComponent@@WHA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WHI@EAAKXZ @ 0x1805A1410 (-Release@CShellSnapComponent@@WHI@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WIA@EAAKXZ @ 0x1805A1420 (-Release@CShellSnapComponent@@WIA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WII@EAAKXZ @ 0x1805A1440 (-Release@CShellSnapComponent@@WII@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WJA@EAAKXZ @ 0x1805A1460 (-Release@CShellSnapComponent@@WJA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WJI@EAAKXZ @ 0x1805A1480 (-Release@CShellSnapComponent@@WJI@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WKA@EAAKXZ @ 0x1805A14A0 (-Release@CShellSnapComponent@@WKA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WKI@EAAKXZ @ 0x1805A14C0 (-Release@CShellSnapComponent@@WKI@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WLA@EAAKXZ @ 0x1805A14E0 (-Release@CShellSnapComponent@@WLA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WLI@EAAKXZ @ 0x1805A1500 (-Release@CShellSnapComponent@@WLI@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WMA@EAAKXZ @ 0x1805A1520 (-Release@CShellSnapComponent@@WMA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CShellSnapComponent::Release(CShellSnapComponent *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::Release(this);
}
