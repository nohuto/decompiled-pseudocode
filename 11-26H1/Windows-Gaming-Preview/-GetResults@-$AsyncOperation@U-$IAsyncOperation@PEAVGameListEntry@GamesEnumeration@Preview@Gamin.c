/*
 * XREFs of ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@23@V?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@@Z @ 0x18001E610
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@@Z @ 0x18001DC6C (-Get@-$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Inter.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetResults(
        RTL_SRWLOCK *a1,
        void **a2)
{
  signed __int32 Ptr; // r8d
  signed __int32 v5; // ecx
  PVOID v6; // rcx
  unsigned __int32 v7; // ebx
  signed __int32 v9; // [rsp+40h] [rbp+20h] BYREF
  signed __int32 v10; // [rsp+48h] [rbp+28h] BYREF
  signed __int32 v11; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  Ptr = (signed __int32)a1[-15].Ptr;
  v10 = -2;
  _InterlockedCompareExchange(&v10, Ptr, -2);
  if ( v10 != 3 )
  {
    if ( v10 != 1 )
    {
      v7 = -2147483634;
      RoOriginateError(2147483662LL, 0LL);
      return v7;
    }
    return (unsigned int)Windows::Internal::CMarshaledInterfaceResult<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::Get(
                           a1 + 13,
                           a2);
  }
  v5 = (signed __int32)a1[-15].Ptr;
  v9 = 0;
  v11 = -2;
  _InterlockedCompareExchange(&v11, v5, -2);
  if ( v11 == 3 )
  {
    _InterlockedCompareExchange(&v9, HIDWORD(a1[-15].Ptr), v9);
    v6 = a1[-16].Ptr;
    if ( v6 )
      SetRestrictedErrorInfo(v6);
  }
  v7 = v9;
  if ( v9 >= 0 )
    return (unsigned int)Windows::Internal::CMarshaledInterfaceResult<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::Get(
                           a1 + 13,
                           a2);
  return v7;
}
