/*
 * XREFs of ?QueryInterface@CViewPositionChangedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18036DAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CViewPositionChangedEventArgs::QueryInterface(__int64 a1, const struct _GUID *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs,Microsoft::WRL::FtmBase>::QueryInterface(
           a1 - 8,
           a2,
           a3);
}
