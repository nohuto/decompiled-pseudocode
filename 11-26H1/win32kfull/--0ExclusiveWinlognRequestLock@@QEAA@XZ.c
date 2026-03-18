/*
 * XREFs of ??0ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x140225554
 * Callers:
 *     ?UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z @ 0x1402254BC (-UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     <none>
 */

ExclusiveWinlognRequestLock *__fastcall ExclusiveWinlognRequestLock::ExclusiveWinlognRequestLock(
        ExclusiveWinlognRequestLock *this,
        __int64 a2)
{
  __int64 v3; // rcx
  bool v4; // zf
  struct W32_PUSH_LOCK *v5; // rcx

  v3 = *(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96);
  v4 = v3 == -24128;
  v5 = (struct W32_PUSH_LOCK *)(v3 + 24128);
  *(_QWORD *)this = v5;
  if ( !v4 )
    GreAcquirePushLockExclusive(v5);
  return this;
}
