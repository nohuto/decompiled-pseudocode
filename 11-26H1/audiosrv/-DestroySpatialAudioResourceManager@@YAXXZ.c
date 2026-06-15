/*
 * XREFs of ?DestroySpatialAudioResourceManager@@YAXXZ @ 0x180124EB0
 * Callers:
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800DB86C (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void DestroySpatialAudioResourceManager(void)
{
  if ( g_SpatialAudioResourceManager )
  {
    (*(void (__fastcall **)(struct ISpatialAudioResourceManager *))(*(_QWORD *)g_SpatialAudioResourceManager + 40LL))(g_SpatialAudioResourceManager);
    if ( g_SpatialAudioResourceManager )
    {
      (*(void (__fastcall **)(struct ISpatialAudioResourceManager *))(*(_QWORD *)g_SpatialAudioResourceManager + 16LL))(g_SpatialAudioResourceManager);
      g_SpatialAudioResourceManager = 0LL;
    }
  }
}
