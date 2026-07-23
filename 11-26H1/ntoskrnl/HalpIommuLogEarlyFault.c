/*
 * XREFs of HalpIommuLogEarlyFault @ 0x1405A28DC
 * Callers:
 *     HalpIommuEarlyFaultDpcRoutine @ 0x1405A27D0 (HalpIommuEarlyFaultDpcRoutine.c)
 *     HalpIommuInitSystem @ 0x140BF16E0 (HalpIommuInitSystem.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void HalpIommuLogEarlyFault()
{
  KIRQL v0; // bl
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  __int64 *v2; // [rsp+50h] [rbp+17h]
  __int64 v3; // [rsp+58h] [rbp+1Fh]
  int *v4; // [rsp+60h] [rbp+27h]
  __int64 v5; // [rsp+68h] [rbp+2Fh]
  __int64 *v6; // [rsp+70h] [rbp+37h]
  __int64 v7; // [rsp+78h] [rbp+3Fh]

  if ( HalpDiagnosticEventsRegistered )
  {
    if ( EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_IOMMU_FAULT_INIT) )
    {
      EtwWriteEx(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_IOMMU_FAULT_INIT, 0LL, 0, 0LL, 0LL, 0, 0LL);
      if ( EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_IOMMU_FAULT) )
      {
        v0 = KeAcquireSpinLockRaiseToDpc(&HalpIommuEarlyFaultRecordsLock);
        if ( (HalpIommuEarlyFaultRecords & 1) != 0 )
        {
          UserData.Ptr = (ULONGLONG)&qword_140F87B48;
          *(_QWORD *)&UserData.Size = 8LL;
          v5 = 4LL;
          v2 = &qword_140F87B50;
          v3 = 8LL;
          v4 = &dword_140F87B44;
          v6 = &qword_140F87B58;
          v7 = 8LL;
          EtwWriteEx(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_IOMMU_FAULT, 0LL, 0, 0LL, 0LL, 4u, &UserData);
          HalpIommuEarlyFaultRecords &= ~1u;
        }
        KeReleaseSpinLock(&HalpIommuEarlyFaultRecordsLock, v0);
      }
    }
  }
}
