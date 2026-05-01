/*
 * XREFs of ??$_Assign@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@?$_Optional_construct_base@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@std@@QEAAX$$QEAVPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@Z @ 0x1805BD00C
 * Callers:
 *     ?PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1805C3CF0 (-PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITE.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1805BEC7C (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ??1PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAA@XZ @ 0x1805BF82C (--1PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAA@XZ.c)
 *     ??4?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805BF988 (--4-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall std::_Optional_construct_base<PinManagerTelemetry::PinManagerPinItemFromTrustedCaller>::_Assign<PinManagerTelemetry::PinManagerPinItemFromTrustedCaller>(
        __int64 a1,
        __int64 a2)
{
  _QWORD v4[42]; // [rsp+20h] [rbp-168h] BYREF

  if ( *(_BYTE *)(a1 + 328) )
  {
    memset_0(v4, 0, 0x148uLL);
    wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
      v4,
      a1);
    v4[0] = &PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::`vftable';
    wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::operator=(
      a1,
      a2);
    PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::~PinManagerPinItemFromTrustedCaller((PinManagerTelemetry::PinManagerPinItemFromTrustedCaller *)v4);
  }
  else
  {
    wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
      a1,
      a2);
    *(_BYTE *)(a1 + 328) = 1;
    *(_QWORD *)a1 = &PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::`vftable';
  }
}
