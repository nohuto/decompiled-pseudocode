/*
 * XREFs of StorEtwLogoIrpRequestServiceTimeEventData @ 0x1400B0CE8
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     RaidUnitCompleteIrpRequest @ 0x140021CC0 (RaidUnitCompleteIrpRequest.c)
 * Callees:
 *     McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer @ 0x1400B00E8 (McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall StorEtwLogoIrpRequestServiceTimeEventData(__int64 a1, char a2, char a3)
{
  unsigned __int64 v6; // rbx
  LARGE_INTEGER v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rsi
  NTSTATUS result; // eax
  __int64 v11; // rcx
  char v12; // dl
  char v13; // r8
  unsigned __int64 QpcTimeStamp; // [rsp+80h] [rbp-9h] BYREF
  __int64 v15; // [rsp+88h] [rbp-1h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+7h] BYREF
  __int64 v17; // [rsp+98h] [rbp+Fh] BYREF
  GUID v18; // [rsp+A0h] [rbp+17h] BYREF

  QpcTimeStamp = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v17 = 0LL;
  LOBYTE(v6) = 0;
  v18 = 0LL;
  if ( !a2 )
  {
    v15 = *(_QWORD *)(a1 + 168);
    if ( (int)IoGetIoAttributionHandle(a1, &v17) < 0 )
    {
      if ( UseQPCTime )
        v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v7.QuadPart = KeQueryUnbiasedInterruptTime();
      QpcTimeStamp = v7.QuadPart;
      if ( v7.QuadPart <= 0 || v7.QuadPart >= v15 )
        v8 = v7.QuadPart - v15;
      else
        v8 = v7.QuadPart - v15 - 1;
      if ( UseQPCTime )
      {
        if ( PerformanceFrequency.QuadPart && v8 )
          v6 = 10000
             * (1000 * (v8 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
             / PerformanceFrequency.QuadPart
             + 10000
             * (1000 * (v8 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
              + 1000 * (v8 / PerformanceFrequency.QuadPart));
      }
      else
      {
        LOBYTE(v6) = v8;
      }
    }
    else
    {
      QpcTimeStamp = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
      LOBYTE(v6) = QpcTimeStamp - v15;
    }
  }
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 40LL) + 64LL);
  result = IoGetActivityIdIrp(a1, &v18);
  LOBYTE(v11) = *(_BYTE *)(v9 + 104);
  v12 = *(_BYTE *)(v9 + 105);
  v13 = *(_BYTE *)(v9 + 106);
  if ( a2 )
  {
    if ( (byte_140173443 & 2) != 0 )
      return McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer(
               v11,
               &EventLogoPerformanceMeasurementTarget,
               &v18,
               *(_BYTE *)(*(_QWORD *)(v9 + 24) + 56LL),
               v11,
               v12,
               v13,
               a3,
               0,
               0LL,
               1,
               a1,
               a1,
               0,
               0,
               0);
  }
  else if ( (byte_140173443 & 2) != 0 )
  {
    return McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer(
             v11,
             &EventLogoPerformanceMeasurement,
             &v18,
             *(_BYTE *)(*(_QWORD *)(v9 + 24) + 56LL),
             v11,
             v12,
             v13,
             v6,
             0,
             0LL,
             1,
             a1,
             a1,
             0,
             v6,
             v6);
  }
  return result;
}
