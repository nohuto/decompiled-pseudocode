/*
 * XREFs of PdcPoNetworkResiliency @ 0x140B59330
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopNetUpdateDsAccounting @ 0x1404F94A0 (PopNetUpdateDsAccounting.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

NTSTATUS __fastcall PdcPoNetworkResiliency(__int64 a1, __int64 a2)
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
  void *ExplicitScope; // [rsp+20h] [rbp-28h]
  BOOL Buffer; // [rsp+58h] [rbp+10h] BYREF

  v2 = a1;
  PopAcquirePolicyLock(a1, a2);
  PopNetUpdateDsAccounting(v2);
  PopReleasePolicyLock(v4, v3, v5, v6, ExplicitScope);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v7, v8, v9);
  v10 = 1;
  if ( (_DWORD)xmmword_140F0D8D0 == 1 && BYTE11(xmmword_140F0D8E0) )
    v10 = v2 == 0;
  Buffer = v10;
  PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
  return ZwUpdateWnfStateData(&WNF_PO_BLUETOOTH_STANDBY_POLICY, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
