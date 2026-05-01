/*
 * XREFs of ?OnHitTestPartNotifyEvent@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x180078660
 * Callers:
 *     <none>
 * Callees:
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x180078420 (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x1800786B8 (-OnArrangedWindowBorderExit@JointResize@@AEAAXXZ.c)
 */

__int64 __fastcall JointResize::OnHitTestPartNotifyEvent(
        JointResize *this,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        const struct Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs *a3)
{
  int v4; // r8d

  v4 = *((_DWORD *)a3 + 2);
  if ( v4 == 10 || v4 == 11 || v4 == 12 || v4 == 15 )
  {
    if ( *((_BYTE *)a3 + 19) && *((_BYTE *)a3 + 17) && (*((_BYTE *)a3 + 12) & 2) == 0 )
      JointResize::OnArrangedWindowBorderEnter(this, *(HWND *)a3, v4);
    else
      JointResize::OnArrangedWindowBorderExit(this);
  }
  return 0LL;
}
