/*
 * XREFs of PopTriggerMonitorPowerEvent @ 0x1409FA938
 * Callers:
 *     PoTtmInitiatePowerStateTransition @ 0x1407DF818 (PoTtmInitiatePowerStateTransition.c)
 *     PopProcessSessionDisplayStateChange @ 0x1409FA84C (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopDiagTracePowerStateEvent @ 0x1409FAA84 (PopDiagTracePowerStateEvent.c)
 *     PopPowerAggregatorHandleIntent @ 0x1409FAB24 (PopPowerAggregatorHandleIntent.c)
 */

__int64 __fastcall PopTriggerMonitorPowerEvent(char a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 i; // rax
  unsigned int v6; // esi
  __int64 j; // rdx
  unsigned int *v8; // rbx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int v15; // [rsp+50h] [rbp+18h] BYREF
  int v16; // [rsp+58h] [rbp+20h] BYREF

  v15 = 0;
  v16 = 0;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x3A )
      return (unsigned int)-1073741811;
    if ( PopMonitorEventMapping[2 * i] == a2 )
      break;
  }
  v6 = dword_140FBFA24[2 * i];
  if ( !v6 )
    return (unsigned int)-1073741811;
  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= 0x38 )
      return (unsigned int)-1073741823;
    v8 = (unsigned int *)((char *)&PopPowerEventTable + 48 * j);
    if ( *v8 == v6 )
      break;
  }
  if ( !v8 )
    return (unsigned int)-1073741823;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerEventLock, j, a3, a4);
  LOBYTE(v9) = a1;
  v10 = guard_dispatch_icall_no_overrides(v9, (__int64)&v15);
  v11 = MEMORY[0xFFFFF78000000008];
  v12 = (unsigned int)PopPowerEventTraceCount;
  ++*((_QWORD *)v8 + 4);
  *((_QWORD *)v8 + 5) = v11;
  v13 = 3 * v12;
  PopPowerEventTrace[2 * v13] = v6;
  PopPowerEventTraceCount = ((_BYTE)v12 + 1) & 0x1F;
  dword_140F0D588[2 * v13] = v15;
  dword_140F0D584[2 * v13] = v10;
  qword_140F0D590[v13] = v11;
  if ( v10 >= 0 )
  {
    PopDiagTracePowerStateEvent(v6);
    if ( v15 )
      v10 = PopPowerAggregatorHandleIntent(v15, &v16, v8[4], *v8);
  }
  PopReleaseRwLock((struct _KTHREAD *)&PopPowerEventLock);
  return (unsigned int)v10;
}
