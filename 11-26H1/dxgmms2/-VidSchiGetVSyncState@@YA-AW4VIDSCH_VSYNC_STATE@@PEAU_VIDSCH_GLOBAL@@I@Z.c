/*
 * XREFs of ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004CB94
 * Callers:
 *     VidSchCollectDbgInfo @ 0x14011DE00 (VidSchCollectDbgInfo.c)
 * Callees:
 *     VidSchiGetVSyncSuspended @ 0x140037890 (VidSchiGetVSyncSuspended.c)
 */

__int64 __fastcall VidSchiGetVSyncState(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  if ( a2 >= *(_DWORD *)(a1 + 48) )
    return 0x10000LL;
  v2 = *(_BYTE *)(a1 + 2500) ? a1 + a2 : a1;
  if ( *(_BYTE *)(v2 + 2096) )
    return 0x10000LL;
  else
    return VidSchiGetVSyncSuspended(a1, a2) != 0 ? 3 : 0;
}
