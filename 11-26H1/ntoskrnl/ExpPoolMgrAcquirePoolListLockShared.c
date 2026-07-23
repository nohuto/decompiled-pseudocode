/*
 * XREFs of ExpPoolMgrAcquirePoolListLockShared @ 0x1404BB8E4
 * Callers:
 *     ExpPoolMgrGetNextPoolCommon @ 0x140AC540C (ExpPoolMgrGetNextPoolCommon.c)
 *     ExpPoolMgrResolveMaintenanceHint @ 0x140AC54C0 (ExpPoolMgrResolveMaintenanceHint.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall ExpPoolMgrAcquirePoolListLockShared(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v5; // rdi
  LegacyAutoBoost *v6; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = (volatile signed __int64 *)(a1 + 8);
  --CurrentThread->KernelApcDisable;
  v6 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 8, 0LL, 0LL, a4);
  result = _InterlockedCompareExchange64(v5, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v5, 0, v6, (struct _KTHREAD *)v5);
  if ( v6 )
  {
    result = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v6 + 33) |= 2u;
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  return result;
}
