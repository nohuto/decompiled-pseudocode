/*
 * XREFs of PopRundownPowerLimitRequests @ 0x140AC3600
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140AC29B0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopDiagTracePowerLimitExtension @ 0x1407D711C (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitRequest @ 0x1407D74B0 (PopDiagTracePowerLimitRequest.c)
 */

__int64 __fastcall PopRundownPowerLimitRequests(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 i; // rbx
  __int64 j; // rdi

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock, a2, a3, a4);
  for ( i = PopPowerLimitExtensionList; (__int64 *)i != &PopPowerLimitExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 48) )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)(i + 32), v4, v5, v6);
      PopDiagTracePowerLimitExtension(i, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_POWER_LIMIT_EXTENSION_RUNDOWN);
      for ( j = *(_QWORD *)(i + 16); j != i + 16; j = *(_QWORD *)j )
      {
        if ( *(_BYTE *)(j + 16) )
          PopDiagTracePowerLimitRequest(j, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_POWER_LIMIT_REQUEST_RUNDOWN);
      }
      PopReleaseRwLock((struct _KTHREAD *)(i + 32));
    }
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopPowerLimitExtensionLock);
}
