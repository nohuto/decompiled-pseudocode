/*
 * XREFs of ?VirtualDesktopMoved@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@II@Z @ 0x180496100
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x180495FD0 (-UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 */

__int64 __fastcall VirtualDesktop::VirtualDesktopMoved(RTL_SRWLOCK *this, struct IVirtualDesktop *a2)
{
  int updated; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = VirtualDesktop::UpdateDesktopIndex(this - 3);
  v3 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x126,
    (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
    (const char *)(unsigned int)updated);
  return v3;
}
