/*
 * XREFs of ?Commit@VirtualDesktopHotKeyWindow@@QEAAJPEAUIVirtualDesktopSwitchAnimator2@@M@Z @ 0x180545D7C
 * Callers:
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x180543760 (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@IEAA_NXZ @ 0x18053F000 (-ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@IEAA_NXZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4___ @ 0x18054564C (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_35.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609___ @ 0x180545720 (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_48.c)
 */

__int64 __fastcall VirtualDesktopHotKeyWindow::Commit(
        VirtualDesktopHotKeyWindow *this,
        struct IVirtualDesktopSwitchAnimator2 *a2,
        float a3)
{
  bool v5; // al
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  bool v9; // zf
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  int v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  _DWORD v16[2]; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+48h] [rbp-30h]
  int v18; // [rsp+4Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v5 = VirtualDesktopGestureWindow::ShowAndAnimateCustomWallpapers(this);
  v16[1] = 0;
  v8 = *((_QWORD *)this + 20);
  v9 = !v5;
  v10 = *((_DWORD *)this + 48);
  v18 = 1;
  LOBYTE(v14) = 0;
  if ( v9 )
  {
    v16[0] = (int)(float)((float)(v10 - *((_DWORD *)this + 46)) * a3);
    v17 = v16[0] + 1;
    v11 = DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4___(
            v8,
            (__int64)v16,
            v6,
            v7,
            v14,
            (__int64)a2,
            v15);
    if ( v11 < 0 )
    {
      v12 = 156LL;
      goto LABEL_4;
    }
  }
  else
  {
    v16[0] = (int)(float)((float)(v10 - *((_DWORD *)this + 46)) * a3);
    v17 = v16[0] + 1;
    v11 = DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_484aa05d4e8e00993eb11fe3ca1c5d9d___lambda_9a7bfcc99c4e75b6f719d590bcf52609___(
            v8,
            (__int64)v16,
            v6,
            v7,
            v14,
            (__int64)a2,
            v15);
    if ( v11 < 0 )
    {
      v12 = 142LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
        (const char *)(unsigned int)v11);
      return (unsigned int)v11;
    }
  }
  return 0LL;
}
