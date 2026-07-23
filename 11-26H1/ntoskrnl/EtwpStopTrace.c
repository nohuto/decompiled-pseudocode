/*
 * XREFs of EtwpStopTrace @ 0x140AB2D10
 * Callers:
 *     EtwWmitraceWorker @ 0x1408324F8 (EtwWmitraceWorker.c)
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 *     EtwShutdown @ 0x140B384BC (EtwShutdown.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218430 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     ObReferenceObjectByPointer @ 0x140458E50 (ObReferenceObjectByPointer.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContext @ 0x140979888 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x140979D9C (EtwpValidateLoggerInfo.c)
 *     EtwpCheckLoggerControlAccess @ 0x14097A438 (EtwpCheckLoggerControlAccess.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14097A694 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpStopLoggerInstance @ 0x140A14B5C (EtwpStopLoggerInstance.c)
 *     EtwpFreeLoggerContext @ 0x140A16604 (EtwpFreeLoggerContext.c)
 *     EtwpEventWriteTemplateSession @ 0x140AB32A0 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpStopTrace(__int64 a1, _DWORD *a2, char a3)
{
  __int64 result; // rax
  __int16 v7; // dx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  int LoggerInfoFromContext; // edi
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  unsigned int *v13; // rbx
  __int64 v14; // rdi
  void *v15; // r14
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  P = 0LL;
  Timeout.QuadPart = -2000000000LL;
  result = EtwpValidateLoggerInfo(a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    CurrentThread->KernelApcDisable += v7;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, (__int64)a2, (__int64 *)&P);
    if ( LoggerInfoFromContext >= 0 )
    {
      v13 = (unsigned int *)P;
      if ( a3 )
        goto LABEL_4;
      if ( (*((_DWORD *)P + 3) & 0x40) != 0 )
      {
        KeReleaseMutex((PRKMUTEX)((char *)P + 632), 0);
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v13 + 170) + 704LL) + 8LL * *v13),
          1u);
        LoggerInfoFromContext = -1073741535;
        goto LABEL_26;
      }
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(0x80u, (__int64)P);
      if ( LoggerInfoFromContext >= 0 )
      {
LABEL_4:
        v14 = *v13;
        if ( (v13[3] & 0x400) == 0 )
        {
          v15 = (void *)*((_QWORD *)v13 + 4);
          ObReferenceObjectByPointer(v15, 0x100000u, (POBJECT_TYPE)PsThreadType, 0);
          KeResetEvent((PRKEVENT)v13 + 19);
          v16 = (unsigned int)v14;
          if ( ExAcquireRundownProtectionCacheAwareEx(
                 *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8 * v14),
                 1u) )
          {
            LoggerInfoFromContext = EtwpStopLoggerInstance((__int64)v13, v17, v18, v19);
            if ( LoggerInfoFromContext < 0 )
              ExReleaseRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8 * v16),
                1u);
          }
          else
          {
            LoggerInfoFromContext = -2147483611;
          }
          KeReleaseMutex((PRKMUTEX)(v13 + 158), 0);
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v13 + 170) + 704LL) + 8LL * *v13),
            1u);
          if ( LoggerInfoFromContext >= 0 )
          {
            if ( (v13[10] & 0x80000000) == 0 )
            {
              while ( KeWaitForSingleObject(v13 + 114, Executive, 0, 0, &Timeout) == 258 )
                ;
            }
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext((__int64)a2, (__int64)v13, v20, v21);
            if ( LoggerInfoFromContext >= 0 )
            {
              LoggerInfoFromContext = v13[10];
              if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_STOP_TRACE) )
                EtwpEventWriteTemplateSession(v22, &ETW_EVENT_STOP_TRACE, v13);
            }
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + 8 * v16),
              1u);
          }
          KeLeaveCriticalRegion();
          if ( LoggerInfoFromContext >= 0 )
            KeWaitForSingleObject(v15, Executive, 0, 0, 0LL);
          ObfDereferenceObject(v15);
          return (unsigned int)LoggerInfoFromContext;
        }
        LoggerInfoFromContext = EtwpStopLoggerInstance((__int64)v13, v9, v11, v12);
        EtwpReleaseLoggerContext(v13, 1);
        if ( LoggerInfoFromContext >= 0 )
        {
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext((__int64)a2, (__int64)v13, v23, v24);
          EtwpFreeLoggerContext((char *)v13);
        }
      }
      else
      {
        KeReleaseMutex((PRKMUTEX)(v13 + 158), 0);
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v13 + 170) + 704LL) + 8LL * *v13),
          1u);
      }
    }
LABEL_26:
    KeLeaveCriticalRegion();
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
