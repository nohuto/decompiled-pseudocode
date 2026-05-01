/*
 * XREFs of ?ExitFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180322E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180047630 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180322F20 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 */

__int64 __fastcall CFullScreenManager::ExitFullScreen(__int64 a1, struct IUnknown *a2, unsigned int a3)
{
  struct IApplicationView **v6; // r9
  int ViewForApplication; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                         *(IUnknown **)(a1 - 72),
                         a2,
                         (struct IImmersiveApplication *)&v12,
                         v6);
  v8 = ViewForApplication;
  if ( ViewForApplication >= 0 )
  {
    ViewForApplication = CFullScreenManager::ExitFullScreenForView(a1, v12, a3);
    v8 = ViewForApplication;
    if ( ViewForApplication >= 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v9 = 260LL;
  }
  else
  {
    v9 = 259LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
    (const char *)(unsigned int)ViewForApplication);
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  return v8;
}
