/*
 * XREFs of ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804DED50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1800DAF44 (-CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1800DAF6C (-CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsViewShownInSwitchers@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1800DAF94 (-IsViewShownInSwitchers@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18021B780 (-ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18023A674 (-IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ??$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z @ 0x1804DD054 (--$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?AddViewToKioskPositioner@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804DD904 (-AddViewToKioskPositioner@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?IsPrimaryAppView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804DE7C0 (-IsPrimaryAppView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804DE9E4 (-IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804DEC04 (-MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804DF4A4 (-RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180659E44 (-HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KioskPositioner::OnApplicationViewChanged(
        __int64 a1,
        struct IApplicationView *a2,
        int a3,
        const char *a4)
{
  __int64 v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // rax
  bool IsWin32ApplicationView; // si
  const WCHAR *v10; // rax
  KioskPositioner *v11; // rsi
  KioskPositioner *v12; // rcx
  struct IApplicationView *v13; // rdx
  ApplicationViewHelpers *WindowForView; // rdi
  HWND v15; // rdx
  HWND v16; // rdx
  HWND v17; // rdx
  struct IApplicationView *v18; // rdx
  struct IApplicationView *v19; // rdx
  __int64 result; // rax
  const WCHAR *v21; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v22[9]; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        v6 = a1 - 136;
        v7 = *(__int64 **)(a1 + 504);
        v8 = *v7;
        v22[0] = off_1807262F8;
        v22[1] = v6;
        v22[7] = v22;
        (*(void (__fastcall **)(__int64 *, struct IApplicationView *, _QWORD, _QWORD *))(v8 + 24))(
          v7,
          a2,
          *(_QWORD *)(a1 + 72),
          v22);
        ApplicationViewCollection::RemoveView((ApplicationViewCollection *)(a1 + 512), a2);
      }
    }
    else
    {
      IsWin32ApplicationView = GamingPosturePositioner::IsWin32ApplicationView((GamingPosturePositioner *)a1, a2);
      if ( !*(_BYTE *)(a1 + 498)
        && !(unsigned __int8)KioskPositioner::IsPrimaryAppView((KioskPositioner *)(a1 - 136), a2) )
      {
        *(_BYTE *)(a1 + 498) = 1;
        v10 = L"Win32";
        if ( !IsWin32ApplicationView )
          v10 = L"UWP";
        v21 = v10;
        CustomShellHostTelemetry::SecondaryAppLaunched<unsigned short const *>(&v21);
      }
      if ( IsWin32ApplicationView )
      {
        v11 = (KioskPositioner *)(a1 - 136);
        if ( KioskPositioner::ShouldHandleView((KioskPositioner *)(a1 - 136), a2) )
        {
          KioskPositioner::AddViewToKioskPositioner(v12, a2);
          WindowForView = (ApplicationViewHelpers *)ApplicationViewHelpers::GetWindowForView(
                                                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                                                      v13);
          if ( IsWindow((HWND)WindowForView) )
          {
            if ( ApplicationViewHelpers::CanResizeWindow(WindowForView, v15)
              && ApplicationViewHelpers::CanMaximizeWindow(WindowForView, v16)
              && !ApplicationViewHelpers::IsWindowInHighZOrderBand(WindowForView, v17)
              && !ApplicationViewHelpers::HasRootSwitchableOwner((struct IUnknown *)a2, v18)
              && ApplicationViewHelpers::IsViewShownInSwitchers(a2, v19) )
            {
              KioskPositioner::MaximizeWin32View(v11, a2);
            }
          }
        }
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x345,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           a4);
  }
  return result;
}
