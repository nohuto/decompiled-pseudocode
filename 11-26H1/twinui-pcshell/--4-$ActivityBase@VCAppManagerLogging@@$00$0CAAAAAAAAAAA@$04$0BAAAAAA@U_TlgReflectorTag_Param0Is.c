/*
 * XREFs of ??4?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800B0DB8
 * Callers:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800B0938 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0Is.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180068EA8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x1800AE810 (--0-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800B1188 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_1800B1188.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::operator=(
        _QWORD *a1,
        _QWORD *a2)
{
  wil::details::ThreadFailureCallbackHolder *v4; // rcx
  volatile signed __int32 **v5; // rdi
  volatile signed __int32 **v6; // r15
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // r14
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v11; // rax

  v4 = (wil::details::ThreadFailureCallbackHolder *)(a1 + 36);
  if ( *((_DWORD *)v4 + 6) )
    wil::details::ThreadFailureCallbackHolder::StopWatching(v4);
  v5 = (volatile signed __int32 **)(a2 + 35);
  if ( a2[35] )
  {
    a1[34] = a2[34];
    if ( a1 + 35 != v5 )
    {
      wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 35);
      v11 = *v5;
      a1[35] = *v5;
      if ( v11 )
        _InterlockedIncrement(v11);
    }
  }
  else
  {
    v6 = (volatile signed __int32 **)(a1 + 35);
    v7 = (volatile signed __int32 *)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    if ( v7 )
    {
      *v7 = 1;
      wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)(v7 + 2),
        (__int64)(a2 + 1));
      wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 35);
      *v6 = v8;
      a1[34] = (unsigned __int64)(v8 + 2) & -(__int64)(v8 != 0LL);
      if ( v5 != v6 )
      {
        wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a2 + 35);
        v9 = *v6;
        *v5 = *v6;
        if ( v9 )
          _InterlockedIncrement(v9);
      }
      a2[34] = a1[34];
      a2[40] = a1[34] + 40LL;
    }
  }
  a1[40] = a1[34] + 40LL;
  return a1;
}
