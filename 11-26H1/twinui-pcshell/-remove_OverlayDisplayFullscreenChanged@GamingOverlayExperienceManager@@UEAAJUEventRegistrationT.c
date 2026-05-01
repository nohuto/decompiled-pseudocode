/*
 * XREFs of ?remove_OverlayDisplayFullscreenChanged@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x18020F850
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18020F894 (-Remove@-$EventSource@U-$IEventHandler@_N@Foundation@Windows@@U-$InvokeModeOptions@$0-1@WRL@Micr.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::remove_OverlayDisplayFullscreenChanged(
        GamingOverlayExperienceManager *this,
        struct EventRegistrationToken a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
         (char *)this + 1416,
         a2.value);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x119D,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
