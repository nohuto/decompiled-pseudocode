/*
 * XREFs of ?EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180322BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180047630 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180322C70 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 */

__int64 __fastcall CFullScreenManager::EnterFullScreen(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3,
        unsigned int a4)
{
  struct IApplicationView **v8; // r9
  int ViewForApplication; // eax
  unsigned int v10; // ebx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                         *(IUnknown **)(a1 - 72),
                         a2,
                         (struct IImmersiveApplication *)&v14,
                         v8);
  v10 = ViewForApplication;
  if ( ViewForApplication >= 0 )
  {
    v11 = CFullScreenManager::EnterFullScreenForView(a1, v14, a3, a4);
    if ( v11 >= 0 )
      v10 = 0;
    else
      v10 = v11;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFA,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)ViewForApplication);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  return v10;
}
