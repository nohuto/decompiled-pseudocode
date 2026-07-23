/*
 * XREFs of EtwpUpdateTrace @ 0x140AB081C
 * Callers:
 *     EtwWmitraceWorker @ 0x1408324F8 (EtwWmitraceWorker.c)
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     EtwpQueryUsedProcessorCount @ 0x140482564 (EtwpQueryUsedProcessorCount.c)
 *     EtwpValidateFlagExtension @ 0x14077F1A0 (EtwpValidateFlagExtension.c)
 *     EtwpSendDbgId @ 0x140832980 (EtwpSendDbgId.c)
 *     SeDeleteClientSecurity @ 0x1408EF1A0 (SeDeleteClientSecurity.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1408FC870 (EtwpGetSecurityDescriptorByGuid.c)
 *     SeCreateClientSecurity @ 0x140905390 (SeCreateClientSecurity.c)
 *     EtwpAcquireLoggerContext @ 0x140979888 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x140979D9C (EtwpValidateLoggerInfo.c)
 *     EtwpCheckLoggerControlAccess @ 0x14097A438 (EtwpCheckLoggerControlAccess.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14097A694 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCaptureString @ 0x14097A9F8 (EtwpCaptureString.c)
 *     EtwpUpdatePerProcessTracing @ 0x140AB0700 (EtwpUpdatePerProcessTracing.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140AB0CE0 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140AB0E14 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpCheckForStackTracingExtension @ 0x140AB1F2C (EtwpCheckForStackTracingExtension.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x140AB286C (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpCheckSystemTraceAccess @ 0x140AB2A20 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140AB2A5C (EtwpUpdateLoggerSecurityDescriptor.c)
 *     EtwpSynchronizeWithLogger @ 0x140AB31F8 (EtwpSynchronizeWithLogger.c)
 *     EtwpEventWriteTemplateSession @ 0x140AB32A0 (EtwpEventWriteTemplateSession.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateTrace(__int64 a1, __int64 a2)
{
  ACCESS_MASK v4; // r15d
  __int64 result; // rax
  unsigned int *v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  unsigned int *v9; // rbx
  int v10; // r13d
  unsigned int v11; // r14d
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rdx
  struct _KLOCK_ENTRIES *v19; // r9
  unsigned int SystemMaximumBufferCount; // eax
  unsigned int v21; // ecx
  __int64 v22; // r8
  PVOID v23; // r15
  int updated; // eax
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // r9d
  unsigned int v28; // eax
  int UsedProcessorCount; // eax
  int v30; // edx
  int v31; // ecx
  __int128 v32; // xmm0
  int v33; // eax
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+20h] [rbp-20h] BYREF
  PVOID v35[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+90h] [rbp+50h] BYREF

  P = 0LL;
  *(_WORD *)(&ClientSecurityQos.EffectiveOnly + 1) = 0;
  *(_OWORD *)v35 = 0LL;
  v4 = 128;
  result = EtwpValidateLoggerInfo((_DWORD *)a2);
  if ( (int)result >= 0 )
  {
    result = EtwpValidateFlagExtension(v6);
    if ( (int)result >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, a2, (__int64 *)&P);
      if ( LoggerInfoFromContext < 0 )
      {
LABEL_53:
        KeLeaveCriticalRegion();
        return (unsigned int)LoggerInfoFromContext;
      }
      v9 = (unsigned int *)P;
      v10 = *(_DWORD *)(a2 + 64);
      v11 = *((_DWORD *)P + 3);
      if ( (v11 & 0x40) != 0
        || (v10 & 1) != 0 && (v10 & 2) != 0
        || (*(_DWORD *)(a2 + 64) & 0xC000) == 0xC000
        || (v11 & 2) == 0 && (v10 & 2) != 0
        || (v10 & 2) != 0 && (v10 & 4) != 0 )
      {
        goto LABEL_55;
      }
      if ( (v10 & 0x100) != 0 || (v11 & 0x100) != 0 )
        v4 = 160;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
        v4 |= 0x40u;
      v12 = EtwpCheckLoggerControlAccess(v4, (__int64)P);
      v13 = 0LL;
      LoggerInfoFromContext = v12;
      if ( v12 < 0 )
        goto LABEL_50;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
      {
        if ( (v11 & 8) != 0 || (v10 & 8) != 0 || (v11 & 0x400) != 0 )
          goto LABEL_55;
        LoggerInfoFromContext = EtwpCaptureString((unsigned __int16 *)(a2 + 128), (UNICODE_STRING *)v35);
        if ( LoggerInfoFromContext < 0 )
          goto LABEL_50;
        if ( *((_QWORD *)v9 + 90) )
        {
          SeDeleteClientSecurity((__int64)(v9 + 176));
          *((_QWORD *)v9 + 90) = 0LL;
        }
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        LoggerInfoFromContext = SeCreateClientSecurity(
                                  KeGetCurrentThread(),
                                  &ClientSecurityQos,
                                  0,
                                  (PSECURITY_CLIENT_CONTEXT)(v9 + 176));
        if ( LoggerInfoFromContext < 0 )
          goto LABEL_50;
        v32 = *(_OWORD *)v35;
        v35[1] = 0LL;
        *(_OWORD *)(v9 + 46) = v32;
        EtwpSynchronizeWithLogger(v9, 4LL);
        v33 = EtwpSynchronizeWithLogger(v9, 2LL);
        v13 = 0LL;
        LoggerInfoFromContext = v33;
        if ( v33 < 0 || !v9[80] )
          goto LABEL_52;
      }
      else if ( (v11 & 0x400) != 0 )
      {
        goto LABEL_17;
      }
      if ( (v10 & 0x100) != 0 )
      {
        v11 |= 0x100u;
        if ( !v9[52] )
          v9[52] = (v11 & 0x10) != 0 ? 1000 : 1;
LABEL_17:
        v14 = *(_QWORD *)(v9 + 69);
        v15 = *(_QWORD *)&HeapGuid.Data1 - v14;
        if ( *(_QWORD *)&HeapGuid.Data1 == v14 )
          v15 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)(v9 + 71);
        if ( v15 )
        {
          v16 = *(_QWORD *)&CritSecGuid.Data1 - v14;
          if ( *(_QWORD *)&CritSecGuid.Data1 == v14 )
            v16 = *(_QWORD *)CritSecGuid.Data4 - *(_QWORD *)(v9 + 71);
          v17 = a1;
          if ( v16 )
          {
LABEL_23:
            LoggerInfoFromContext = EtwpCheckForStackTracingExtension(a2, v9, v13);
            if ( LoggerInfoFromContext >= 0 )
            {
              if ( (v9[3] & 0x2000000) == 0
                || (LoggerInfoFromContext = EtwpCheckSystemTraceAccess(v9, 128LL), LoggerInfoFromContext >= 0)
                && (v17 != EtwpHostSiloState
                 || (LoggerInfoFromContext = EtwpCheckForPoolTagFilterExtension(v9, a2, 0LL), LoggerInfoFromContext >= 0))
                && (LoggerInfoFromContext = EtwpUpdateLoggerGroupMasks(v9, a2), LoggerInfoFromContext >= 0) )
              {
                if ( *(_DWORD *)(a2 + 56) )
                {
                  if ( v9[1] )
                    SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(v9, v18, 0LL);
                  else
                    SystemMaximumBufferCount = 0;
                  v21 = *(_DWORD *)(a2 + 56);
                  if ( v21 > SystemMaximumBufferCount )
                  {
                    *(_DWORD *)(a2 + 56) = SystemMaximumBufferCount;
                    v21 = SystemMaximumBufferCount;
                  }
                  if ( v21 > v9[59] )
                    v9[59] = v21;
                }
                if ( (v11 & 0x400) == 0 )
                {
                  v28 = *(_DWORD *)(a2 + 68);
                  if ( v28 )
                  {
                    if ( v28 != v9[52] )
                    {
                      v9[52] = v28;
                      EtwpSynchronizeWithLogger(v9, 4LL);
                    }
                  }
                }
                if ( (v10 & 0x80000) == 0 )
                {
                  if ( (v11 & 0x80000) != 0 )
                    v11 &= ~0x80000u;
                  goto LABEL_40;
                }
                if ( v9[75] != 1 )
                {
                  _InterlockedOr((volatile signed __int32 *)v9 + 206, 0x800u);
                  v11 |= 0x80000u;
                  v22 = 0LL;
                  if ( ((_BYTE)KdDebuggerNotPresent || KdPitchDebugger) && !KdEventLoggingPresent )
                    goto LABEL_41;
                  EtwpSendDbgId((__int64)v9, v18, 0LL, v19);
LABEL_40:
                  v22 = 0LL;
LABEL_41:
                  if ( (v10 & 0x80u) == 0 )
                    goto LABEL_47;
                  P = 0LL;
                  EtwpGetSecurityDescriptorByGuid(v9 + 69, &P);
                  v23 = P;
                  updated = EtwpUpdateLoggerSecurityDescriptor(v9, P);
                  v22 = 0LL;
                  LoggerInfoFromContext = updated;
                  if ( v23 && v23 != (PVOID)WmipDefaultAccessSd && v23 != EtwpDefaultTraceSecurityDescriptor )
                  {
                    ExFreePoolWithTag(v23, 0);
                    v22 = 0LL;
                  }
                  if ( LoggerInfoFromContext >= 0 )
                  {
LABEL_47:
                    v9[3] = v11;
                    v25 = *(_DWORD *)(a2 + 76);
                    if ( v25 )
                    {
                      if ( v9[52] || (v11 & 0x400) != 0 )
                        goto LABEL_98;
                      UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)v9);
                      v31 = ~UsedProcessorCount + v30;
                      v25 = *(_DWORD *)(a2 + 76);
                      if ( v25 > v31 )
                      {
                        *(_DWORD *)(a2 + 76) = v31;
                        v25 = v31;
                      }
                      if ( v25 < 0 )
                      {
LABEL_98:
                        *(_DWORD *)(a2 + 76) = v22;
                        v25 = v22;
                      }
                    }
                    v9[53] = v25;
                    LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, (__int64)v9, v22, (__int64)v19);
                    if ( EtwEventEnabled(
                           (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
                           &ETW_EVENT_UPDATE_TRACE) )
                    {
                      EtwpEventWriteTemplateSession(v26, &ETW_EVENT_UPDATE_TRACE, v9);
                    }
                  }
                  goto LABEL_50;
                }
                LoggerInfoFromContext = -1073741637;
              }
            }
LABEL_50:
            if ( v35[1] )
              ExFreePool(v35[1]);
LABEL_52:
            KeReleaseMutex((PRKMUTEX)(v9 + 158), 0);
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v9 + 170) + 704LL) + 8LL * *v9),
              1u);
            goto LABEL_53;
          }
          v27 = 1;
        }
        else
        {
          v17 = a1;
          v27 = 0;
        }
        EtwpUpdatePerProcessTracing(a2, v17, *v9, v27);
        goto LABEL_23;
      }
      if ( (v11 & 0x100) == 0 )
        goto LABEL_17;
      if ( *((_QWORD *)v9 + 100) )
      {
        v11 &= ~0x100u;
        EtwpSynchronizeWithLogger(v9, 8LL);
        goto LABEL_17;
      }
LABEL_55:
      LoggerInfoFromContext = -1073741811;
      goto LABEL_50;
    }
  }
  return result;
}
