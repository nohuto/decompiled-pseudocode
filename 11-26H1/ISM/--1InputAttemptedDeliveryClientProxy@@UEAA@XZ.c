/*
 * XREFs of ??1InputAttemptedDeliveryClientProxy@@UEAA@XZ @ 0x1801604E4
 * Callers:
 *     ??_GInputAttemptedDeliveryClientProxy@@UEAAPEAXI@Z @ 0x180160510 (--_GInputAttemptedDeliveryClientProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall InputAttemptedDeliveryClientProxy::~InputAttemptedDeliveryClientProxy(
        InputAttemptedDeliveryClientProxy *this)
{
  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)this + 7);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 4);
}
