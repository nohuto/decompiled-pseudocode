/*
 * XREFs of ?Release@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAKXZ @ 0x1801748D0
 * Callers:
 *     ?Release@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@W7EAAKXZ @ 0x1801748E0 (-Release@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@WBA@EAAKXZ @ 0x1801748F0 (-Release@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::Release(
        __int64 this,
        volatile int *a2)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IConstantChangedEventArgs,Microsoft::WRL::FtmBase>::Release(
           this,
           a2);
}
