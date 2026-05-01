/*
 * XREFs of ??1?$_Optional_destruct_base@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@$0A@@std@@QEAA@XZ @ 0x1805BF250
 * Callers:
 *     ??1?$optional@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@std@@QEAA@XZ @ 0x1805BF3C8 (--1-$optional@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@std@@QEAA@XZ.c)
 *     ?PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1805C3CF0 (-PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITE.c)
 * Callees:
 *     ??1PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAA@XZ @ 0x1805BF82C (--1PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAA@XZ.c)
 */

void __fastcall std::_Optional_destruct_base<PinManagerTelemetry::PinManagerPinItemFromTrustedCaller,0>::~_Optional_destruct_base<PinManagerTelemetry::PinManagerPinItemFromTrustedCaller,0>(
        PinManagerTelemetry::PinManagerPinItemFromTrustedCaller *a1)
{
  if ( *((_BYTE *)a1 + 328) )
    PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::~PinManagerPinItemFromTrustedCaller(a1);
}
