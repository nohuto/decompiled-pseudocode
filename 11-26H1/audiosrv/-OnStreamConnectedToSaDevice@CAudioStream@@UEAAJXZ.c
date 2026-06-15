/*
 * XREFs of ?OnStreamConnectedToSaDevice@CAudioStream@@UEAAJXZ @ 0x180071AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioStream::OnStreamConnectedToSaDevice(CAudioStream *this)
{
  return (*(__int64 (__fastcall **)(struct ISpatialAudioResourceManager *, _QWORD, _QWORD, char *, char *))(*(_QWORD *)g_SpatialAudioResourceManager + 24LL))(
           g_SpatialAudioResourceManager,
           ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
           *((unsigned int *)this + 110),
           (char *)this + 424,
           (char *)this + 448);
}
