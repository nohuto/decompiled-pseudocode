/*
 * XREFs of ?IsDeferredPositionValid@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005AF04
 * Callers:
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005AC00 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005AE68 (-HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180065990 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180222E4C (-AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerI.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x1802FF790 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::IsDeferredPositionValid(
        CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *this)
{
  return *((_DWORD *)this + 4) <= *((_DWORD *)this + 6) && *((_DWORD *)this + 5) <= *((_DWORD *)this + 7);
}
