/*
 * XREFs of ??$MakeOrThrow@VApplicationViewWrapper@@AEAPEAUIApplicationView@@@wil@@YA?AV?$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@AEAPEAUIApplicationView@@@Z @ 0x1801170CC
 * Callers:
 *     ?UpdateItemData@AppViewDataSourceAdapter@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180117030 (-UpdateItemData@AppViewDataSourceAdapter@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multita.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIObjectProvider@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801171A8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIObjectProvider@@VFtmBase@23@@WRL@Mic.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIObjectProvider@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017A0D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIObjectProvider@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802ED74C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall wil::MakeOrThrow<ApplicationViewWrapper,IApplicationView * &>(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rax
  const char *v5; // r9
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v4 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v4;
  if ( v4 )
  {
    v7 = *a2;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IObjectProvider,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IObjectProvider,Microsoft::WRL::FtmBase>(v4);
    *v6 = &ApplicationViewWrapper::`vftable'{for `IInspectable'};
    v6[1] = &ApplicationViewWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IObjectProvider,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
    v6[2] = &ApplicationViewWrapper::`vftable'{for `IWeakReferenceSource'};
    v6[3] = &ApplicationViewWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v6[9] = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IObjectProvider,Microsoft::WRL::FtmBase>::Release(*a1);
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
