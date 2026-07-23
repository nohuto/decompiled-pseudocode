/*
 * XREFs of EtwpStartLogger @ 0x140AB0F2C
 * Callers:
 *     EtwpStartTrace @ 0x140AB0EB0 (EtwpStartTrace.c)
 *     EtwStartAutoLogger @ 0x140B44338 (EtwStartAutoLogger.c)
 *     EtwpStartBootLogger @ 0x140CE8324 (EtwpStartBootLogger.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218430 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     EtwpFreeApcPool @ 0x1404D2DE4 (EtwpFreeApcPool.c)
 *     EtwpStartLoggerThread @ 0x1404DE2D0 (EtwpStartLoggerThread.c)
 *     EtwpSetQpcDeltaTracking @ 0x1404E8394 (EtwpSetQpcDeltaTracking.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     EtwpSetPartitionContext @ 0x1406CB4EC (EtwpSetPartitionContext.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     EtwpValidateFlagExtension @ 0x14077F1A0 (EtwpValidateFlagExtension.c)
 *     EtwpEventWriteTemplateSessionAndHandle @ 0x14082BB28 (EtwpEventWriteTemplateSessionAndHandle.c)
 *     EtwpEventWriteTemplateSessionDesiredAccess @ 0x14082BBB8 (EtwpEventWriteTemplateSessionDesiredAccess.c)
 *     EtwpEventWriteTemplateSessionFromCapturedData @ 0x14082BC50 (EtwpEventWriteTemplateSessionFromCapturedData.c)
 *     EtwpEventWriteTemplateSessionMaxLoggers @ 0x14082BD1C (EtwpEventWriteTemplateSessionMaxLoggers.c)
 *     EtwpUpdateTagFilter @ 0x14082D874 (EtwpUpdateTagFilter.c)
 *     EtwpCheckGuidAccess @ 0x1408FC30C (EtwpCheckGuidAccess.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1408FC870 (EtwpGetSecurityDescriptorByGuid.c)
 *     SeCreateClientSecurity @ 0x140905390 (SeCreateClientSecurity.c)
 *     EtwpAccessCheck @ 0x14090DB60 (EtwpAccessCheck.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14097A694 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCaptureString @ 0x14097A9F8 (EtwpCaptureString.c)
 *     EtwpSendSessionNotification @ 0x140A14650 (EtwpSendSessionNotification.c)
 *     EtwpStopLoggerInstance @ 0x140A14B5C (EtwpStopLoggerInstance.c)
 *     EtwpFreeTraceBufferPool @ 0x140A154F4 (EtwpFreeTraceBufferPool.c)
 *     EtwpCreateLogFile @ 0x140A16128 (EtwpCreateLogFile.c)
 *     EtwpFreeLoggerContext @ 0x140A16604 (EtwpFreeLoggerContext.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     ExUuidCreate @ 0x140A7F880 (ExUuidCreate.c)
 *     EtwpUpdatePerProcessTracing @ 0x140AB0700 (EtwpUpdatePerProcessTracing.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140AB0CE0 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140AB0E14 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpCheckForStackTracingExtension @ 0x140AB1F2C (EtwpCheckForStackTracingExtension.c)
 *     EtwpGetFlagExtension @ 0x140AB1FF0 (EtwpGetFlagExtension.c)
 *     EtwpLookupLoggerIdByName @ 0x140AB2034 (EtwpLookupLoggerIdByName.c)
 *     EtwpInitLoggerContext @ 0x140AB20E0 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x140AB2428 (EtwpInitializeTimeStamp.c)
 *     EtwpAllocateTraceBufferPool @ 0x140AB272C (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitializeLoggerSecurityDescriptor @ 0x140AB28FC (EtwpInitializeLoggerSecurityDescriptor.c)
 *     EtwpEventWriteTemplateSession @ 0x140AB32A0 (EtwpEventWriteTemplateSession.c)
 *     EtwpGenerateFileName @ 0x140B277B0 (EtwpGenerateFileName.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140B377A8 (EtwpEventWriteTemplateAdmin.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  __int64 v22; // r8
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // ecx
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  struct _KLOCK_ENTRIES *v32; // r9
  __int64 v33; // rdx
  unsigned __int64 CurrentServerSilo; // rax
  unsigned int i; // ebx
  unsigned int *v37; // rax
  __int64 v38; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // edx
  void *v45; // rcx
  const WCHAR *v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // eax
  __int64 Pool2; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // r8
  unsigned int v55; // edi
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  char v60; // al
  unsigned __int8 v61; // [rsp+40h] [rbp-C0h]
  unsigned int v62; // [rsp+44h] [rbp-BCh]
  unsigned int v63; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v65; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h]
  __int64 v67; // [rsp+70h] [rbp-90h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v69; // [rsp+80h] [rbp-80h] BYREF
  UUID Buf1; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR ClientSecurityQos; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+B0h] [rbp-50h] BYREF
  PSECURITY_DESCRIPTOR *p_SecurityDescriptor; // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+D8h] [rbp-28h]
  __int64 *v75; // [rsp+E0h] [rbp-20h]
  __int64 v76; // [rsp+E8h] [rbp-18h]
  __int64 *v77; // [rsp+F0h] [rbp-10h]
  __int64 v78; // [rsp+F8h] [rbp-8h]

  v62 = 8;
  ClientSecurityQos.Ptr = 0LL;
  ClientSecurityQos.Size = 0;
  P = 0LL;
  SecurityDescriptor = 0LL;
  LODWORD(v65) = 0;
  LODWORD(v67) = 0;
  Buf1 = 0LL;
  v69 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v69, 0LL);
  v4 = *(_DWORD *)(a2 + 64) & 0x9DECE5FF;
  v63 = 3;
  if ( (*(_BYTE *)(a2 + 64) & 3) == 0 && ((*(_BYTE *)(a2 + 64) & 8) != 0 || (*(_BYTE *)(a2 + 64) & 4) != 0) )
    v4 = *(_DWORD *)(a2 + 64) & 0x9DECE5FE | 1;
  if ( (v4 & 0x40000) != 0 )
    v4 |= 0x80u;
  if ( (v4 & 0x80000) != 0 && (v4 & 0x1000000) != 0 )
    v4 &= ~0x1000000u;
  if ( !*(_WORD *)(a2 + 144) || !*(_QWORD *)(a2 + 152) )
    goto LABEL_14;
  FileName = EtwpCaptureString((unsigned __int16 *)(a2 + 144), &DestinationString);
  if ( FileName )
  {
LABEL_15:
    if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_SESSION_START_FAILED) )
      EtwpEventWriteTemplateAdmin(
        v6,
        (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
        v7,
        (unsigned int)&DestinationString,
        (__int64)&v69,
        FileName,
        v4);
    if ( DestinationString.Buffer )
      ExFreePool(DestinationString.Buffer);
    if ( v69.Buffer )
      ExFreePool(v69.Buffer);
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
     || !memcmp((const void *)(a2 + 24), &CKCLGuid, 0x10uLL)
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
      if ( EtwEventEnabled(
             (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
             &ETW_EVENT_LARGE_MDL_NOT_SUPPORTED) )
      {
        EtwpEventWriteTemplateSessionFromCapturedData(
          v52,
          v51,
          a2 + 24,
          *(_DWORD *)(a2 + 64),
          &DestinationString.Length,
          &v69.Length);
      }
      goto LABEL_15;
    }
    if ( (v8 & 0x400) == 0 || (v8 & 0x1000000) != 0 )
      goto LABEL_14;
  }
  v9 = *(_DWORD *)(a2 + 112);
  if ( v9 < 0 )
  {
    if ( LOBYTE(stru_140F03830.CycleTime) )
      goto LABEL_14;
    if ( (v9 & 2) == 0 )
      goto LABEL_14;
    if ( (*(_DWORD *)(a2 + 64) & 0x2000000) == 0 )
      goto LABEL_14;
    v53 = *(_DWORD *)(a2 + 40);
    if ( v53 == 2 || v53 == 4 || !memcmp((const void *)(a2 + 24), &NullGuid, 0x10uLL) )
      goto LABEL_14;
  }
  FileName = EtwpValidateFlagExtension((unsigned int *)a2);
  if ( FileName < 0 )
    goto LABEL_15;
  v10 = ((v4 & 0x100 | 0x400) >> 3) | 0x40;
  if ( !*(_WORD *)(a2 + 128) )
    v10 = (v4 & 0x100 | 0x400) >> 3;
  if ( !(unsigned int)EtwpLookupLoggerIdByName(a1, &DestinationString, &v65) )
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
  v65 = v11;
  v12 = 0;
  if ( !memcmp(&Buf1, &SystemTraceControlGuid, 0x10uLL) || !memcmp(&Buf1, &CKCLGuid, 0x10uLL) )
  {
    RtlFreeAnsiString(&DestinationString);
    if ( !memcmp(&Buf1, &SystemTraceControlGuid, 0x10uLL) )
    {
      v62 = 0;
      v46 = L"NT Kernel Logger";
    }
    else
    {
      v12 = 2;
      v62 = 1;
      v46 = L"Circular Kernel Context Logger";
    }
    v63 = v12;
    if ( !RtlCreateUnicodeString(&DestinationString, v46) )
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
    v63 = 1;
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
        v62 = 0;
        goto LABEL_50;
      }
LABEL_268:
      FileName = -1073741801;
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( !memcmp(&Buf1, &AuditLoggerGuid, 0x10uLL) )
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
  if ( !wcsicmp(DestinationString.Buffer, L"Eventlog-Security") && memcmp(&Buf1, &AuditLoggerGuid, 0x10uLL) )
    goto LABEL_212;
  for ( i = 4; i < *(_DWORD *)(a1 + 16); ++i )
  {
    v37 = EtwpAcquireLoggerContextByLoggerId(a1, i, 0);
    if ( v37 )
    {
      v38 = *(_QWORD *)(v37 + 69) - *(_QWORD *)&Buf1.Data1;
      if ( !v38 )
        v38 = *(_QWORD *)(v37 + 71) - *(_QWORD *)Buf1.Data4;
      v13 = v38 == 0;
      v39 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(*((_QWORD *)v37 + 170) + 704LL) + 8LL * *v37);
      if ( v13 )
      {
        ExReleaseRundownProtectionCacheAwareEx(v39, 1u);
        break;
      }
      ExReleaseRundownProtectionCacheAwareEx(v39, 1u);
    }
  }
  v40 = *(_DWORD *)(a1 + 16);
  if ( i < v40 )
    goto LABEL_212;
  v12 = 4;
  v63 = 4;
  if ( v40 > 4 )
  {
    do
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8LL * v12), v11 | 1, 1LL) == 1 )
        break;
      ++v12;
    }
    while ( v12 < *(_DWORD *)(a1 + 16) );
    v63 = v12;
  }
  if ( v12 >= *(_DWORD *)(a1 + 16) )
  {
    if ( !stru_140E3EAA8.WaitBlockFill7[145] )
    {
      ClientSecurityQos.Ptr = a1 + 16;
      stru_140E3EAA8.WaitBlockFill7[145] = 1;
      *(_QWORD *)&ClientSecurityQos.Size = 4LL;
      EtwWrite(
        (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
        &ETW_EVENT_OUT_OF_LOGGER_SLOTS,
        0LL,
        1u,
        &ClientSecurityQos);
      if ( (unsigned int)dword_140E08F78 > 5 && tlgKeywordOn((__int64)&dword_140E08F78, 0x200000000000LL) )
      {
        SecurityDescriptor = (PSECURITY_DESCRIPTOR)1;
        p_SecurityDescriptor = &SecurityDescriptor;
        v74 = 8LL;
        v75 = &v67;
        LODWORD(v65) = *(_DWORD *)(a1 + 16);
        v77 = &v65;
        v67 = 0x1000000LL;
        v76 = 8LL;
        v78 = 4LL;
        tlgWriteAgg((__int64)&dword_140E08F78, (unsigned __int8 *)&word_1400548B2, v54, 5u, &v72);
      }
    }
    FileName = -1073741670;
    if ( EtwEventEnabled(
           (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
           &ETW_EVENT_NOT_ENOUGH_LOGGER_SLOTS) )
    {
      EtwpEventWriteTemplateSessionMaxLoggers(
        v41,
        &ETW_EVENT_NOT_ENOUGH_LOGGER_SLOTS,
        &DestinationString.Length,
        *(_DWORD *)(a1 + 16));
    }
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
      if ( EtwEventEnabled(
             (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
             &ETW_EVENT_START_TRACE_ACCESS_DENIED) )
      {
        EtwpEventWriteTemplateSessionDesiredAccess(v48, v47, &DestinationString.Length, (__int64)&Buf1, v10);
      }
      goto LABEL_186;
    }
  }
  if ( !memcmp(&HeapGuid, &Buf1, 0x10uLL) )
    v61 = 0;
  else
    v61 = memcmp(&CritSecGuid, &Buf1, 0x10uLL) != 0 ? 9 : 1;
  if ( (*(_DWORD *)(a2 + 64) & 0x2000000) != 0 && v62 == 8 )
  {
    if ( *(int *)(a2 + 112) >= 0 )
    {
      FileName = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u);
      if ( FileName < 0 )
        goto LABEL_186;
    }
    v55 = 2;
    v62 = 2;
    while ( _bittest((const signed __int32 *)(a1 + 4520), v55) )
    {
      v62 = ++v55;
      if ( v55 >= 8 )
      {
        v62 = v55;
        if ( v55 != 8 )
          break;
        FileName = -1073741670;
        if ( EtwEventEnabled(
               (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
               &ETW_EVENT_NOT_ENOUGH_SYSTEM_LOGGER_SLOTS) )
        {
          EtwpEventWriteTemplateSessionMaxLoggers(
            v56,
            &ETW_EVENT_NOT_ENOUGH_SYSTEM_LOGGER_SLOTS,
            &DestinationString.Length,
            8);
        }
        goto LABEL_186;
      }
    }
  }
  inited = (unsigned int *)EtwpInitLoggerContext(&DestinationString, v4, *(unsigned int *)(a2 + 112));
  if ( !inited )
  {
    FileName = -1073741801;
LABEL_186:
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8LL * v12), 1u);
    _InterlockedExchange64((volatile __int64 *)(v65 + 8LL * v12), 1LL);
    goto LABEL_15;
  }
  FlagExtension = EtwpGetFlagExtension(a2, 6LL);
  v17 = FlagExtension;
  if ( FlagExtension )
  {
    if ( 4 * *(_WORD *)FlagExtension == 12 )
    {
      v57 = EtwpSetPartitionContext((__int64 *)inited + 198, *(_QWORD *)(FlagExtension + 4));
      v16 = 0LL;
      FileName = v57;
      if ( v57 < 0 )
      {
        if ( EtwEventEnabled(
               (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
               &ETW_EVENT_INVALID_MEMORY_PARTITION) )
        {
          EtwpEventWriteTemplateSessionAndHandle(v59, v58, &DestinationString.Length, *(_QWORD *)(v17 + 4));
        }
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
  v21 = v63;
  FileName = v16;
  *inited = v63;
  inited[53] = v20;
  *((_QWORD *)inited + 170) = a1;
  if ( *(_WORD *)(a2 + 128) > (unsigned __int16)v16 && *(_QWORD *)(a2 + 136) != v16 )
  {
    v49 = EtwpCaptureString((unsigned __int16 *)(a2 + 128), &v69);
    LODWORD(v16) = 0;
    FileName = v49;
    if ( v49 < 0 )
      goto LABEL_177;
  }
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    inited[74] = *(_DWORD *)(a2 + 96);
    *(_DWORD *)(a2 + 96) = v16;
  }
  if ( (inited[3] & 8) != 0 )
  {
    *(UNICODE_STRING *)(inited + 42) = v69;
    RtlInitUnicodeString(&v69, 0LL);
    FileName = EtwpGenerateFileName(inited + 42, inited + 74, inited + 38);
    if ( FileName < 0 )
      goto LABEL_177;
    v21 = v63;
  }
  else
  {
    *(UNICODE_STRING *)(inited + 38) = v69;
    RtlInitUnicodeString(&v69, 0LL);
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
  EtwpInitializeTimeStamp(inited);
  if ( v62 < 8 )
  {
    inited[3] |= 0x2000000u;
    *((_BYTE *)inited + 818) = v62;
    if ( v62 <= 1 )
      _InterlockedOr((volatile signed __int32 *)inited + 204, 0x20u);
    *(_BYTE *)(a1 + 2LL * v62 + 4504) = v21;
    if ( inited[50] - 1 >= 4 )
      v60 = 1;
    else
      v60 = *((_BYTE *)inited + 200);
    *(_BYTE *)(a1 + 2LL * v62 + 4505) = v60;
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 4520), v62);
  }
  FileName = EtwpCheckForStackTracingExtension(a2, inited, v22);
  if ( FileName < 0 )
    goto LABEL_177;
  v23 = *(_DWORD *)(a2 + 52);
  if ( v23 )
    inited[56] = v23;
  v24 = *(_DWORD *)(a2 + 56);
  if ( v24 )
    inited[59] = v24;
  v25 = *(_DWORD *)(a2 + 48);
  if ( v25 )
  {
    if ( v25 > 0x4000 )
    {
      *(_DWORD *)(a2 + 48) = 0x4000;
      v25 = 0x4000;
    }
    inited[1] = v25 << 10;
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
      v42 = EtwpCreateLogFile((__int64)inited, 0, &v67);
      FileName = v42;
      if ( v42 >= 0 )
        break;
      if ( v42 != -1073741306 )
        goto LABEL_177;
      v43 = inited[1];
      v44 = ~(v67 - 1) & (v67 - 1 + v43);
      if ( v43 == v44 )
        goto LABEL_177;
      inited[1] = v44;
    }
  }
  if ( inited[1] < 0x1000 && (*((_WORD *)inited + 76) || (inited[3] & 0x400) != 0) )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x1000u);
  v26 = 0xFFFF;
  if ( (unsigned __int64)inited[1] - 72 < 0xFFFF )
    v26 = inited[1] - 72;
  inited[2] = v26 & 0xFFFFFFF8;
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
  v27 = inited[73];
  if ( !(_DWORD)v27 || (inited[3] & 0x2000) != 0 )
    v28 = 10485760LL;
  else
    v28 = v27 << 20;
  v29 = inited[1] * inited[59];
  if ( v28 <= (unsigned int)(2 * v29) )
    v28 = (unsigned int)(2 * v29);
  *((_QWORD *)inited + 52) = v28;
  if ( *(int *)(a2 + 112) >= 0 )
  {
    FileName = EtwpInitializeLoggerSecurityDescriptor(inited, P);
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
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4520), v62);
      EtwpFreeApcPool((__int64)(inited + 208));
      if ( (inited[204] & 0x80u) != 0 )
        ExFreePoolWithTag(*((PVOID *)inited + 131), 0);
      if ( (inited[204] & 0x2000) != 0 )
        _InterlockedDecrement((volatile signed __int32 *)&stru_140E285C0.MutantListHead.Blink);
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 38));
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 42));
      v45 = (void *)*((_QWORD *)inited + 100);
      if ( v45 )
        ZwClose(v45);
      ExFreePoolWithTag(inited, 0);
      v12 = v63;
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
  if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_START_TRACE) )
    EtwpEventWriteTemplateSession(v30, &ETW_EVENT_START_TRACE, inited);
  KeWaitForSingleObject(inited + 158, Executive, 0, 0, 0LL);
  _InterlockedExchange64((volatile __int64 *)(v65 + 8 * v21), (__int64)inited);
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
        EtwpStopLoggerInstance((__int64)inited, v33, v31, v32);
        if ( (inited[3] & 0x400) != 0 )
        {
          EtwpGetLoggerInfoFromContext(a2, (__int64)inited, v31, (__int64)v32);
          EtwpReleaseLoggerContext(inited, 1);
          goto LABEL_135;
        }
        goto LABEL_119;
      }
      EtwpUpdateTagFilter(0LL, 0, (__int64)&stru_140F03830.WaitBlock[1] + 20 * v62);
    }
    FileName = EtwpUpdateLoggerGroupMasks((int *)inited, a2);
    if ( FileName >= 0 )
      goto LABEL_119;
    goto LABEL_246;
  }
LABEL_119:
  if ( v61 != 9 )
    EtwpUpdatePerProcessTracing(a2, a1, *inited, v61);
  EtwpGetLoggerInfoFromContext(a2, (__int64)inited, v31, (__int64)v32);
  KeReleaseMutex((PRKMUTEX)(inited + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)inited + 170) + 704LL) + 8LL * *inited),
    1u);
  return (unsigned int)FileName;
}
