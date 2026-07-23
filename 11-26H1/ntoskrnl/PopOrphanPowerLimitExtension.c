/*
 * XREFs of PopOrphanPowerLimitExtension @ 0x1407CE0C0
 * Callers:
 *     PopPowerLimitPnpNotification @ 0x1407CE1B0 (PopPowerLimitPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopGetDope @ 0x140427090 (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x14060A834 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDiagTracePowerLimitRequest @ 0x1407D74B0 (PopDiagTracePowerLimitRequest.c)
 */

void __fastcall PopOrphanPowerLimitExtension(unsigned __int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  unsigned __int64 i; // rdi
  bool v12; // zf
  unsigned __int64 v13; // rcx
  unsigned __int64 **v14; // rax

  if ( a1 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock, a2, a3, a4);
    PopAcquireRwLockExclusive(a1 + 4, v5, v6, v7);
    if ( a1[7] )
    {
      for ( i = a1[2]; (unsigned __int64 *)i != a1 + 2; i = *(_QWORD *)i )
      {
        if ( *(_BYTE *)(i + 16) )
        {
          v12 = *(_BYTE *)(i + 48) == 0;
          *(_BYTE *)(i + 16) = 0;
          if ( !v12 )
          {
            PopThermalUpdateTelemetryClientCount(0, v8, v9, v10);
            *(_BYTE *)(i + 48) = 0;
          }
          PopDiagTracePowerLimitRequest(i, POP_ETW_EVENT_POWER_LIMIT_REQUEST_REMOVE);
        }
      }
      *(_QWORD *)(PopGetDope(a1[7]) + 72) = 0LL;
      v13 = *a1;
      if ( *(unsigned __int64 **)(*a1 + 8) != a1 || (v14 = (unsigned __int64 **)a1[1], *v14 != a1) )
        __fastfail(3u);
      *v14 = (unsigned __int64 *)v13;
      *(_QWORD *)(v13 + 8) = v14;
      *a1 = 0LL;
      a1[7] = 0LL;
    }
    PopReleaseRwLock((struct _KTHREAD *)(a1 + 4));
    PopReleaseRwLock((struct _KTHREAD *)&PopPowerLimitExtensionLock);
  }
}
