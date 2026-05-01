/*
 * XREFs of ?Commit@VirtualDesktopHotKeyWindow@@QEAAJPEAUIVirtualDesktopSwitchAnimator2@@M@Z @ 0x180569D4C
 * Callers:
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x180567660 (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@IEAA_NXZ @ 0x180562DF4 (-ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@IEAA_NXZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4___ @ 0x1805695FC (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_35.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609___ @ 0x1805696D8 (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_48.c)
 */

__int64 __fastcall VirtualDesktopHotKeyWindow::Commit(
        VirtualDesktopHotKeyWindow *this,
        struct IVirtualDesktopSwitchAnimator2 *a2,
        float a3)
{
  bool v5; // al
  __int64 v6; // r9
  int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+30h] [rbp-48h]
  _DWORD v15[4]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v5 = VirtualDesktopGestureWindow::ShowAndAnimateCustomWallpapers(this);
  v7 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  v8 = *((_QWORD *)this + 20);
  v15[1] = 0;
  v15[3] = 1;
  LOBYTE(v13) = 0;
  v15[0] = (int)(float)((float)v7 * a3);
  v9 = (unsigned int)(v15[0] + 1);
  v15[2] = v15[0] + 1;
  if ( v5 )
  {
    v10 = DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609___(
            v8,
            (__int64)v15,
            v9,
            v6,
            v13,
            (__int64)a2,
            v14);
    if ( v10 < 0 )
    {
      v11 = 142LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  else
  {
    v10 = DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4___(
            v8,
            (__int64)v15,
            v9,
            v6,
            v13,
            (__int64)a2,
            v14);
    if ( v10 < 0 )
    {
      v11 = 156LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
