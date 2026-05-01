/*
 * XREFs of ?Invoke@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@@Z @ 0x1800365A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeDelegates@V_lambda_56908091a02afdced2314238e386ad81_@@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_56908091a02afdced2314238e386ad81_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1800172D4 (--$InvokeDelegates@V_lambda_56908091a02afdced2314238e386ad81_@@UIGameListChangedEventHandler@Gam.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020C40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::Invoke(
        RTL_SRWLOCK *this,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *a2)
{
  RTL_SRWLOCK *v2; // rdi
  int v3; // esi
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *Ptr; // rdx
  signed __int32 v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 5;
  v9 = a2;
  v3 = 0;
  v4 = 0LL;
  AcquireSRWLockExclusive(this + 5);
  Ptr = (volatile signed __int32 *)v2[-1].Ptr;
  if ( Ptr )
  {
    do
      v6 = *((_DWORD *)Ptr + 3);
    while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange(Ptr + 3, v6 + 1, v6) );
    v4 = Ptr;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v4 )
  {
    v3 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_56908091a02afdced2314238e386ad81_,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>(
           &v9,
           (__int64)v4,
           (__int64)&v2[-1]);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  }
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentryupdatehandler.cpp",
      (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
