/*
 * XREFs of ?OnStreamDisconnectedFromSaDevice@CAudioStream@@UEAAXXZ @ 0x180072420
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAudioStream::OnStreamDisconnectedFromSaDevice(CAudioStream *this)
{
  (*(void (__fastcall **)(struct ISpatialAudioResourceManager *, _QWORD))(*(_QWORD *)g_SpatialAudioResourceManager + 32LL))(
    g_SpatialAudioResourceManager,
    ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  if ( *((_DWORD *)this + 31) == 2 )
  {
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 21);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 22);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 23);
  }
}
