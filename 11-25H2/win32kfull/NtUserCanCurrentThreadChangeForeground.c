/*
 * XREFs of NtUserCanCurrentThreadChangeForeground @ 0x140294B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x14018D9E0 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 NtUserCanCurrentThreadChangeForeground()
{
  __int64 v0; // rdx
  unsigned int v1; // ebx
  __int64 v2; // rcx
  _BYTE v4[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  EnterSharedCrit(0LL, 1LL);
  v5 = 0LL;
  v4[0] = 0;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v4, v0);
  v1 = (unsigned __int8)RunForegroundAccessCheck(0LL, 1LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v4);
  UserSessionSwitchLeaveCrit(v2);
  return v1;
}
