/*
 * XREFs of ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ @ 0x180012690
 * Callers:
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7EAAKXZ @ 0x180017F90 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7EAAKXZ.c)
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@WBA@EAAKXZ @ 0x180017FA0 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::System::AppMemoryUsageLimitChangingEventArgs::Release(__int64 this, volatile int *a2)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::Release(
           this,
           a2);
}
