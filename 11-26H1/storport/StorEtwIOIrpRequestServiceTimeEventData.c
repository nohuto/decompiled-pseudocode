/*
 * XREFs of StorEtwIOIrpRequestServiceTimeEventData @ 0x1400B0A6C
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     RaidUnitCompleteIrpRequest @ 0x140021CC0 (RaidUnitCompleteIrpRequest.c)
 * Callees:
 *     McTemplateK0xpuupuuuuuqxx_EtwWriteTransfer @ 0x1400B0228 (McTemplateK0xpuupuuuuuqxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall StorEtwIOIrpRequestServiceTimeEventData(__int64 a1, char a2, unsigned __int64 a3)
{
  char v6; // si
  int v7; // r12d
  LARGE_INTEGER v8; // rax
  unsigned __int64 v9; // r8
  NTSTATUS result; // eax
  __int64 v11; // r15
  __int64 v12; // r14
  const EVENT_DESCRIPTOR *v13; // rdx
  char v14; // [rsp+48h] [rbp-51h]
  char v15; // [rsp+50h] [rbp-49h]
  char v16; // [rsp+58h] [rbp-41h]
  int v17; // [rsp+68h] [rbp-31h]
  unsigned __int64 v18; // [rsp+78h] [rbp-21h]
  unsigned __int64 QpcTimeStamp; // [rsp+80h] [rbp-19h] BYREF
  __int64 v20; // [rsp+88h] [rbp-11h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp-9h] BYREF
  __int64 v22; // [rsp+98h] [rbp-1h] BYREF
  GUID v23; // [rsp+A0h] [rbp+7h] BYREF

  QpcTimeStamp = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v22 = 0LL;
  v6 = 0;
  v7 = 0;
  v23 = 0LL;
  if ( !a2 )
  {
    v20 = *(_QWORD *)(a1 + 168);
    if ( (int)IoGetIoAttributionHandle(a1, &v22) < 0 )
    {
      if ( UseQPCTime )
        v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v8.QuadPart = KeQueryUnbiasedInterruptTime();
      QpcTimeStamp = v8.QuadPart;
      if ( v8.QuadPart <= 0 || v8.QuadPart >= v20 )
        v9 = v8.QuadPart - v20;
      else
        v9 = v8.QuadPart - v20 - 1;
      if ( UseQPCTime )
      {
        a3 = 0LL;
        if ( PerformanceFrequency.QuadPart && v9 )
          a3 = 10000
             * (1000 * (v9 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
             / PerformanceFrequency.QuadPart
             + 10000
             * (1000 * (v9 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
              + 1000 * (v9 / PerformanceFrequency.QuadPart));
      }
      else
      {
        a3 = v9;
      }
    }
    else
    {
      QpcTimeStamp = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
      a3 = QpcTimeStamp - v20;
    }
  }
  result = StorRequestThresholdTime;
  if ( StorRequestThresholdTime && a3 < StorRequestThresholdTime )
    return result;
  v11 = *(_QWORD *)(a1 + 184);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 40) + 64LL);
  result = IoGetActivityIdIrp(a1, &v23);
  if ( *(_BYTE *)v11 == 3 )
  {
    v6 = 40;
  }
  else
  {
    if ( *(_BYTE *)v11 != 4 )
    {
      if ( *(_BYTE *)v11 == 9 )
        v6 = 53;
      goto LABEL_25;
    }
    v6 = 42;
  }
  v7 = *(_DWORD *)(v11 + 8);
LABEL_25:
  if ( a2 )
  {
    if ( (byte_140173441 & 1) == 0 )
      return result;
    v18 = a3;
    v17 = v7;
    v16 = *(_BYTE *)(v12 + 106);
    v15 = *(_BYTE *)(v12 + 105);
    v14 = *(_BYTE *)(v12 + 104);
    v13 = (const EVENT_DESCRIPTOR *)&EventIOPerformanceMeasurementTarget;
  }
  else
  {
    if ( (byte_140173441 & 1) == 0 )
      return result;
    v18 = a3;
    v17 = v7;
    v16 = *(_BYTE *)(v12 + 106);
    v15 = *(_BYTE *)(v12 + 105);
    v14 = *(_BYTE *)(v12 + 104);
    v13 = (const EVENT_DESCRIPTOR *)&EventIOPerformanceMeasurement;
  }
  return McTemplateK0xpuupuuuuuqxx_EtwWriteTransfer(
           0LL,
           v13,
           &v23,
           a3,
           a1,
           v6,
           1,
           a1,
           *(_BYTE *)(*(_QWORD *)(v12 + 24) + 56LL),
           v14,
           v15,
           v16,
           0,
           v17,
           0LL,
           v18,
           QpcTimeStamp);
}
