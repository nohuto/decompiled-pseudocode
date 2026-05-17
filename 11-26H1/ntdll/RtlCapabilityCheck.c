/*
 * XREFs of RtlCapabilityCheck @ 0x18000DFF0
 * Callers:
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1801105C0 (RtlCapabilityCheckForSingleSessionSku.c)
 * Callees:
 *     RtlpCapabilityCheckSystemCapability @ 0x18000D958 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCheckTokenCapability @ 0x18000DB10 (RtlCheckTokenCapability.c)
 *     RtlIsMultiSessionSku @ 0x18000DFB0 (RtlIsMultiSessionSku.c)
 *     RtlQueryPerformanceCounter @ 0x18000E5E0 (RtlQueryPerformanceCounter.c)
 *     RtlCheckTokenMembershipEx @ 0x18000E6E0 (RtlCheckTokenMembershipEx.c)
 *     RtlRunOnceBeginInitialize @ 0x18000EC60 (RtlRunOnceBeginInitialize.c)
 *     EtwEventWriteTransfer @ 0x18000F040 (EtwEventWriteTransfer.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800101D0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlRunOnceComplete @ 0x18006EFF0 (RtlRunOnceComplete.c)
 *     RtlReportCriticalFailure @ 0x18006F0F8 (RtlReportCriticalFailure.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016F69C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 __fastcall RtlCapabilityCheck(void *a1, __int64 a2, char *a3)
{
  char v4; // r15
  char v5; // di
  char v6; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  size_t v14; // rax
  int v15; // eax
  int v16; // eax
  bool v17; // zf
  char v18; // di
  int v19; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  char v24; // cl
  char v25; // [rsp+38h] [rbp-D0h] BYREF
  char v26; // [rsp+39h] [rbp-CFh] BYREF
  char v27; // [rsp+3Ah] [rbp-CEh] BYREF
  char v28; // [rsp+3Bh] [rbp-CDh] BYREF
  int v29; // [rsp+3Ch] [rbp-CCh] BYREF
  _BYTE v30[4]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v31; // [rsp+44h] [rbp-C4h]
  __int64 v32; // [rsp+48h] [rbp-C0h]
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v36[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v37; // [rsp+78h] [rbp-90h] BYREF
  __int128 v38; // [rsp+88h] [rbp-80h] BYREF
  __int128 v39; // [rsp+98h] [rbp-70h]
  __int128 v40; // [rsp+A8h] [rbp-60h]
  __int128 v41; // [rsp+B8h] [rbp-50h] BYREF
  void *v42; // [rsp+C8h] [rbp-40h] BYREF
  int v43; // [rsp+D0h] [rbp-38h]
  int v44; // [rsp+D4h] [rbp-34h]
  void *v45; // [rsp+D8h] [rbp-30h]
  int v46; // [rsp+E0h] [rbp-28h]
  int v47; // [rsp+E4h] [rbp-24h]
  __int64 *v48; // [rsp+E8h] [rbp-20h]
  __int64 v49; // [rsp+F0h] [rbp-18h]
  _WORD *v50; // [rsp+F8h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp-8h]
  char *v52; // [rsp+108h] [rbp+0h]
  __int64 v53; // [rsp+110h] [rbp+8h]
  int *v54; // [rsp+118h] [rbp+10h]
  __int64 v55; // [rsp+120h] [rbp+18h]
  char *v56; // [rsp+128h] [rbp+20h]
  __int64 v57; // [rsp+130h] [rbp+28h]
  __int64 v58; // [rsp+138h] [rbp+30h] BYREF
  int v59; // [rsp+140h] [rbp+38h]
  int v60; // [rsp+144h] [rbp+3Ch]
  _BYTE v61[48]; // [rsp+148h] [rbp+40h] BYREF
  unsigned __int8 v62[48]; // [rsp+178h] [rbp+70h] BYREF

  *(_QWORD *)&v40 = 0LL;
  DWORD2(v40) = 0;
  LODWORD(v34) = 0;
  v4 = 0;
  Handle = 0LL;
  v5 = 0;
  v36[0] = 0LL;
  v6 = 0;
  v33 = 0LL;
  LOBYTE(v29) = 0;
  v31 = 0;
  v37 = 0LL;
  LOWORD(v32) = 1280;
  v38 = 0LL;
  v30[0] = 0;
  v39 = 0LL;
  v25 = 0;
  v41 = 0LL;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  RtlQueryPerformanceCounter(v36);
  if ( !a2 || !a3 )
  {
    v11 = -1073741811;
    goto LABEL_20;
  }
  *a3 = 0;
  v11 = RtlDeriveCapabilitySidsFromName(a2, v61, v62);
  if ( v11 < 0 )
    goto LABEL_20;
  if ( !RtlIsMultiSessionSku(v10, v9, v12, v13) )
    goto LABEL_36;
  *((_QWORD *)&v37 + 1) = L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities";
  v14 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities");
  LODWORD(v38) = 48;
  *((_QWORD *)&v38 + 1) = 0LL;
  DWORD2(v39) = 64;
  if ( v14 >= 0xFFFE )
    LOWORD(v14) = -4;
  LOWORD(v37) = v14;
  WORD1(v37) = v14 + 2;
  *(_QWORD *)&v39 = &v37;
  v40 = 0LL;
  if ( (int)NtOpenKey(&Handle, 0x80000000LL, &v38) >= 0 && (int)NtQueryValueKey(Handle, a2, 2LL, &v41, 16, &v34) >= 0 )
  {
    LOBYTE(v29) = 1;
    v58 = 0x500000000000101LL;
    v59 = 18;
    v15 = RtlCheckTokenMembershipEx(a1, &v58, 0LL, &v26);
    v5 = v26;
    v11 = v15;
    if ( v15 < 0 )
      goto LABEL_20;
    if ( v26 )
      goto LABEL_14;
    *(_DWORD *)((char *)&v58 + 2) = v31;
    HIWORD(v58) = v32;
    LOWORD(v58) = 513;
    v59 = 32;
    v60 = 544;
    v16 = RtlCheckTokenMembershipEx(a1, &v58, 0LL, &v25);
    v4 = v25;
    v11 = v16;
    if ( v16 < 0 )
      goto LABEL_20;
    v17 = v25 == 0;
  }
  else
  {
LABEL_36:
    v11 = RtlCheckTokenMembershipEx(a1, v61, 2LL, &v28);
    if ( v11 < 0 )
      goto LABEL_20;
    if ( v28 )
      goto LABEL_14;
    v58 = 0x500000000000101LL;
    v59 = 18;
    v21 = RtlCheckTokenMembershipEx(a1, &v58, 0LL, &v26);
    v5 = v26;
    v11 = v21;
    if ( v21 < 0 )
      goto LABEL_20;
    if ( v26 )
      goto LABEL_14;
    *(_DWORD *)((char *)&v58 + 2) = v31;
    HIWORD(v58) = v32;
    LOWORD(v58) = 513;
    v59 = 32;
    v60 = 544;
    v22 = RtlCheckTokenMembershipEx(a1, &v58, 0LL, &v25);
    v4 = v25;
    v11 = v22;
    if ( v22 < 0 )
      goto LABEL_20;
    if ( v25 )
      goto LABEL_14;
    *(_DWORD *)((char *)&v58 + 2) = v31;
    HIWORD(v58) = v32;
    LOWORD(v58) = 257;
    v59 = 4;
    v23 = RtlCheckTokenMembershipEx(a1, &v58, 2LL, &v27);
    v6 = v27;
    v11 = v23;
    if ( v23 < 0 )
      goto LABEL_20;
    v17 = v27 == 0;
  }
  if ( !v17 )
  {
LABEL_14:
    v11 = RtlCheckTokenCapability(a1, v62, v30);
    if ( v11 < 0 )
      goto LABEL_20;
    *a3 = v30[0];
  }
  if ( *a3 && !v4 && !v5 )
    v11 = RtlpCapabilityCheckSystemCapability((__int64)a1, a2, a3);
LABEL_20:
  if ( Handle )
    NtClose(Handle);
  RtlQueryPerformanceCounter(&v33);
  if ( !v5 )
  {
    v18 = *a3;
    if ( NtCurrentPeb()->ProcessHeap )
    {
      v30[0] = 0;
      v19 = RtlRunOnceBeginInitialize(&RtlpCapChkTelemetryRunOnceCtx, 0LL, 0LL);
      if ( v19 < 0 )
      {
        v24 = 0;
      }
      else
      {
        if ( v19 != 259
          || (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801C5648),
              RtlpPerformanceCounterFrequency = MEMORY[0x7FFE0300],
              v19 = RtlRunOnceComplete(&RtlpCapChkTelemetryRunOnceCtx, 0LL, 0LL),
              v19 >= 0) )
        {
LABEL_26:
          if ( v36[0]
            && v33
            && RtlpPerformanceCounterFrequency
            && _InterlockedExchangeAdd16(&TelemetryEventThrottle, 0xFFFFu) == 1 )
          {
            if ( (unsigned int)dword_1801C5648 > 5
              && (qword_1801C5658 & 0x200000000000LL) != 0
              && (qword_1801C5660 & 0x200000000000LL) == qword_1801C5660 )
            {
              v33 = 1000000 * (v33 - v36[0]) / RtlpPerformanceCounterFrequency;
              v36[1] = 0x200000000000LL;
              v48 = &v33;
              v49 = 8LL;
              v50 = v30;
              v30[0] = v4;
              v52 = &v28;
              v54 = &v29;
              v56 = &v27;
              v42 = off_1801C5650;
              v51 = 1LL;
              v28 = v6;
              v53 = 1LL;
              v55 = 1LL;
              v27 = v18;
              v57 = 1LL;
              v36[0] = 0x50B000000LL;
              v43 = *(unsigned __int16 *)off_1801C5650;
              v45 = &unk_18019BD9C;
              v44 = 2;
              v46 = 105;
              v47 = 1;
              v31 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
              EtwEventWriteTransfer(qword_1801C5668, (unsigned int)v36, 0, 0, 7, (__int64)&v42);
            }
            TelemetryEventThrottle = 100;
          }
          return (unsigned int)v11;
        }
        v24 = 1;
      }
      v30[0] = v24;
      RtlReportCriticalFailure((unsigned int)v19, v30, 1LL);
      goto LABEL_26;
    }
  }
  return (unsigned int)v11;
}
