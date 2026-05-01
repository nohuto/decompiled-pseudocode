/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_b4a59bf9cda23aee606929b9e63756b5_@@$0?0PEAUHSTRING__@@@?$DelegateArgTraits@P8IGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@EAAJPEAUHSTRING__@@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18001B780
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler::*)(HSTRING__ *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,Microsoft::WRL::FtmBase>,_lambda_b4a59bf9cda23aee606929b9e63756b5_,-1,HSTRING__ *>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = a1[8];
  if ( v4 )
  {
    a1[8] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)a1 + 15) = -1073741823;
  v5 = a1[4];
  if ( v5 )
  {
    a1[4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
