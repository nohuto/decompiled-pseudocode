/*
 * XREFs of EtwpStartLogger @ 0x140A6E1B4
 * Callers:
 *     EtwpStartTrace @ 0x140A6E138 (EtwpStartTrace.c)
 *     EtwStartAutoLogger @ 0x140B42448 (EtwStartAutoLogger.c)
 *     EtwpStartBootLogger @ 0x140CE1F84 (EtwpStartBootLogger.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218100 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140257080 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PsGetSessionId @ 0x140447280 (PsGetSessionId.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x1404599C0 (_tlgWriteAgg.c)
 *     EtwpFreeApcPool @ 0x1404D9704 (EtwpFreeApcPool.c)
 *     EtwpStartLoggerThread @ 0x1404E4D30 (EtwpStartLoggerThread.c)
 *     EtwpSetQpcDeltaTracking @ 0x1404EEDB4 (EtwpSetQpcDeltaTracking.c)
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 *     EtwpSetPartitionContext @ 0x1406C77EC (EtwpSetPartitionContext.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     EtwpValidateFlagExtension @ 0x14077C6AC (EtwpValidateFlagExtension.c)
 *     EtwpEventWriteTemplateSessionAndHandle @ 0x1408258E8 (EtwpEventWriteTemplateSessionAndHandle.c)
 *     EtwpEventWriteTemplateSessionDesiredAccess @ 0x140825978 (EtwpEventWriteTemplateSessionDesiredAccess.c)
 *     EtwpEventWriteTemplateSessionFromCapturedData @ 0x140825A10 (EtwpEventWriteTemplateSessionFromCapturedData.c)
 *     EtwpEventWriteTemplateSessionMaxLoggers @ 0x140825ADC (EtwpEventWriteTemplateSessionMaxLoggers.c)
 *     EtwpUpdateTagFilter @ 0x140827634 (EtwpUpdateTagFilter.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14091EFC0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckGuidAccess @ 0x1409207F8 (EtwpCheckGuidAccess.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140920D60 (EtwpGetSecurityDescriptorByGuid.c)
 *     SeCreateClientSecurity @ 0x140929880 (SeCreateClientSecurity.c)
 *     EtwpAccessCheck @ 0x140931F90 (EtwpAccessCheck.c)
 *     EtwpReleaseLoggerContext @ 0x14093D918 (EtwpReleaseLoggerContext.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     EtwpSendSessionNotification @ 0x140A1545C (EtwpSendSessionNotification.c)
 *     EtwpStopLoggerInstance @ 0x140A15968 (EtwpStopLoggerInstance.c)
 *     EtwpCreateLogFile @ 0x140A15DA4 (EtwpCreateLogFile.c)
 *     EtwpGenerateFileName @ 0x140A1751C (EtwpGenerateFileName.c)
 *     EtwpUpdatePerProcessTracing @ 0x140A6C4E8 (EtwpUpdatePerProcessTracing.c)
 *     EtwpFreeLoggerContext @ 0x140A6CBB4 (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x140A6CF98 (EtwpFreeTraceBufferPool.c)
 *     EtwpInitializeLoggerSecurityDescriptor @ 0x140A6D3B8 (EtwpInitializeLoggerSecurityDescriptor.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140A6D418 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpAllocateTraceBufferPool @ 0x140A6D988 (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitializeTimeStamp @ 0x140A6DB58 (EtwpInitializeTimeStamp.c)
 *     EtwpInitLoggerContext @ 0x140A6DD54 (EtwpInitLoggerContext.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140A6E09C (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpCheckForStackTracingExtension @ 0x140A6F1B4 (EtwpCheckForStackTracingExtension.c)
 *     EtwpGetFlagExtension @ 0x140A6F278 (EtwpGetFlagExtension.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140A6FDA8 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpEventWriteTemplateSession @ 0x140A7010C (EtwpEventWriteTemplateSession.c)
 *     EtwpCaptureString @ 0x140A70314 (EtwpCaptureString.c)
 *     RtlCreateUnicodeString @ 0x140A70410 (RtlCreateUnicodeString.c)
 *     EtwpLookupLoggerIdByName @ 0x140A7099C (EtwpLookupLoggerIdByName.c)
 *     ExUuidCreate @ 0x140A76B60 (ExUuidCreate.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140B35598 (EtwpEventWriteTemplateAdmin.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpStartLogger(__int64 a1, __int64 a2)
{
  unsigned int v4; // r15d
  int FileName; // edi
  int v6; // ecx
  int v7; // r8d
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rdi
  unsigned int v12; // ebx
  bool v13; // zf
  unsigned int *inited; // rsi
  __int64 FlagExtension; // rax
  __int64 v16; // r11
  __int64 v17; // rbx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  int v27; // ecx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  struct _KLOCK_ENTRIES *v34; // r9
  unsigned __int64 CurrentServerSilo; // rax
  unsigned int i; // ebx
  unsigned int *v38; // rax
  __int64 v39; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v40; // rcx
  unsigned int v41; // eax
  __int64 v42; // rcx
  int LogFile; // eax
  unsigned int v44; // eax
  unsigned int v45; // edx
  void *v46; // rcx
  const WCHAR *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // eax
  __int64 Pool2; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // r8
  unsigned int v56; // edi
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  char v61; // al
  unsigned __int8 v62; // [rsp+40h] [rbp-C0h]
  unsigned int v63; // [rsp+44h] [rbp-BCh]
  unsigned int v64; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v66; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h]
  __int64 v68; // [rsp+70h] [rbp-90h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v70; // [rsp+80h] [rbp-80h] BYREF
  UUID Buf1; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR ClientSecurityQos; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+B0h] [rbp-50h] BYREF
  PSECURITY_DESCRIPTOR *p_SecurityDescriptor; // [rsp+D0h] [rbp-30h]
  __int64 v75; // [rsp+D8h] [rbp-28h]
  __int64 *v76; // [rsp+E0h] [rbp-20h]
  __int64 v77; // [rsp+E8h] [rbp-18h]
  __int64 *v78; // [rsp+F0h] [rbp-10h]
  __int64 v79; // [rsp+F8h] [rbp-8h]

  v63 = 8;
  ClientSecurityQos.Ptr = 0LL;
  ClientSecurityQos.Size = 0;
  P = 0LL;
  SecurityDescriptor = 0LL;
  LODWORD(v66) = 0;
  LODWORD(v68) = 0;
  Buf1 = 0LL;
  v70 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v70, 0LL);
  v4 = *(_DWORD *)(a2 + 64) & 0x9DECE5FF;
  v64 = 3;
  if ( (*(_BYTE *)(a2 + 64) & 3) == 0 && ((*(_BYTE *)(a2 + 64) & 8) != 0 || (*(_BYTE *)(a2 + 64) & 4) != 0) )
    v4 = *(_DWORD *)(a2 + 64) & 0x9DECE5FE | 1;
  if ( (v4 & 0x40000) != 0 )
    v4 |= 0x80u;
  if ( (v4 & 0x80000) != 0 && (v4 & 0x1000000) != 0 )
    v4 &= ~0x1000000u;
  if ( !*(_WORD *)(a2 + 144) || !*(_QWORD *)(a2 + 152) )
    goto LABEL_14;
  FileName = EtwpCaptureString(a2 + 144, &DestinationString);
  if ( FileName )
  {
LABEL_15:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_START_FAILED) )
      EtwpEventWriteTemplateAdmin(
        v6,
        (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
        v7,
        (unsigned int)&DestinationString,
        (__int64)&v70,
        FileName,
        v4);
    if ( DestinationString.Buffer )
      ExFreePool(DestinationString.Buffer);
    if ( v70.Buffer )
      ExFreePool(v70.Buffer);
    if ( P && P != (PVOID)WmipDefaultAccessSd && P != EtwpDefaultTraceSecurityDescriptor )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)FileName;
  }
  if ( (v4 & 0x400) != 0 )
  {
    if ( !*(_QWORD *)(a2 + 136) && (v4 & 0xF) == 0 )
    {
      if ( (v4 & 0x100) != 0 )
        v4 &= ~0x100u;
      if ( *(_DWORD *)(a2 + 68) )
        *(_DWORD *)(a2 + 68) = 0;
      if ( *(_DWORD *)(a2 + 76) )
        *(_DWORD *)(a2 + 76) = 0;
      goto LABEL_12;
    }
LABEL_14:
    FileName = -1073741811;
    goto LABEL_15;
  }
LABEL_12:
  if ( (v4 & 3) == 3 || (v4 & 0xC000) == 0xC000 || (v4 & 0x500) == 0 && !*(_QWORD *)(a2 + 136) )
    goto LABEL_14;
  if ( (v4 & 2) != 0 && ((v4 & 4) != 0 || !*(_DWORD *)(a2 + 60)) )
    goto LABEL_14;
  if ( (v4 & 0x20) != 0 && (!*(_DWORD *)(a2 + 60) || (*(_DWORD *)(a2 + 64) & 0xC) != 0) )
    goto LABEL_14;
  if ( (v4 & 0x40) != 0
    && ((*(_DWORD *)(a2 + 112) & 2) == 0 || (v4 & 0x402) == 0 && ((v4 & 0x100) == 0 || *(_QWORD *)(a2 + 136))) )
  {
    goto LABEL_14;
  }
  if ( (v4 & 0xC00000) == 0xC00000
    || (v4 & 8) != 0
    && (!*(_QWORD *)(a2 + 136)
     || (v4 & 2) != 0
     || !*(_DWORD *)(a2 + 60)
     || (*(_DWORD *)(a2 + 112) & 2) != 0
     || (*(_DWORD *)(a2 + 64) & 0x2000000) != 0
     || !memcmp((const void *)(a2 + 24), &SystemTraceControlGuid, 0x10uLL)
     || !memcmp((const void *)(a2 + 24), CKCLGuid, 0x10uLL)
     || (v4 & 4) != 0) )
  {
    goto LABEL_14;
  }
  v8 = *(_DWORD *)(a2 + 64);
  if ( (v8 & 0x3000000) == 0x3000000 || (v8 & 0x4000000) != 0 && (v8 & 0x106) != 0 )
    goto LABEL_14;
  if ( (v8 & 0x10000) != 0 )
    goto LABEL_14;
  if ( (*(_BYTE *)(a2 + 80) & 4) != 0 )
  {
    if ( !PspSiloMonitorLock.KernelWaitTime )
    {
      FileName = -1073741637;
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LARGE_MDL_NOT_SUPPORTED) )
        EtwpEventWriteTemplateSessionFromCapturedData(
          v53,
          v52,
          a2 + 24,
          *(_DWORD *)(a2 + 64),
          &DestinationString.Length,
          &v70.Length);
      goto LABEL_15;
    }
    if ( (v8 & 0x400) == 0 || (v8 & 0x1000000) != 0 )
      goto LABEL_14;
  }
  v9 = *(_DWORD *)(a2 + 112);
  if ( v9 < 0 )
  {
    if ( EtwpBootPhase )
      goto LABEL_14;
    if ( (v9 & 2) == 0 )
      goto LABEL_14;
    if ( (*(_DWORD *)(a2 + 64) & 0x2000000) == 0 )
      goto LABEL_14;
    v54 = *(_DWORD *)(a2 + 40);
    if ( v54 == 2 || v54 == 4 || !memcmp((const void *)(a2 + 24), &NullGuid, 0x10uLL) )
      goto LABEL_14;
  }
  FileName = EtwpValidateFlagExtension((unsigned int *)a2);
  if ( FileName < 0 )
    goto LABEL_15;
  v10 = ((v4 & 0x100 | 0x400) >> 3) | 0x40;
  if ( !*(_WORD *)(a2 + 128) )
    v10 = (v4 & 0x100 | 0x400) >> 3;
  if ( !(unsigned int)EtwpLookupLoggerIdByName(a1, &DestinationString, &v66) )
    goto LABEL_212;
  if ( !memcmp((const void *)(a2 + 24), &NullGuid, 0x10uLL) )
  {
    FileName = ExUuidCreate(&Buf1);
    if ( FileName < 0 )
      goto LABEL_15;
  }
  else
  {
    Buf1 = *(UUID *)(a2 + 24);
  }
  if ( (v4 & 0xC00000) == 0 )
  {
    if ( KeGetCurrentThread()->PreviousMode
      && (unsigned int)PsGetSessionId((__int64)KeGetCurrentThread()->ApcState.Process) )
    {
      v4 |= 0x400000u;
    }
    else
    {
      v4 |= 0x800000u;
    }
  }
  v11 = *(_QWORD *)(a1 + 712);
  v66 = v11;
  v12 = 0;
  if ( !memcmp(&Buf1, &SystemTraceControlGuid, 0x10uLL) || !memcmp(&Buf1, CKCLGuid, 0x10uLL) )
  {
    RtlFreeAnsiString(&DestinationString);
    if ( !memcmp(&Buf1, &SystemTraceControlGuid, 0x10uLL) )
    {
      v63 = 0;
      v47 = L"NT Kernel Logger";
    }
    else
    {
      v12 = 2;
      v63 = 1;
      v47 = L"Circular Kernel Context Logger";
    }
    v64 = v12;
    if ( !RtlCreateUnicodeString(&DestinationString, v47) )
      goto LABEL_268;
    v4 |= 0x80u;
    if ( (v4 & 0x1000000) == 0 )
    {
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8LL * v12), v11 | 1, 1LL) == 1;
LABEL_51:
      if ( v13 )
        goto LABEL_52;
LABEL_212:
      FileName = -1073741771;
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( !memcmp(&Buf1, &GlobalLoggerGuid, 0x10uLL) )
  {
    v12 = 1;
    v64 = 1;
    if ( !EtwpGetFlagExtension(a2, 1LL) )
    {
LABEL_50:
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8), v11 | 1, 1LL) == 1;
      goto LABEL_51;
    }
    if ( (v4 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger") )
      {
        v63 = 0;
        goto LABEL_50;
      }
LABEL_268:
      FileName = -1073741801;
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( !memcmp(&Buf1, AuditLoggerGuid, 0x10uLL) )
  {
    if ( (v4 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( RtlCreateUnicodeString(&DestinationString, L"Eventlog-Security") )
      {
        v4 |= 0x80u;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 24), v11 | 1, 1LL) == 1 )
        {
          v12 = 3;
          goto LABEL_52;
        }
        goto LABEL_212;
      }
      goto LABEL_268;
    }
    goto LABEL_14;
  }
  if ( !wcsicmp(DestinationString.Buffer, L"Eventlog-Security") && memcmp(&Buf1, AuditLoggerGuid, 0x10uLL) )
    goto LABEL_212;
  for ( i = 4; i < *(_DWORD *)(a1 + 16); ++i )
  {
    v38 = EtwpAcquireLoggerContextByLoggerId(a1, i, 0);
    if ( v38 )
    {
      v39 = *(_QWORD *)(v38 + 69) - *(_QWORD *)&Buf1.Data1;
      if ( !v39 )
        v39 = *(_QWORD *)(v38 + 71) - *(_QWORD *)Buf1.Data4;
      v13 = v39 == 0;
      v40 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(*((_QWORD *)v38 + 170) + 704LL) + 8LL * *v38);
      if ( v13 )
      {
        ExReleaseRundownProtectionCacheAwareEx(v40, 1u);
        break;
      }
      ExReleaseRundownProtectionCacheAwareEx(v40, 1u);
    }
  }
  v41 = *(_DWORD *)(a1 + 16);
  if ( i < v41 )
    goto LABEL_212;
  v12 = 4;
  v64 = 4;
  if ( v41 > 4 )
  {
    do
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8LL * v12), v11 | 1, 1LL) == 1 )
        break;
      ++v12;
    }
    while ( v12 < *(_DWORD *)(a1 + 16) );
    v64 = v12;
  }
  if ( v12 >= *(_DWORD *)(a1 + 16) )
  {
    if ( !stru_140E3E928.WaitBlockFill7[145] )
    {
      ClientSecurityQos.Ptr = a1 + 16;
      stru_140E3E928.WaitBlockFill7[145] = 1;
      *(_QWORD *)&ClientSecurityQos.Size = 4LL;
      EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_OUT_OF_LOGGER_SLOTS, 0LL, 1u, &ClientSecurityQos);
      if ( (unsigned int)dword_140E08F48 > 5 && tlgKeywordOn((__int64)&dword_140E08F48, 0x200000000000LL) )
      {
        SecurityDescriptor = (PSECURITY_DESCRIPTOR)1;
        p_SecurityDescriptor = &SecurityDescriptor;
        v75 = 8LL;
        v76 = &v68;
        LODWORD(v66) = *(_DWORD *)(a1 + 16);
        v78 = &v66;
        v68 = 0x1000000LL;
        v77 = 8LL;
        v79 = 4LL;
        tlgWriteAgg((__int64)&dword_140E08F48, (unsigned __int8 *)&byte_1400538BF, v55, 5u, &v73);
      }
    }
    FileName = -1073741670;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_NOT_ENOUGH_LOGGER_SLOTS) )
      EtwpEventWriteTemplateSessionMaxLoggers(
        v42,
        &ETW_EVENT_NOT_ENOUGH_LOGGER_SLOTS,
        &DestinationString.Length,
        *(_DWORD *)(a1 + 16));
    goto LABEL_15;
  }
LABEL_52:
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8LL * v12), 1u);
  if ( *(int *)(a2 + 112) >= 0 )
  {
    EtwpGetSecurityDescriptorByGuid(&Buf1.Data1, &SecurityDescriptor);
    P = SecurityDescriptor;
    FileName = EtwpAccessCheck(SecurityDescriptor, v10, 0LL);
    if ( FileName < 0 )
    {
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE_ACCESS_DENIED) )
        EtwpEventWriteTemplateSessionDesiredAccess(v49, v48, &DestinationString.Length, (__int64)&Buf1, v10);
      goto LABEL_186;
    }
  }
  if ( !memcmp(&HeapGuid, &Buf1, 0x10uLL) )
    v62 = 0;
  else
    v62 = memcmp(&CritSecGuid, &Buf1, 0x10uLL) != 0 ? 9 : 1;
  if ( (*(_DWORD *)(a2 + 64) & 0x2000000) != 0 && v63 == 8 )
  {
    if ( *(int *)(a2 + 112) >= 0 )
    {
      FileName = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u);
      if ( FileName < 0 )
        goto LABEL_186;
    }
    v56 = 2;
    v63 = 2;
    while ( _bittest((const signed __int32 *)(a1 + 4520), v56) )
    {
      v63 = ++v56;
      if ( v56 >= 8 )
      {
        v63 = v56;
        if ( v56 != 8 )
          break;
        FileName = -1073741670;
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_NOT_ENOUGH_SYSTEM_LOGGER_SLOTS) )
          EtwpEventWriteTemplateSessionMaxLoggers(
            v57,
            &ETW_EVENT_NOT_ENOUGH_SYSTEM_LOGGER_SLOTS,
            &DestinationString.Length,
            8);
        goto LABEL_186;
      }
    }
  }
  inited = (unsigned int *)EtwpInitLoggerContext((const void **)&DestinationString, v4, *(_DWORD *)(a2 + 112));
  if ( !inited )
  {
    FileName = -1073741801;
LABEL_186:
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8LL * v12), 1u);
    _InterlockedExchange64((volatile __int64 *)(v66 + 8LL * v12), 1LL);
    goto LABEL_15;
  }
  FlagExtension = EtwpGetFlagExtension(a2, 6LL);
  v17 = FlagExtension;
  if ( FlagExtension )
  {
    if ( 4 * *(_WORD *)FlagExtension == 12 )
    {
      v58 = EtwpSetPartitionContext((__int64 *)inited + 198, *(_QWORD *)(FlagExtension + 4));
      v16 = 0LL;
      FileName = v58;
      if ( v58 < 0 )
      {
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_INVALID_MEMORY_PARTITION) )
          EtwpEventWriteTemplateSessionAndHandle(v60, v59, &DestinationString.Length, *(_QWORD *)(v17 + 4));
        goto LABEL_177;
      }
    }
  }
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    v16 = 0LL;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = (wchar_t *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  *(UUID *)(inited + 69) = Buf1;
  inited[73] = *(_DWORD *)(a2 + 60);
  if ( (*(_BYTE *)(a2 + 80) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x10u);
  inited[50] = *(_DWORD *)(a2 + 40);
  if ( (*(_BYTE *)(a2 + 80) & 2) != 0 )
  {
    FileName = EtwpSetQpcDeltaTracking((__int64)inited);
    if ( FileName < 0 )
      goto LABEL_177;
  }
  if ( (*(_BYTE *)(a2 + 80) & 8) != 0 )
    inited[204] |= 0x40000000u;
  v18 = *(_DWORD *)(a2 + 68);
  if ( v18 )
  {
    inited[52] = v18;
  }
  else if ( (v4 & 0x100) != 0 )
  {
    inited[52] = (v4 & 0x10) != 0 ? 1000 : 1;
  }
  v19 = *(_DWORD *)(a2 + 76);
  v20 = v19;
  if ( v19 && (inited[52] > (unsigned int)v16 || v19 < 0) )
  {
    *(_DWORD *)(a2 + 76) = v16;
    v20 = v16;
  }
  v21 = v64;
  FileName = v16;
  *inited = v64;
  inited[53] = v20;
  *((_QWORD *)inited + 170) = a1;
  if ( *(_WORD *)(a2 + 128) > (unsigned __int16)v16 && *(_QWORD *)(a2 + 136) != v16 )
  {
    v50 = EtwpCaptureString(a2 + 128, &v70);
    LODWORD(v16) = 0;
    FileName = v50;
    if ( v50 < 0 )
      goto LABEL_177;
  }
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    inited[74] = *(_DWORD *)(a2 + 96);
    *(_DWORD *)(a2 + 96) = v16;
  }
  if ( (inited[3] & 8) != 0 )
  {
    *(UNICODE_STRING *)(inited + 42) = v70;
    RtlInitUnicodeString(&v70, 0LL);
    FileName = EtwpGenerateFileName(
                 (unsigned __int16 *)inited + 84,
                 (volatile signed __int32 *)inited + 74,
                 (UNICODE_STRING *)(inited + 38));
    if ( FileName < 0 )
      goto LABEL_177;
    v21 = v64;
  }
  else
  {
    *(UNICODE_STRING *)(inited + 38) = v70;
    RtlInitUnicodeString(&v70, 0LL);
  }
  if ( *(int *)(a2 + 112) >= 0 )
  {
    ClientSecurityQos.Ptr = 0x20000000CLL;
    LOWORD(ClientSecurityQos.Size) = 257;
    FileName = SeCreateClientSecurity(
                 KeGetCurrentThread(),
                 (PSECURITY_QUALITY_OF_SERVICE)&ClientSecurityQos,
                 0,
                 (PSECURITY_CLIENT_CONTEXT)(inited + 176));
  }
  if ( FileName < 0 )
    goto LABEL_177;
  if ( (inited[3] & 0x100) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 8u);
  else
    _InterlockedAnd((volatile signed __int32 *)inited + 204, 0xFFFFFFF7);
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 2u);
  if ( *(int *)(a2 + 112) < 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x80000000);
  if ( (*(_DWORD *)(a2 + 112) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 1u);
  if ( (*(_DWORD *)(a2 + 112) & 0x4000) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x4000u);
  EtwpInitializeTimeStamp((__int64)inited, v22);
  if ( v63 < 8 )
  {
    inited[3] |= 0x2000000u;
    *((_BYTE *)inited + 818) = v63;
    if ( v63 <= 1 )
      _InterlockedOr((volatile signed __int32 *)inited + 204, 0x20u);
    *(_BYTE *)(a1 + 2LL * v63 + 4504) = v21;
    if ( inited[50] - 1 >= 4 )
      v61 = 1;
    else
      v61 = *((_BYTE *)inited + 200);
    *(_BYTE *)(a1 + 2LL * v63 + 4505) = v61;
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 4520), v63);
  }
  FileName = EtwpCheckForStackTracingExtension(a2, inited, v23);
  if ( FileName < 0 )
    goto LABEL_177;
  v24 = *(_DWORD *)(a2 + 52);
  if ( v24 )
    inited[56] = v24;
  v25 = *(_DWORD *)(a2 + 56);
  if ( v25 )
    inited[59] = v25;
  v26 = *(_DWORD *)(a2 + 48);
  if ( v26 )
  {
    if ( v26 > 0x4000 )
    {
      *(_DWORD *)(a2 + 48) = 0x4000;
      v26 = 0x4000;
    }
    inited[1] = v26 << 10;
  }
  if ( (*(_BYTE *)(a2 + 80) & 4) != 0 )
  {
    inited[1] = (inited[1] + 0x1FFFFF) & 0xFFE00000;
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x20000000u);
  }
  if ( *((_WORD *)inited + 76) )
  {
    *((_QWORD *)inited + 4) = KeGetCurrentThread();
    while ( 1 )
    {
      _InterlockedOr((volatile signed __int32 *)inited + 206, 1u);
      LogFile = EtwpCreateLogFile((__int64)inited, 0, (unsigned int *)&v68);
      FileName = LogFile;
      if ( LogFile >= 0 )
        break;
      if ( LogFile != -1073741306 )
        goto LABEL_177;
      v44 = inited[1];
      v45 = ~(v68 - 1) & (v68 - 1 + v44);
      if ( v44 == v45 )
        goto LABEL_177;
      inited[1] = v45;
    }
  }
  if ( inited[1] < 0x1000 && (*((_WORD *)inited + 76) || (inited[3] & 0x400) != 0) )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x1000u);
  v27 = 0xFFFF;
  if ( (unsigned __int64)inited[1] - 72 < 0xFFFF )
    v27 = inited[1] - 72;
  inited[2] = v27 & 0xFFFFFFF8;
  FileName = EtwpAllocateTraceBufferPool(inited);
  if ( FileName < 0 )
    goto LABEL_176;
  if ( (v4 & 0x4000000) != 0 && (v4 & 0x400) == 0 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    *((_QWORD *)inited + 177) = Pool2;
    if ( !Pool2 )
    {
      FileName = -1073741801;
      goto LABEL_177;
    }
  }
  v28 = inited[73];
  if ( !(_DWORD)v28 || (inited[3] & 0x2000) != 0 )
    v29 = 10485760LL;
  else
    v29 = v28 << 20;
  v30 = inited[1] * inited[59];
  if ( v29 <= (unsigned int)(2 * v30) )
    v29 = (unsigned int)(2 * v30);
  *((_QWORD *)inited + 52) = v29;
  if ( *(int *)(a2 + 112) >= 0 )
  {
    FileName = EtwpInitializeLoggerSecurityDescriptor((__int64)inited, P);
    if ( P )
    {
      if ( P != (PVOID)WmipDefaultAccessSd && P != EtwpDefaultTraceSecurityDescriptor )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    if ( FileName < 0 )
    {
LABEL_176:
      EtwpFreeTraceBufferPool(inited);
LABEL_177:
      if ( (inited[3] & 0x2000000) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4520), v63);
      EtwpFreeApcPool((__int64)(inited + 208));
      if ( (inited[204] & 0x80u) != 0 )
        ExFreePoolWithTag(*((PVOID *)inited + 131), 0);
      if ( (inited[204] & 0x2000) != 0 )
        _InterlockedDecrement((volatile signed __int32 *)&stru_140E28440.PriorityFloorCounts[8]);
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 38));
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 42));
      v46 = (void *)*((_QWORD *)inited + 100);
      if ( v46 )
        ZwClose(v46);
      ExFreePoolWithTag(inited, 0);
      v12 = v64;
      goto LABEL_186;
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(a1 + 4404), 1u);
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8 * v21), 1u);
  if ( (inited[3] & 0x400) == 0 && *(int *)(a2 + 112) >= 0 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    FileName = EtwpStartLoggerThread(CurrentServerSilo, (__int64)inited);
    if ( FileName < 0 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8 * v21), 1u);
LABEL_135:
      EtwpFreeLoggerContext((char *)inited);
      return (unsigned int)FileName;
    }
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE) )
    EtwpEventWriteTemplateSession(v31, &ETW_EVENT_START_TRACE, inited);
  KeWaitForSingleObject(inited + 158, Executive, 0, 0, 0LL);
  _InterlockedExchange64((volatile __int64 *)(v66 + 8 * v21), (__int64)inited);
  EtwpSendSessionNotification((__int64)inited, 5, 0);
  if ( (inited[3] & 0x2000000) != 0 )
  {
    if ( a1 == EtwpHostSiloState )
    {
      FileName = EtwpCheckForPoolTagFilterExtension((__int64)inited, a2, 1);
      if ( FileName < 0 )
      {
LABEL_246:
        inited[10] = FileName;
        EtwpStopLoggerInstance((__int64)inited, v32, v33, v34);
        if ( (inited[3] & 0x400) != 0 )
        {
          EtwpGetLoggerInfoFromContext(a2, inited);
          EtwpReleaseLoggerContext(inited, 1);
          goto LABEL_135;
        }
        goto LABEL_119;
      }
      EtwpUpdateTagFilter(0LL, 0, (__int64)&EtwpObjectTypeFilter + 20 * v63);
    }
    FileName = EtwpUpdateLoggerGroupMasks((int *)inited, a2);
    if ( FileName >= 0 )
      goto LABEL_119;
    goto LABEL_246;
  }
LABEL_119:
  if ( v62 != 9 )
    EtwpUpdatePerProcessTracing(a2, a1, *inited, v62);
  EtwpGetLoggerInfoFromContext(a2, inited);
  KeReleaseMutex((PRKMUTEX)(inited + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)inited + 170) + 704LL) + 8LL * *inited),
    1u);
  return (unsigned int)FileName;
}
