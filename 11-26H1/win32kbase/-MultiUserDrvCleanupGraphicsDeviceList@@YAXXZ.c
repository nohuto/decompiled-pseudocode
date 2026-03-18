/*
 * XREFs of ?MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ @ 0x14002CDB0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14002CC1C (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x14002CE50 (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall MultiUserDrvCleanupGraphicsDeviceList(__int64 a1)
{
  __int64 v1; // rbx
  char *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  DrvCleanupGraphicsDeviceList(*(char **)(v1 + 1280));
  v2 = *(char **)(v1 + 1272);
  *(_QWORD *)(v1 + 1280) = 0LL;
  DrvCleanupGraphicsDeviceList(v2);
  *(_QWORD *)(v1 + 1272) = 0LL;
  *(_QWORD *)(v1 + 1184) = 0LL;
  v3 = *(void **)(v1 + 2976);
  if ( v3 )
  {
    GreDeleteFastMutex(v3);
    *(_QWORD *)(v1 + 2976) = 0LL;
  }
  v4 = *(void **)(v1 + 2992);
  if ( v4 )
  {
    GreDeleteFastMutex(v4);
    *(_QWORD *)(v1 + 2992) = 0LL;
  }
  GreCleanupRemoteAdapterContext((struct tagREMOTE_CONTEXT *)(v1 + 2936));
}
