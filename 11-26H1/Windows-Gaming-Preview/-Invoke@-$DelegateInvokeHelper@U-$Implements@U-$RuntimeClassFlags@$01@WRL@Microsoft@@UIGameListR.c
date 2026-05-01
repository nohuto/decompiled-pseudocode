/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_b4a59bf9cda23aee606929b9e63756b5_@@$0?0PEAUHSTRING__@@@?$DelegateArgTraits@P8IGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@EAAJPEAUHSTRING__@@@Z@Details@WRL@Microsoft@@UEAAJPEAUHSTRING__@@@Z @ 0x18001F010
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180012028 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler::*)(HSTRING__ *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,Microsoft::WRL::FtmBase>,_lambda_b4a59bf9cda23aee606929b9e63756b5_,-1,HSTRING__ *>::Invoke(
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
           &GUID_10c5648f_6c8f_4712_9b38_474bc22e76d8,
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
