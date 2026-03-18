/*
 * XREFs of VidSchiGetVSyncSuspended @ 0x140037890
 * Callers:
 *     ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004CB94 (-VidSchiGetVSyncState@@YA-AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchIsVSyncEnabled @ 0x1400FDD40 (VidSchIsVSyncEnabled.c)
 *     VidSchiControlVSync @ 0x1400FDFF0 (VidSchiControlVSync.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiGetVSyncSuspended(__int64 a1, unsigned int a2)
{
  if ( *(_BYTE *)(a1 + 2500) )
    return *(_BYTE *)(a2 + a1 + 2501);
  else
    return *(_BYTE *)(a1 + 2501);
}
