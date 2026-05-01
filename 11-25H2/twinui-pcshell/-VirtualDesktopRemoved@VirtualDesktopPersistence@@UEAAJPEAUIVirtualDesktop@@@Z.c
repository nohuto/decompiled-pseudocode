/*
 * XREFs of ?VirtualDesktopRemoved@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180544ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x1800A26D8 (-GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?IsRemoteVirtualDesktop@VirtualDesktopPersistence@@AEAA_NPEAUIVirtualDesktop@@@Z @ 0x180544D28 (-IsRemoteVirtualDesktop@VirtualDesktopPersistence@@AEAA_NPEAUIVirtualDesktop@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualDesktopPersistence::VirtualDesktopRemoved(
        __int64 **this,
        __int64 (__fastcall ***a2)(struct IVirtualDesktop *, GUID *, __int64 *))
{
  VirtualDesktopPersistence *v4; // rcx
  unsigned int v5; // edi
  int VirtualDesktopRegKeyName; // eax
  unsigned int v7; // ebx
  __int64 *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int16 v12[49]; // [rsp+20h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v5 = 0;
  if ( VirtualDesktopPersistence::IsRemoteVirtualDesktop((VirtualDesktopPersistence *)this, a2) )
    return 0LL;
  VirtualDesktopRegKeyName = VirtualDesktopPersistence::GetVirtualDesktopRegKeyName(
                               v4,
                               (struct IVirtualDesktop *)a2,
                               (unsigned __int16 (*)[49])v12);
  v7 = VirtualDesktopRegKeyName;
  if ( VirtualDesktopRegKeyName >= 0 )
  {
    v9 = this[2];
    v10 = *v9;
    LOBYTE(v10) = 1;
    v11 = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int16 *))(*v9 + 64))(v9, v10, v12);
    if ( v11 < 0 )
      return (unsigned int)v11;
    return v5;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x105,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)VirtualDesktopRegKeyName);
    return v7;
  }
}
