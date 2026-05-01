/*
 * XREFs of ?Release@CShellSnapComponent@@UEAAKXZ @ 0x18021D070
 * Callers:
 *     ?Release@CShellSnapComponent@@W7EAAKXZ @ 0x18057D910 (-Release@CShellSnapComponent@@W7EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WDA@EAAKXZ @ 0x18057D920 (-Release@CShellSnapComponent@@WDA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WDI@EAAKXZ @ 0x18057D930 (-Release@CShellSnapComponent@@WDI@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WHA@EAAKXZ @ 0x18057D940 (-Release@CShellSnapComponent@@WHA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WHI@EAAKXZ @ 0x18057D950 (-Release@CShellSnapComponent@@WHI@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WIA@EAAKXZ @ 0x18057D960 (-Release@CShellSnapComponent@@WIA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WII@EAAKXZ @ 0x18057D980 (-Release@CShellSnapComponent@@WII@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WJA@EAAKXZ @ 0x18057D9A0 (-Release@CShellSnapComponent@@WJA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WJI@EAAKXZ @ 0x18057D9C0 (-Release@CShellSnapComponent@@WJI@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WKA@EAAKXZ @ 0x18057D9E0 (-Release@CShellSnapComponent@@WKA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WKI@EAAKXZ @ 0x18057DA00 (-Release@CShellSnapComponent@@WKI@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WLA@EAAKXZ @ 0x18057DA20 (-Release@CShellSnapComponent@@WLA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WLI@EAAKXZ @ 0x18057DA40 (-Release@CShellSnapComponent@@WLI@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WMA@EAAKXZ @ 0x18057DA60 (-Release@CShellSnapComponent@@WMA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CShellSnapComponent::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::Release(this);
}
