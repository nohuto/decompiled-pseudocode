/*
 * XREFs of HalpIommuTraceFault @ 0x1404FC840
 * Callers:
 *     HalpIommuReportIommuFault @ 0x1405A2AB0 (HalpIommuReportIommuFault.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
      qword_140F87B48 = v10;
      qword_140F87B50 = v11;
      dword_140F87B44 = v12;
      HalpIommuEarlyFaultRecords |= 1u;
      qword_140F87B58 = v13;
      KiInsertQueueDpc((ULONG_PTR)&HalpDeviceBlockUnblockPushLock.SystemCallNumber, 0LL, 0LL, 0LL, 0);
    }
    KxReleaseSpinLock(&HalpIommuEarlyFaultRecordsLock);
  }
}
