/*
 * XREFs of ?WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z @ 0x180569040
 * Callers:
 *     ?VirtualDesktopNameChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180568D80 (-VirtualDesktopNameChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@.c)
 *     ?VirtualDesktopWallpaperChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180568F40 (-VirtualDesktopWallpaperChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x180109E44 (-GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?IsRemoteVirtualDesktop@VirtualDesktopPersistence@@AEAA_NPEAUIVirtualDesktop@@@Z @ 0x180568CDC (-IsRemoteVirtualDesktop@VirtualDesktopPersistence@@AEAA_NPEAUIVirtualDesktop@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualDesktopPersistence::WritePerDesktopData(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktop *a2,
        const unsigned __int16 *a3,
        __int64 a4,
        const void *a5,
        unsigned __int64 a6)
{
  VirtualDesktopPersistence *v9; // rcx
  int VirtualDesktopRegKeyName; // ebx
  __int64 v11; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int16 v14[49]; // [rsp+40h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  if ( !VirtualDesktopPersistence::IsRemoteVirtualDesktop(
          this,
          (__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))a2) )
  {
    VirtualDesktopRegKeyName = VirtualDesktopPersistence::GetVirtualDesktopRegKeyName(
                                 v9,
                                 a2,
                                 (unsigned __int16 (*)[49])v14);
    if ( VirtualDesktopRegKeyName < 0 )
    {
      v11 = 286LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)(unsigned int)VirtualDesktopRegKeyName);
      return (unsigned int)VirtualDesktopRegKeyName;
    }
    v13 = a6;
    LOBYTE(v13) = 1;
    VirtualDesktopRegKeyName = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int16 *, const unsigned __int16 *, int, const void *, unsigned __int64))(**((_QWORD **)this + 2) + 32LL))(
                                 *((_QWORD *)this + 2),
                                 v13,
                                 v14,
                                 a3,
                                 1,
                                 a5,
                                 a6);
    if ( VirtualDesktopRegKeyName < 0 )
    {
      v11 = 287LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
