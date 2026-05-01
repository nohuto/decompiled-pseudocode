/*
 * XREFs of ?IsFullScreenWindow@GamingPosturePositioner@@AEAA_NPEAUHWND__@@@Z @ 0x1804FEDAC
 * Callers:
 *     ?ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804F8EF4 (-ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?GetSecondaryView@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1804FD420 (-GetSecondaryView@GamingPosturePositioner@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_.c)
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804FF4B8 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetMainMonitor@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804FD1C8 (-GetMainMonitor@GamingPosturePositioner@@AEAA-AV-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_p.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall GamingPosturePositioner::IsFullScreenWindow(GamingPosturePositioner *this, HWND a2)
{
  int v3; // eax
  bool v4; // bl
  __int64 v6; // [rsp+20h] [rbp-30h] BYREF
  __int128 v7; // [rsp+28h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  GamingPosturePositioner::GetMainMonitor((__int64)this, &v6);
  v7 = 0LL;
  Rect = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 88LL))(v6, &v7);
  v4 = 0;
  if ( v3 >= 0 )
  {
    if ( GetWindowRect(a2, &Rect) && Rect.left <= (int)v7 && Rect.right >= SDWORD2(v7) && Rect.top <= SDWORD1(v7) )
      v4 = Rect.bottom >= SHIDWORD(v7);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBA6,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v3);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v6);
  return v4;
}
