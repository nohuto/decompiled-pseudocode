/*
 * XREFs of PnpGetCurrentlyActiveWorkerThread @ 0x1405DC810
 * Callers:
 *     PnpBugcheckPowerTimeout @ 0x1405DC7A4 (PnpBugcheckPowerTimeout.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1404144B0 (RtlLookupElementGenericTableFullAvl.c)
 */

__int64 __fastcall PnpGetCurrentlyActiveWorkerThread(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  KIRQL v7; // al
  KIRQL v8; // r15
  __int64 *v9; // rax
  _QWORD Buffer[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v12[9]; // [rsp+30h] [rbp-48h]
  TABLE_SEARCH_RESULT SearchResult; // [rsp+88h] [rbp+10h] BYREF
  PVOID NodeOrParent; // [rsp+90h] [rbp+18h] BYREF

  v1 = 0LL;
  v12[0] = *(_QWORD *)&PnpDelayedRemoveWorkerThread;
  v3 = 0LL;
  v12[1] = *(_QWORD *)&PnpDeviceEventThread;
  v12[2] = *(_QWORD *)&PnpDeviceActionThread;
  while ( (unsigned int)v3 < 3 )
  {
    v4 = v12[v3];
    if ( v4 )
    {
      Buffer[1] = v12[v3];
      v5 = v4;
      if ( v1 )
        v5 = v1;
      v6 = 0LL;
      Buffer[0] = 0LL;
      v1 = v5;
      v7 = KeAcquireSpinLockRaiseToDpc(&PnpDeviceActivationTableSpinLock);
      NodeOrParent = 0LL;
      SearchResult = TableEmptyTree;
      v8 = v7;
      v9 = (__int64 *)RtlLookupElementGenericTableFullAvl(
                        &PnpDeviceActivationTable,
                        Buffer,
                        &NodeOrParent,
                        &SearchResult);
      if ( v9 )
        v6 = *v9;
      KeReleaseSpinLock(&PnpDeviceActivationTableSpinLock, v8);
      *a1 = v6;
      if ( v6 )
        return v4;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  return v1;
}
