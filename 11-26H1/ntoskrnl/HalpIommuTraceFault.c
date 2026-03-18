/*
 * XREFs of HalpIommuTraceFault @ 0x140502F70
 * Callers:
 *     HalpIommuReportIommuFault @ 0x1405A02C0 (HalpIommuReportIommuFault.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void HalpIommuTraceFault(__int64 a1, __int64 a2, int a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  __int64 *v4; // [rsp+58h] [rbp+17h]
  __int64 v5; // [rsp+60h] [rbp+1Fh]
  int *v6; // [rsp+68h] [rbp+27h]
  __int64 v7; // [rsp+70h] [rbp+2Fh]
  va_list v8; // [rsp+78h] [rbp+37h]
  __int64 v9; // [rsp+80h] [rbp+3Fh]
  __int64 v10; // [rsp+A8h] [rbp+67h] BYREF
  __int64 v11; // [rsp+B0h] [rbp+6Fh] BYREF
  int v12; // [rsp+B8h] [rbp+77h] BYREF
  __int64 v13; // [rsp+C0h] [rbp+7Fh] BYREF
  va_list va; // [rsp+C0h] [rbp+7Fh]
  va_list va1; // [rsp+C8h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  v12 = a3;
  v11 = a2;
  v10 = a1;
  if ( HalpDiagnosticEventsRegistered )
  {
    if ( EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_IOMMU_FAULT) )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      v7 = 4LL;
      UserData.Ptr = (ULONGLONG)&v10;
      v5 = 8LL;
      v4 = &v11;
      v9 = 8LL;
      v6 = &v12;
      va_copy(v8, va);
      EtwWriteEx(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_IOMMU_FAULT, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  else
  {
    KxAcquireSpinLock(&HalpIommuEarlyFaultRecordsLock);
    if ( (HalpIommuEarlyFaultRecords & 1) == 0 )
    {
      qword_140F87748 = v10;
      qword_140F87750 = v11;
      dword_140F87744 = v12;
      HalpIommuEarlyFaultRecords |= 1u;
      qword_140F87758 = v13;
      KiInsertQueueDpc((ULONG_PTR)&HalpDeviceBlockUnblockPushLock.SystemCallNumber, 0LL, 0LL, 0LL, 0);
    }
    KxReleaseSpinLock(&HalpIommuEarlyFaultRecordsLock);
  }
}
