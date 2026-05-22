/*
 * XREFs of ?Release@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAKXZ @ 0x180169300
 * Callers:
 *     ?Release@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@W7EAAKXZ @ 0x180169310 (-Release@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@WBA@EAAKXZ @ 0x180169320 (-Release@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Input::MPCManager::HomeGestureEventArgs::Release(__int64 this, volatile int *a2)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::Release(
           this,
           a2);
}
