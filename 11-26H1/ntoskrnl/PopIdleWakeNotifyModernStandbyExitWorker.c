/*
 * XREFs of PopIdleWakeNotifyModernStandbyExitWorker @ 0x140B2A9B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PpmConvertTimeTo @ 0x1404239FC (PpmConvertTimeTo.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopIdleWakeTraceWakeSourceDiagnostic @ 0x140B0C830 (PopIdleWakeTraceWakeSourceDiagnostic.c)
 *     PopIdleWakeConvertIntervalBucketsTo @ 0x140B2ADDC (PopIdleWakeConvertIntervalBucketsTo.c)
 *     PopIdleWakeFreeWakeSourceAccounting @ 0x140B2AE38 (PopIdleWakeFreeWakeSourceAccounting.c)
 *     PopIdleWakeFreeWakeSourceDiagnostic @ 0x140B2AE84 (PopIdleWakeFreeWakeSourceDiagnostic.c)
 *     PopIdleWakeSourceAccountingToDiagnostic @ 0x140B2AF00 (PopIdleWakeSourceAccountingToDiagnostic.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopIdleWakeNotifyModernStandbyExitWorker(_QWORD *P)
{
  char *v2; // rbx
  __int64 v3; // rsi
  ULONGLONG v4; // rbx
  ULONGLONG v5; // r8
  __int16 v6; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v7; // [rsp+34h] [rbp-CCh] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER v9; // [rsp+40h] [rbp-C0h] BYREF
  ULONGLONG v10; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v12[1184]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13[2]; // [rsp+500h] [rbp+400h] BYREF
  ULONGLONG *v14; // [rsp+520h] [rbp+420h]
  __int64 v15; // [rsp+528h] [rbp+428h]
  __int16 *v16; // [rsp+530h] [rbp+430h]
  __int64 v17; // [rsp+538h] [rbp+438h]
  LARGE_INTEGER *v18; // [rsp+540h] [rbp+440h]
  __int64 v19; // [rsp+548h] [rbp+448h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+550h] [rbp+450h]
  __int64 v21; // [rsp+558h] [rbp+458h]
  _BYTE *v22; // [rsp+560h] [rbp+460h]
  __int64 v23; // [rsp+568h] [rbp+468h]
  _QWORD *v24; // [rsp+570h] [rbp+470h]
  __int64 v25; // [rsp+578h] [rbp+478h]
  _BYTE v26[48]; // [rsp+580h] [rbp+480h] BYREF

  memset_0(v12, 0, 0x498uLL);
  PerformanceCounter.QuadPart = 0LL;
  v9.QuadPart = 0LL;
  KeWaitForSingleObject(P + 4768, Executive, 0, 0, 0LL);
  RtlGetInterruptTimePrecise(&PerformanceCounter);
  PopIdleWakeConvertIntervalBucketsTo(6LL, P + 12, v26, 1000LL);
  if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
  {
    v10 = P[4758];
    v15 = 8LL;
    v14 = &v10;
    v6 = 6;
    v16 = &v6;
    v17 = 2LL;
    v18 = (LARGE_INTEGER *)(P + 9);
    p_PerformanceCounter = (LARGE_INTEGER *)&v7;
    v22 = v26;
    v24 = v11;
    v19 = 24LL;
    v7 = 6;
    v21 = 2LL;
    v23 = 48LL;
    v11[0] = 0x1000000LL;
    v25 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)&dword_14004F4C4, 0LL, 0LL, 8u, v13);
  }
  v2 = (char *)(P + 18);
  v3 = 32LL;
  do
  {
    if ( *((_DWORD *)v2 + 200) || *((_DWORD *)v2 + 104) )
    {
      memset_0(v12, 0, 0x498uLL);
      if ( (int)PopIdleWakeSourceAccountingToDiagnostic(v2, v12) >= 0 )
        PopIdleWakeTraceWakeSourceDiagnostic(P[4758], (__int64)v12);
      PopIdleWakeFreeWakeSourceDiagnostic(v12);
      PopIdleWakeFreeWakeSourceAccounting(v2);
    }
    v2 += 1184;
    --v3;
  }
  while ( v3 );
  RtlGetInterruptTimePrecise(&v9);
  v4 = PpmConvertTimeTo(PerformanceCounter.QuadPart - P[4759], 0x3E8uLL);
  v5 = PpmConvertTimeTo(v9.QuadPart - PerformanceCounter.QuadPart, 0x3E8uLL);
  if ( (unsigned int)dword_140E07560 > 5
    && (qword_140E07570 & 0x200000000000LL) != 0
    && (qword_140E07578 & 0x200000000000LL) == qword_140E07578 )
  {
    v11[0] = P[4758];
    v9.QuadPart = v5;
    v14 = v11;
    v15 = 8LL;
    v16 = (__int16 *)&v10;
    v10 = v4;
    v18 = &v9;
    p_PerformanceCounter = &PerformanceCounter;
    v17 = 8LL;
    v19 = 8LL;
    PerformanceCounter.QuadPart = 0x1000000LL;
    v21 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)word_14004F542, 0LL, 0LL, 6u, v13);
  }
  ExFreePoolWithTag(P, 0x67696450u);
}
