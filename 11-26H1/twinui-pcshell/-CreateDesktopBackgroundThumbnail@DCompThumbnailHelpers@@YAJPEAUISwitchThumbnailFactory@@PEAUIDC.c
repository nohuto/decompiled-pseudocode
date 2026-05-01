/*
 * XREFs of ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x180227CBC
 * Callers:
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x180262DFC (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 *     ?_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPEAUIDCompThumbnail@@@Z @ 0x1804CB510 (-_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPE.c)
 *     ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x18052FD24 (-CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x18053E5D0 (-RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DCompThumbnailHelpers::CreateDesktopBackgroundThumbnail(
        DCompThumbnailHelpers *this,
        struct ISwitchThumbnailFactory *a2,
        struct IDCompThumbnail *a3,
        const struct tagRECT *a4,
        const struct tagSIZE *a5)
{
  HWND ShellWindow; // rax
  HWND v10; // rsi
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(DCompThumbnailHelpers *, struct ISwitchThumbnailFactory *, HWND, _QWORD, const struct tagRECT *, _DWORD *, GUID *, const struct tagSIZE *); // rax
  int v15; // r8d
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(DCompThumbnailHelpers *, struct ISwitchThumbnailFactory *, _QWORD, __int64, GUID *, const struct tagSIZE *); // rbx
  DWORD SysColor; // eax
  __int64 v20; // [rsp+50h] [rbp-B0h]
  _DWORD v21[4]; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp-98h] BYREF
  _WORD pvParam[264]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  *a5 = 0LL;
  memset_0(pvParam, 0, 0x208uLL);
  SystemParametersInfoW(0x73u, 0x104u, pvParam, 0);
  if ( pvParam[0] && (unsigned int)_o__wcsicmp(pvParam, L"(None)") )
  {
    ShellWindow = GetShellWindow();
    v10 = ShellWindow;
    if ( !ShellWindow )
    {
      v11 = -2147019873;
      v12 = 260LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"desktop\\internal\\shell\\inc\\DCompThumbnailFactory\\DCompThumbnailHelpers.h",
        (const char *)(unsigned int)v11);
      return (unsigned int)v11;
    }
    Rect = 0LL;
    GetWindowRect(ShellWindow, &Rect);
    v13 = *(_QWORD *)this;
    v21[0] = *(_DWORD *)a3 - Rect.left;
    v14 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, struct ISwitchThumbnailFactory *, HWND, _QWORD, const struct tagRECT *, _DWORD *, GUID *, const struct tagSIZE *))(v13 + 64);
    v21[2] = *((_DWORD *)a3 + 2) - Rect.left;
    v15 = *((_DWORD *)a3 + 1) - Rect.top;
    v21[3] = *((_DWORD *)a3 + 3) - Rect.top;
    v21[1] = v15;
    v11 = v14(this, a2, v10, 0LL, a4, v21, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, a5);
    if ( v11 < 0 )
    {
      v12 = 275LL;
      goto LABEL_12;
    }
  }
  else
  {
    if ( a4 )
    {
      v16 = *(_QWORD *)&a4->left;
    }
    else
    {
      LODWORD(v20) = *((_DWORD *)a3 + 2) - *(_DWORD *)a3;
      HIDWORD(v20) = *((_DWORD *)a3 + 3) - *((_DWORD *)a3 + 1);
      v16 = v20;
    }
    v17 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, struct ISwitchThumbnailFactory *, _QWORD, __int64, GUID *, const struct tagSIZE *))(*(_QWORD *)this + 104LL);
    SysColor = GetSysColor(1);
    v11 = v17(this, a2, SysColor, v16, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, a5);
    if ( v11 < 0 )
    {
      v12 = 256LL;
      goto LABEL_12;
    }
  }
  return (unsigned int)v11;
}
