/*
 * XREFs of ExpPoolMgrAcquirePoolListLockExclusive @ 0x1404CA6E0
 * Callers:
 *     ExpPoolMgrRegisterPool @ 0x14084D700 (ExpPoolMgrRegisterPool.c)
 *     ExpPoolMgrUnregisterPool @ 0x14084D830 (ExpPoolMgrUnregisterPool.c)
 *     ExpPoolMgrSetMaintenanceHint @ 0x140AC5520 (ExpPoolMgrSetMaintenanceHint.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 */

unsigned __int64 __fastcall ExpPoolMgrAcquirePoolListLockExclusive(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 8);
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire(a1 + 8, 0LL, 0LL, a4);
  v7 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v5, (AutoBoost *)result, (__int64)v5);
  if ( v7 )
  {
    result = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *(_BYTE *)(v7 + 33) |= 2u;
    else
      *(_BYTE *)(v7 + 10) = 1;
  }
  return result;
}
