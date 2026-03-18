/*
 * XREFs of ??1ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x140225530
 * Callers:
 *     ?UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z @ 0x1402254BC (-UmfdDispatchWinLogonEscape@@YAXPEAUtagUMFD_WINLOGON_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExclusiveWinlognRequestLock::~ExclusiveWinlognRequestLock(struct W32_PUSH_LOCK **this)
{
  struct W32_PUSH_LOCK *v1; // rcx

  v1 = *this;
  if ( v1 )
    GreReleasePushLockExclusive(v1);
}
