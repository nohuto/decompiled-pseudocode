/*
 * XREFs of ?Register@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktopAnimationSyncNotification@@PEAK@Z @ 0x1802316A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180027B54 (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall VirtualDesktopAnimationSyncNotifications::Register(
        RTL_SRWLOCK *this,
        struct IUnknown *a2,
        unsigned int *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = AgileRegistrationList::Register(this + 6, a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
