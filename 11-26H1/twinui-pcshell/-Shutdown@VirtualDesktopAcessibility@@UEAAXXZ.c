/*
 * XREFs of ?Shutdown@VirtualDesktopAcessibility@@UEAAXXZ @ 0x180211300
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800250B4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

void __fastcall VirtualDesktopAcessibility::Shutdown(VirtualDesktopAcessibility *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = SmartCookie::Unregister((VirtualDesktopAcessibility *)((char *)this + 48));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7E,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
      (const char *)(unsigned int)v1);
}
