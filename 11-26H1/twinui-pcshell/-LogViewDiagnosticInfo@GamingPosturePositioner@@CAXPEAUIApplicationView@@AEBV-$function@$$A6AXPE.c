/*
 * XREFs of ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1K@Z@std@@@Z @ 0x1804FF208
 * Callers:
 *     ?EnterFullScreenForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804FA9F0 (-EnterFullScreenForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ExitFullScreenForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804FAAF0 (-ExitFullScreenForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@@Z@std@@@Z @ 0x1804FF398 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$func_ea_1804FF398.c)
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x180500E90 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 *     ?OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180501850 (-OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     ?PositionView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1805020D0 (-PositionView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180173FA4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingPosturePositioner::LogViewDiagnosticInfo(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        __int64 a2)
{
  LPWSTR FileNameW; // rsi
  void (*v5)(void); // rbx
  struct IApplicationView *v6; // rdx
  HWND WindowForView; // rax
  HWND v8; // rbx
  char *v9; // rax
  __int64 v10; // rcx
  const char *v11; // r9
  DWORD dwProcessId; // [rsp+30h] [rbp-268h] BYREF
  DWORD dwSize; // [rsp+34h] [rbp-264h] BYREF
  void *v14; // [rsp+38h] [rbp-260h] BYREF
  void *v15; // [rsp+40h] [rbp-258h] BYREF
  LPWSTR v16; // [rsp+48h] [rbp-250h] BYREF
  void *v17; // [rsp+50h] [rbp-248h] BYREF
  HWND v18; // [rsp+58h] [rbp-240h] BYREF
  WCHAR ExeName[264]; // [rsp+60h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+0h]

  dwProcessId = 0;
  v15 = 0LL;
  memset_0(ExeName, 0, 0x208uLL);
  dwSize = 260;
  FileNameW = 0LL;
  v5 = (void (*)(void))(*this)[17];
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v15);
  try
  {
    v5();
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(this, v6);
    v8 = WindowForView;
    if ( WindowForView && GetWindowThreadProcessId(WindowForView, &dwProcessId) )
    {
      v9 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
      v14 = v9;
      if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && QueryFullProcessImageNameW(v9, 0, ExeName, &dwSize) )
        FileNameW = PathFindFileNameW(ExeName);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v14);
    }
    LODWORD(v14) = dwProcessId;
    v17 = v15;
    v16 = FileNameW;
    v18 = v8;
    v10 = *(_QWORD *)(a2 + 56);
    if ( !v10 )
      std::_Xbad_function_call();
    (*(void (__fastcall **)(__int64, HWND *, void **, LPWSTR *, void **))(*(_QWORD *)v10 + 16LL))(
      v10,
      &v18,
      &v17,
      &v16,
      &v14);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v15);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xF2F,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      v11);
  }
}
