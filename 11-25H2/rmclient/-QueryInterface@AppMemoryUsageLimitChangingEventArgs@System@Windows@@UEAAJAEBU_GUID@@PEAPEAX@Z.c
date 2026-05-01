/*
 * XREFs of ?QueryInterface@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018C10
 * Callers:
 *     ?QueryInterface@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018C20 (-QueryInterface@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AppMemoryUsageLimitChangingEventArgs@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018C30 (-QueryInterface@AppMemoryUsageLimitChangingEventArgs@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::System::AppMemoryUsageLimitChangingEventArgs::QueryInterface(
        __int64 this,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>>(
           this,
           a2,
           a3);
}
