/*
 * XREFs of ?Release@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAKXZ @ 0x1801693E0
 * Callers:
 *     ?Release@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@W7EAAKXZ @ 0x1801693F0 (-Release@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@WBA@EAAKXZ @ 0x180169400 (-Release@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Input::MPCManager::ServerConnectionArgs::Release(__int64 this, volatile int *a2)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IServerConnectionArgs,Microsoft::WRL::FtmBase>::Release(
           this,
           a2);
}
