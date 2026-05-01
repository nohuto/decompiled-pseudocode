/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_2ad18b026caacf7c0e47bc8bbd19a7fc_@@$0?0PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@?$DelegateArgTraits@P8IGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@EAAJPEAUIGameListEntry@2345@@Z@Details@WRL@Microsoft@@UEAAJPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18001EF50
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180012028 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler::*)(Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::FtmBase>,_lambda_2ad18b026caacf7c0e47bc8bbd19a7fc_,-1,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *>::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v8 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
           v4,
           &GUID_25f6a421_d8f5_4d91_b40e_53d5e86fde64,
           &v8);
    v3 = v8;
  }
  else
  {
    v5 = 0;
  }
  if ( v5 < 0 )
  {
    if ( v3 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
LABEL_11:
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, a2);
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5 < 0 )
    goto LABEL_11;
  return (unsigned int)v5;
}
