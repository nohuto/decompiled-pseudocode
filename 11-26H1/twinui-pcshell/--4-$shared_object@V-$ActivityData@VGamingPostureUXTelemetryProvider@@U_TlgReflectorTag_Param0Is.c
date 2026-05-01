/*
 * XREFs of ??4?$shared_object@V?$ActivityData@VGamingPostureUXTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x180343064
 * Callers:
 *     ??4?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180342EA4 (--4-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Para.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VGamingPostureUXTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180359FFC (-reset@-$shared_object@V-$ActivityData@VGamingPostureUXTelemetryProvider@@U_TlgReflectorTag_Para.c)
 */

volatile signed __int32 **__fastcall wil::details::shared_object<wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingPostureUXTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::operator=(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 *v4; // rax

  if ( a1 != a2 )
  {
    wil::details::shared_object<wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingPostureUXTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1);
    v4 = *a2;
    *a1 = *a2;
    if ( v4 )
      _InterlockedIncrement(v4);
  }
  return a1;
}
