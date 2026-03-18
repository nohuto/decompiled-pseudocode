/*
 * XREFs of ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x14010B830
 * Callers:
 *     UmfdUninitializeProcess @ 0x140332850 (UmfdUninitializeProcess.c)
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B473C (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B4870 (-W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x14010A694 (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     ?UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z @ 0x14022BC88 (-UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1402660F4 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     ?ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CAXXZ @ 0x14026899C (-ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x14026AE4C (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 */

void __fastcall UmfdHostLifeTimeManager::UninitializeProcess(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  NSInstrumentation::CPointerHashTable **v9; // rsi
  __int64 v10; // r8
  struct W32_PUSH_LOCK *v11; // rbx
  void (*v12)(void *, void *, void *); // rdx
  void *v13; // r8
  __int64 SessionState; // rax
  struct W32_PUSH_LOCK *v15; // rbx

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  if ( !KeReadStateEvent(*(PRKEVENT *)(v3 + 24224)) )
  {
    KeSetEvent(*(PRKEVENT *)(v3 + 24224), 0, 0);
    UmfdPostWinLogonMessage((struct Gre::Font::GLOBALS *)(v3 + 4872), 3u, 4LL);
  }
  UmfdHostLifeTimeManager::ResetUmfdHostReadiness();
  v9 = *(NSInstrumentation::CPointerHashTable ***)(W32GetSessionState(v5, v4, v6) + 104);
  if ( *v9 )
  {
    v11 = v9[1];
    W32AcquirePushLockExclusive(v11);
    NSInstrumentation::CPointerHashTable::Enumerate(*v9, v12, v13);
    W32ReleasePushLockExclusive(v11);
  }
  SessionState = W32GetSessionState(v8, v7, v10);
  v15 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(SessionState + 96) + 24248LL);
  if ( *(_QWORD *)(SessionState + 96) == -24248LL )
  {
    UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  }
  else
  {
    GreAcquirePushLockExclusive(v15);
    UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
    GreReleasePushLockExclusive(v15);
  }
  UmfdZombifyAllUmfdFonts();
  *(_BYTE *)(v3 + 24289) = 0;
}
