/*
 * XREFs of ?QueryInterface@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801742B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IConstantChangedEventArgs,Microsoft::WRL::FtmBase>::QueryInterface(
           a1 - 16,
           a2,
           a3);
}
