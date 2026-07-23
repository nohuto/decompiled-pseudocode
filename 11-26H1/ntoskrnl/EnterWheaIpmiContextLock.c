/*
 * XREFs of EnterWheaIpmiContextLock @ 0x1406D82F8
 * Callers:
 *     PnpLogBootFailuresSel @ 0x1405DCA20 (PnpLogBootFailuresSel.c)
 *     WheaSelLogCheckPoint @ 0x1406D8424 (WheaSelLogCheckPoint.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     CheckWheaIpmiContext @ 0x1406D82D0 (CheckWheaIpmiContext.c)
 */

__int64 EnterWheaIpmiContextLock()
{
  __int64 result; // rax
  struct _KLOCK_ENTRIES *v1; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v3; // rax
  volatile unsigned __int8 *v4; // rdx
  AutoBoost *v5; // rbx

  if ( *(_DWORD *)&WheapConfigTableLock.WaitBlockFill11[16] )
    return 2147483665LL;
  result = CheckWheaIpmiContext();
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v3 = (AutoBoost *)KeAbPreAcquire((__int64)&WheapConfigTableLock.ApcStateFill[40], 0LL, 0LL, v1);
    v5 = v3;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&WheapConfigTableLock.ApcStateFill[40], 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&WheapConfigTableLock.ApcStateFill[40],
        v3,
        (__int64)&WheapConfigTableLock.ApcStateFill[40]);
    if ( v5 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v4) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v5 + 33), v4, 1);
      }
      else
      {
        *((_BYTE *)v5 + 10) = 1;
      }
    }
    return 0LL;
  }
  return result;
}
