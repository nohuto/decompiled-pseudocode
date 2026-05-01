/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1802A7538
 * Callers:
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x1800AFF8C (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 *     ??1?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802A7500 (--1-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802B7728 (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ??4?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805BF988 (--4-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ??4?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1805BFA54 (--4-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflect_ea_1805BFA54.c)
 *     ??4?$shared_object@V?$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1805BFB68 (--4-$shared_object@V-$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805C14C8 (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_P.c)
 * Callees:
 *     ??1?$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802A7588 (--1-$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rdi

  v2 = *a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *a1;
      if ( *a1 )
      {
        wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>(v3 + 2);
        operator delete((void *)v3);
      }
    }
    *a1 = 0LL;
  }
}
