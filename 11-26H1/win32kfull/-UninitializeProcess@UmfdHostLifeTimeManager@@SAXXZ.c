/*
 * XREFs of ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x140225158
 * Callers:
 *     GreSystemProcessCallout @ 0x14028CC90 (GreSystemProcessCallout.c)
 *     UmfdUninitializeProcess @ 0x14034A050 (UmfdUninitializeProcess.c)
 * Callees:
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2494 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D24C0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1400D3004 (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x140225258 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1402258B0 (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z @ 0x140265BBC (-UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z.c)
 *     ?ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CAXXZ @ 0x14028C9FC (-ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CAXXZ.c)
 */

void __fastcall UmfdHostLifeTimeManager::UninitializeProcess(int a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // rdx
  int v6; // ecx
  NSInstrumentation::CPointerHashTable **v7; // rdi
  NSInstrumentation::CPlatformReaderWriterLock *v8; // rbx
  void (*v9)(void *, void *, void *); // rdx
  void *v10; // r8
  __int64 SessionState; // rax
  struct W32_PUSH_LOCK *v12; // rbx

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  if ( !KeReadStateEvent(*(PRKEVENT *)(v2 + 24208)) )
  {
    KeSetEvent(*(PRKEVENT *)(v2 + 24208), 0, 0);
    UmfdPostWinLogonMessage((struct Gre::Font::GLOBALS *)(v2 + 4864), 3u, 4LL);
  }
  UmfdHostLifeTimeManager::ResetUmfdHostReadiness();
  v7 = *(NSInstrumentation::CPointerHashTable ***)(W32GetSessionState(v4, v3) + 104);
  if ( *v7 )
  {
    v8 = v7[1];
    NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(v8);
    NSInstrumentation::CPointerHashTable::Enumerate(*v7, v9, v10);
    NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v8);
  }
  SessionState = W32GetSessionState(v6, v5);
  v12 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(SessionState + 96) + 24232LL);
  if ( *(_QWORD *)(SessionState + 96) == -24232LL )
  {
    UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  }
  else
  {
    GreAcquirePushLockExclusive(v12);
    UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
    GreReleasePushLockExclusive(v12);
  }
  UmfdZombifyAllUmfdFonts();
  *(_BYTE *)(v2 + 24273) = 0;
}
