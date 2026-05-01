/*
 * XREFs of ?ShowLauncher@TabletModePositioner@@AEAAJ_N@Z @ 0x1804F917C
 * Callers:
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x18007D970 (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?MultitaskingViewDismissed@TabletModePositioner@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1801D3970 (-MultitaskingViewDismissed@TabletModePositioner@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1804F76DC (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1804F93E4 (-ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShowLauncherOnMonitor@@YAJPEAUIImmersiveMonitor@@W4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1804F9220 (-ShowLauncherOnMonitor@@YAJPEAUIImmersiveMonitor@@W4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUN.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::ShowLauncher(IUnknown **this, char a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         this[2],
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &ppvOut);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = ShowLauncherOnMonitor(ppvOut, a2 != 0 ? 13 : 6);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 2884LL;
  }
  else
  {
    v6 = 2878LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return v5;
}
