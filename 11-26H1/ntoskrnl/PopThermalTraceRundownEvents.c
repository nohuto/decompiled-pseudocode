/*
 * XREFs of PopThermalTraceRundownEvents @ 0x1404246B4
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140AC29B0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopDiagTraceThermalZoneRundown @ 0x140423E94 (PopDiagTraceThermalZoneRundown.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 */

__int64 PopThermalTraceRundownEvents()
{
  struct _SINGLE_LIST_ENTRY *i; // rbx
  char v1; // r8

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = PpmIdlePolicyLock.SystemAffinityTokenListHead.Next;
        i != &PpmIdlePolicyLock.SystemAffinityTokenListHead;
        i = i->Next )
  {
    v1 = BYTE1(i[8].Next);
    if ( (v1 & 2) != 0 )
      PopDiagTraceThermalZoneRundown(
        (__int64)i[6].Next,
        (unsigned __int16 *)&i[130],
        (v1 & 4) != 0,
        BYTE5(i[8].Next),
        v1 & 1,
        (char)i[10].Next,
        (char)i[9].Next,
        BYTE1(i[9].Next));
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopPolicyDeviceLock);
}
