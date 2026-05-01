/*
 * XREFs of ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x180109E44
 * Callers:
 *     ?ReadPerDesktopStringData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGPEAPEAG@Z @ 0x180109D74 (-ReadPerDesktopStringData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGPEAPEAG@Z.c)
 *     ?VirtualDesktopNameChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180568D80 (-VirtualDesktopNameChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@.c)
 *     ?VirtualDesktopRemoved@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180568E80 (-VirtualDesktopRemoved@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?VirtualDesktopWallpaperChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180568F40 (-VirtualDesktopWallpaperChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING.c)
 *     ?WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z @ 0x180569040 (-WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualDesktopPersistence::GetVirtualDesktopRegKeyName(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktop *a2,
        unsigned __int16 (*a3)[49])
{
  __int64 v3; // rax
  unsigned int v5; // ebx
  unsigned __int16 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned __int16 v9; // ax
  unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  GUID rguid; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_QWORD *)a2;
  rguid = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, GUID *))(v3 + 32))(a2, &rguid);
  if ( (v5 & 0x80000000) != 0 )
  {
    v12 = 242LL;
    goto LABEL_12;
  }
  v6 = (unsigned __int16 *)a3;
  v7 = 49LL;
  v8 = 0LL;
  do
  {
    if ( v7 == -2147483597 )
      break;
    v9 = *(unsigned __int16 *)((char *)v6 + (char *)L"Desktops\\" - (char *)a3);
    if ( !v9 )
      break;
    *v6 = v9;
    ++v8;
    ++v6;
    --v7;
  }
  while ( v7 );
  v10 = v6 - 1;
  if ( v7 )
    v10 = v6;
  v11 = v8 - 1;
  if ( v7 )
    v11 = v8;
  *v10 = 0;
  v5 = v7 == 0 ? 0x8007007A : 0;
  if ( !v7 )
  {
    v12 = 246LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)v5);
    return v5;
  }
  if ( !StringFromGUID2(&rguid, &(*a3)[v11], 49 - v11) )
  {
    v5 = -2147418113;
    v12 = 247LL;
    goto LABEL_12;
  }
  return 0LL;
}
