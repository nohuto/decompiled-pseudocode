/*
 * XREFs of PdcPoNetworkResiliency @ 0x140B56630
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopNetUpdateDsAccounting @ 0x1404FFCB0 (PopNetUpdateDsAccounting.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PdcPoNetworkResiliency(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  BOOL v10; // eax
  __int64 v12; // [rsp+20h] [rbp-28h]
  BOOL v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = a1;
  PopAcquirePolicyLock(a1, a2);
  PopNetUpdateDsAccounting(v2);
  PopReleasePolicyLock(v4, v3, v5, v6, v12);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v7, v8, v9);
  v10 = 1;
  if ( LODWORD(PopPowerAggregatorLock.QuantumTarget) == 1 && BYTE3(PopPowerAggregatorLock.StackBase) )
    v10 = v2 == 0;
  v13 = v10;
  PopReleaseRwLock(&PopPowerAggregatorLock);
  return ZwUpdateWnfStateData((__int64)&WNF_PO_BLUETOOTH_STANDBY_POLICY, (__int64)&v13);
}
