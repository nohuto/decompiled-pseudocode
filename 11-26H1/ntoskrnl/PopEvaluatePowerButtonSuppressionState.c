/*
 * XREFs of PopEvaluatePowerButtonSuppressionState @ 0x140B34328
 * Callers:
 *     PopLidSwitchReliabilityUpdateCallback @ 0x1407CFA80 (PopLidSwitchReliabilityUpdateCallback.c)
 *     PopWnfInSupCallback @ 0x1407DA670 (PopWnfInSupCallback.c)
 *     PopPowerButtonSuppressionInit @ 0x140CD931C (PopPowerButtonSuppressionInit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopRecordSuppressionStates @ 0x14077ECFC (PopRecordSuppressionStates.c)
 *     PopTracePowerButtonSuppressionActionUpdate @ 0x140B34410 (PopTracePowerButtonSuppressionActionUpdate.c)
 */

__int64 PopEvaluatePowerButtonSuppressionState()
{
  char v0; // di
  unsigned int v1; // ebp
  unsigned __int8 v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9

  v0 = dword_140F0D3B8;
  v1 = 0;
  v2 = dword_140F0D3B8;
  if ( !byte_140F0D3A1 && (_BYTE)dword_140F0D3B8 == 1 )
    v2 = 2;
  if ( dword_140F0D3A8 != v2 )
  {
    dword_140F0D3A8 = v2;
    PopReleaseRwLock((struct _KTHREAD *)&PopPowerButtonSuppressionLock);
    v1 = -1073741822;
    if ( qword_140E67840 )
      v1 = guard_dispatch_icall_no_overrides(v2, v3);
    _InterlockedIncrement(&PopPowerButtonSuppressionActionCount);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerButtonSuppressionLock, v3, v4, v5);
  }
  PopTracePowerButtonSuppressionActionUpdate(
    byte_140F0D3A1,
    dword_140F0D3A4,
    dword_140F0D3A8,
    dword_140F0D3B8,
    PopPowerButtonSuppressionActionCount);
  PopReleaseRwLock((struct _KTHREAD *)&PopPowerButtonSuppressionLock);
  LOBYTE(v6) = v2;
  PopRecordSuppressionStates(v0, v6, v7, v8);
  return v1;
}
