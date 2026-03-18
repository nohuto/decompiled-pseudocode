/*
 * XREFs of ?DrvIsUsedByRemoteGraphicsDevices@@YAHPEAX@Z @ 0x1401F540C
 * Callers:
 *     DrvNeedToSwitchAdapterForRemoteSession @ 0x14019B368 (DrvNeedToSwitchAdapterForRemoteSession.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvIsUsedByRemoteGraphicsDevices(void *a1)
{
  __int64 i; // r8

  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1272LL); i; i = *(_QWORD *)(i + 128) )
  {
    if ( (*(_DWORD *)(i + 160) & 0x4000000) != 0 && *(void **)(i + 296) == a1 )
      return 1LL;
  }
  return 0LL;
}
