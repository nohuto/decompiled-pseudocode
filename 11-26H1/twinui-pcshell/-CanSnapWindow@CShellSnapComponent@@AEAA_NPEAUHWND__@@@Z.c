/*
 * XREFs of ?CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z @ 0x18016D41C
 * Callers:
 *     ?OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUDragSizeInfoEventArgs@3456@@Z @ 0x180268340 (-OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEven.c)
 *     ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x1805A3340 (-ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     ?CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18016D4B8 (-CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18016D4E0 (-CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall CShellSnapComponent::CanSnapWindow(CShellSnapComponent *this, ApplicationViewHelpers *a2)
{
  char v3; // di
  BOOL v4; // ebx
  HWND v5; // rdx
  bool CanResizeWindow; // bp
  HWND v7; // rdx
  bool CanMaximizeWindow; // al
  int v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+34h] [rbp+Ch]

  v11 = HIDWORD(this);
  v3 = 0;
  v10 = 0;
  if ( !SystemParametersInfoW(0x82u, 0, &v10, 0) || !v10 )
    return 0;
  v4 = IsWindowEnabled((HWND)a2);
  CanResizeWindow = ApplicationViewHelpers::CanResizeWindow(a2, v5);
  CanMaximizeWindow = ApplicationViewHelpers::CanMaximizeWindow(a2, v7);
  if ( v4 )
  {
    if ( CanResizeWindow )
      return CanMaximizeWindow;
  }
  return v3;
}
