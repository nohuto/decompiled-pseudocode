/*
 * XREFs of ?add_OverlayDisplayFullscreenChanged@GamingOverlayExperienceManager@@UEAAJPEAU?$IEventHandler@_N@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1802082F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$AgileEventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@_N@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180208354 (-Add@-$AgileEventSource@U-$IEventHandler@_N@Foundation@Windows@@U-$InvokeModeOptions@$0-1@WRL@Mi.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::add_OverlayDisplayFullscreenChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx
  int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v3 = 4499LL;
LABEL_3:
    v4 = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  if ( !a3 )
  {
    v3 = 4500LL;
    goto LABEL_3;
  }
  v4 = Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(a1 + 1416);
  if ( v4 < 0 )
  {
    v3 = 4502LL;
    goto LABEL_4;
  }
  return 0LL;
}
