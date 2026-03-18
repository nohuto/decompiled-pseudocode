/*
 * XREFs of ?ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CAXXZ @ 0x14028C9FC
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x140225158 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1401C49AC (-UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x140225918 (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x140295AC0 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 */

void __fastcall UmfdHostLifeTimeManager::ResetUmfdHostReadiness(int a1, __int64 a2)
{
  __int64 SessionState; // rax
  __int64 v3; // rdx
  int v4; // ecx
  struct W32_PUSH_LOCK *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int i; // edi
  void *ServerPort; // rax

  SessionState = W32GetSessionState(a1, a2);
  v5 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(SessionState + 96) + 24240LL);
  if ( *(_QWORD *)(SessionState + 96) != -24240LL )
    GreAcquirePushLockExclusive(v5);
  v6 = *(_QWORD *)(W32GetSessionState(v4, v3) + 96);
  *(_BYTE *)(v6 + 24272) = 0;
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock(v6, v7);
  for ( i = 0; i < 4; ++i )
  {
    ServerPort = (void *)UmfdGetServerPort(i, v8, v9);
    if ( ServerPort )
      UmfdCancelServerOutstandingRequests(ServerPort);
  }
  if ( v5 )
    GreReleasePushLockExclusive(v5);
}
