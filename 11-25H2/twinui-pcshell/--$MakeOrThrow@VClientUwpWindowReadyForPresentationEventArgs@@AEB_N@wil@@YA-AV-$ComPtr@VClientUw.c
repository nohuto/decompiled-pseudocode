/*
 * XREFs of ??$MakeOrThrow@VClientUwpWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA?AV?$ComPtr@VClientUwpWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@AEB_N@Z @ 0x18008A9AC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_774bfa34314c79ae2272b980e777e42b___::Run @ 0x18043B2C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_774bfa34314c79ae2272b980e777e42b___--Run.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18008AA6C (--0-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIClientWindowReadyForPresentationChan.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802ED74C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall wil::MakeOrThrow<ClientUwpWindowReadyForPresentationEventArgs,bool const &>(_QWORD *a1, char *a2)
{
  _QWORD *v4; // rax
  const char *v5; // r9
  _QWORD *v6; // rsi
  char v7; // bl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v4;
  if ( v4 )
  {
    v7 = *a2;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>(v4);
    *v6 = &ClientWindowReadyForPresentationEventArgs::`vftable';
    v6[1] = &ClientWindowReadyForPresentationEventArgs::`vftable'{for `IWeakReferenceSource'};
    v6[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_BYTE *)v6 + 64) = v7;
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v6;
  }
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x3F,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v5);
  return a1;
}
