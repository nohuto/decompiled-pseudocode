/*
 * XREFs of ?NotifyInvalidResource@CDDASwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802A44E0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDASwapChain::NotifyInvalidResource(unsigned __int64 this, const struct IDeviceResource *a2)
{
  (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(this + 16) + 80LL))(
    *(_QWORD *)(this + 16),
    this & -(__int64)(this != 48));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 16));
  CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>::NotifyInvalid((_QWORD *)(this - 48));
}
