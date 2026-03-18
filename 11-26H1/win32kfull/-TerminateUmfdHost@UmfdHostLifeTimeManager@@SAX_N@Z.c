/*
 * XREFs of ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x140225598
 * Callers:
 *     ?UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z @ 0x1402254BC (-UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1400CE758 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1402258B0 (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x140225918 (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 */

void __fastcall UmfdHostLifeTimeManager::TerminateUmfdHost(int a1, __int64 a2)
{
  char v2; // si
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  HANDLE v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  void *v10; // rbx
  struct _KEVENT *v11; // rcx
  __int64 SessionState; // rax
  __int64 v13; // rdx
  int v14; // ecx
  struct W32_PUSH_LOCK *v15; // rbx
  __int64 v16; // rax
  struct W32_PUSH_LOCK *v17; // rsi

  v2 = a1;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  KeWaitForSingleObject(*(PVOID *)(v3 + 24216), Executive, 0, 0, 0LL);
  v7 = UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle(v5, v4, v6);
  v10 = v7;
  if ( v7 )
  {
    ZwWaitForSingleObject(v7, 0, 0LL);
    ZwClose(v10);
  }
  if ( v2 )
  {
    v11 = *(struct _KEVENT **)(v3 + 24208);
    *(_BYTE *)(v3 + 24274) = 0;
    KeClearEvent(v11);
  }
  else
  {
    *(_BYTE *)(v3 + 24277) = 1;
  }
  SessionState = W32GetSessionState(v9, v8);
  v15 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(SessionState + 96) + 24232LL);
  if ( *(_QWORD *)(SessionState + 96) != -24232LL )
    GreAcquirePushLockExclusive(v15);
  v16 = W32GetSessionState(v14, v13);
  v17 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(v16 + 96) + 24240LL);
  if ( *(_QWORD *)(v16 + 96) != -24240LL )
    GreAcquirePushLockExclusive(v17);
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock();
  UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  KeSetEvent(*(PRKEVENT *)(v3 + 24200), 0, 0);
  if ( v17 )
    GreReleasePushLockExclusive(v17);
  if ( v15 )
    GreReleasePushLockExclusive(v15);
}
