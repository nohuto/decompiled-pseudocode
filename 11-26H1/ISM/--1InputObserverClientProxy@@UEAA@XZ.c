/*
 * XREFs of ??1InputObserverClientProxy@@UEAA@XZ @ 0x18013AAEC
 * Callers:
 *     ??_EInputObserverClientProxy@@UEAAPEAXI@Z @ 0x18013AB20 (--_EInputObserverClientProxy@@UEAAPEAXI@Z.c)
 *     ??_GShellHandwritingClientProxy@@UEAAPEAXI@Z @ 0x18015EAD0 (--_GShellHandwritingClientProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180073DA4 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall InputObserverClientProxy::~InputObserverClientProxy(InputObserverClientProxy *this)
{
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)this + 6);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 4);
}
