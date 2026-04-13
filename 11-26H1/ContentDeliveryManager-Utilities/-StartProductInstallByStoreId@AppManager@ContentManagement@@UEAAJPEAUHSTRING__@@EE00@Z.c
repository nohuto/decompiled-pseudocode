/*
 * XREFs of ?StartProductInstallByStoreId@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE00@Z @ 0x180077150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ContentManagement::AppManager::StartProductInstallByStoreId(
        ContentManagement::AppManager *this,
        HSTRING a2)
{
  return (*(__int64 (__fastcall **)(ContentManagement::AppManager *, HSTRING))(*(_QWORD *)this + 112LL))(this, a2);
}
