/*
 * XREFs of EtwpQueryTrace @ 0x140979CA0
 * Callers:
 *     EtwWmitraceWorker @ 0x1408324F8 (EtwWmitraceWorker.c)
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     EtwpAcquireLoggerContext @ 0x140979888 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x140979D9C (EtwpValidateLoggerInfo.c)
 *     EtwpCheckLoggerControlAccess @ 0x14097A438 (EtwpCheckLoggerControlAccess.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14097A694 (EtwpGetLoggerInfoFromContext.c)
 *     EtwCheckSecurityLoggerAccess @ 0x140A8599C (EtwCheckSecurityLoggerAccess.c)
 */

__int64 __fastcall EtwpQueryTrace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  unsigned int *v9; // rbx
  struct _KTHREAD *v10; // rdx
  unsigned int *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a1);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v6, v5, (__int64 *)&v11);
    if ( LoggerInfoFromContext >= 0 )
    {
      v9 = v11;
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(1u);
      if ( LoggerInfoFromContext >= 0 )
      {
        if ( (v9[204] & 0x4000) == 0
          || (v10 = KeGetCurrentThread(),
              LOBYTE(v10) = v10->PreviousMode,
              LoggerInfoFromContext = EtwCheckSecurityLoggerAccess(KeGetCurrentThread()->ApcState.Process, v10),
              LoggerInfoFromContext >= 0) )
        {
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v9);
        }
      }
      KeReleaseMutex((PRKMUTEX)(v9 + 158), 0);
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v9 + 170) + 704LL) + 8LL * *v9),
        1u);
    }
    KeLeaveCriticalRegion();
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
