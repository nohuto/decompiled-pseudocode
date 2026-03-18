/*
 * XREFs of PopIdleWakeNotifyModernStandbyExitWorker @ 0x140B284E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     PpmConvertTimeTo @ 0x140429470 (PpmConvertTimeTo.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopIdleWakeTraceWakeSourceDiagnostic @ 0x140B0B0E0 (PopIdleWakeTraceWakeSourceDiagnostic.c)
 *     PopIdleWakeConvertIntervalBucketsTo @ 0x140B2890C (PopIdleWakeConvertIntervalBucketsTo.c)
 *     PopIdleWakeFreeWakeSourceAccounting @ 0x140B28968 (PopIdleWakeFreeWakeSourceAccounting.c)
 *     PopIdleWakeFreeWakeSourceDiagnostic @ 0x140B289B4 (PopIdleWakeFreeWakeSourceDiagnostic.c)
 *     PopIdleWakeSourceAccountingToDiagnostic @ 0x140B28A30 (PopIdleWakeSourceAccountingToDiagnostic.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopIdleWakeNotifyModernStandbyExitWorker(_QWORD *P)
{
  char *v2; // rbx
  __int64 v3; // rsi
  ULONGLONG v4; // rbx
  ULONGLONG v5; // r8
  __int16 v6; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v7; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-C8h] BYREF
  ULONGLONG v9; // [rsp+40h] [rbp-C0h] BYREF
  ULONGLONG v10; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v12[1184]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13[2]; // [rsp+500h] [rbp+400h] BYREF
  ULONGLONG *v14; // [rsp+520h] [rbp+420h]
  __int64 v15; // [rsp+528h] [rbp+428h]
  __int16 *v16; // [rsp+530h] [rbp+430h]
  __int64 v17; // [rsp+538h] [rbp+438h]
  unsigned __int64 *v18; // [rsp+540h] [rbp+440h]
  __int64 v19; // [rsp+548h] [rbp+448h]
  __int16 *v20; // [rsp+550h] [rbp+450h]
  __int64 v21; // [rsp+558h] [rbp+458h]
  _BYTE *v22; // [rsp+560h] [rbp+460h]
  __int64 v23; // [rsp+568h] [rbp+468h]
  _QWORD *v24; // [rsp+570h] [rbp+470h]
  __int64 v25; // [rsp+578h] [rbp+478h]
  _BYTE v26[48]; // [rsp+580h] [rbp+480h] BYREF

  memset_0(v12, 0, 0x498uLL);
  v8 = 0LL;
  v9 = 0LL;
  KeWaitForSingleObject(P + 4768, Executive, 0, 0, 0LL);
  RtlGetInterruptTimePrecise(&v8);
  PopIdleWakeConvertIntervalBucketsTo(6LL, P + 12, v26, 1000LL);
  if ( (unsigned int)dword_140E07598 > 5 && tlgKeywordOn((__int64)&dword_140E07598, 0x400000000000LL) )
  {
    v10 = P[4758];
    v15 = 8LL;
    v14 = &v10;
    v6 = 6;
    v16 = &v6;
    v17 = 2LL;
    v18 = P + 9;
    v20 = &v7;
    v22 = v26;
    v24 = v11;
    v19 = 24LL;
    v7 = 6;
    v21 = 2LL;
    v23 = 48LL;
    v11[0] = 0x1000000LL;
    v25 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07598, (unsigned __int8 *)byte_14004E9E8, 0LL, 0LL, 8u, v13);
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
  v4 = PpmConvertTimeTo(v8 - P[4759], 0x3E8uLL);
  v5 = PpmConvertTimeTo(v9 - v8, 0x3E8uLL);
  if ( (unsigned int)dword_140E07598 > 5
    && (qword_140E075A8 & 0x200000000000LL) != 0
    && (qword_140E075B0 & 0x200000000000LL) == qword_140E075B0 )
  {
    v11[0] = P[4758];
    v9 = v5;
    v14 = v11;
    v15 = 8LL;
    v16 = (__int16 *)&v10;
    v10 = v4;
    v18 = &v9;
    v20 = (__int16 *)&v8;
    v17 = 8LL;
    v19 = 8LL;
    v8 = 0x1000000LL;
    v21 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07598, (unsigned __int8 *)&word_14004EA66, 0LL, 0LL, 6u, v13);
  }
  ExFreePoolWithTag(P, 0x67696450u);
}
