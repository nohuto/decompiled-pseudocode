/*
 * XREFs of ??4?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800AE1C8
 * Callers:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800AE0F8 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_1800AE0F8.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180041A4C (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180068EA8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$create@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x1800AE2D4 (--$create@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 */

__int64 __fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
        __int64 a1,
        __int64 a2)
{
  wil::details::ThreadFailureCallbackHolder *v4; // rcx
  volatile signed __int32 **v5; // rdi
  volatile signed __int32 **v6; // r14
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v9; // rax

  v4 = (wil::details::ThreadFailureCallbackHolder *)(a1 + 288);
  if ( *((_DWORD *)v4 + 6) )
    wil::details::ThreadFailureCallbackHolder::StopWatching(v4);
  v5 = (volatile signed __int32 **)(a2 + 280);
  v6 = (volatile signed __int32 **)(a1 + 280);
  if ( *(_QWORD *)(a2 + 280) )
  {
    *(_QWORD *)(a1 + 272) = *(_QWORD *)(a2 + 272);
    if ( v6 != v5 )
    {
      wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)(a1 + 280));
      v7 = *v5;
      *v6 = *v5;
      if ( v7 )
        _InterlockedIncrement(v7);
    }
  }
  else if ( (unsigned __int8)wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::create<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>(
                               a1 + 280,
                               a2 + 8) )
  {
    *(_QWORD *)(a1 + 272) = (unsigned __int64)(*v6 + 2) & -(__int64)(*v6 != 0LL);
    if ( v5 != v6 )
    {
      wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)(a2 + 280));
      v9 = *v6;
      *v5 = *v6;
      if ( v9 )
        _InterlockedIncrement(v9);
    }
    *(_QWORD *)(a2 + 272) = *(_QWORD *)(a1 + 272);
    *(_QWORD *)(a2 + 320) = *(_QWORD *)(a1 + 272) + 40LL;
  }
  *(_QWORD *)(a1 + 320) = *(_QWORD *)(a1 + 272) + 40LL;
  return a1;
}
