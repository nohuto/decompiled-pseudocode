/*
 * XREFs of ?remove_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180023B30
 * Callers:
 *     ?remove_GameRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180023B20 (-remove_GameRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveDelegate@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@IEAAJPEAUIUnknown@@@Z @ 0x180020FB0 (-RemoveDelegate@-$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Wind.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::remove_GameRemoved(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::RemoveDelegate(
         this + 13,
         (struct IUnknown *)a2.value);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B0,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
