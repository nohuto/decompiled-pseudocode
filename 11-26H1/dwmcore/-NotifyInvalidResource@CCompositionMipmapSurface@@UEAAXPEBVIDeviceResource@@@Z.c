/*
 * XREFs of ?NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z @ 0x18026B0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCompositionMipmapSurface::NotifyInvalidResource(
        unsigned __int64 this,
        const struct IDeviceResource *a2)
{
  (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(this + 88) + 80LL))(
    *(_QWORD *)(this + 88),
    this & -(__int64)(this != 80));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(this + 88));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(this + 72));
}
