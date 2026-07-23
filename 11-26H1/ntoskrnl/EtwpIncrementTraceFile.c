/*
 * XREFs of EtwpIncrementTraceFile @ 0x14077E0A0
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContext @ 0x140979888 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x140979D9C (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14097A694 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpSynchronizeWithLogger @ 0x140AB31F8 (EtwpSynchronizeWithLogger.c)
 *     EtwpGenerateFileName @ 0x140B277B0 (EtwpGenerateFileName.c)
 */

__int64 __fastcall EtwpIncrementTraceFile(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  int LoggerInfoFromContext; // edi
  __int64 v10; // rbx
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a1);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v6, v5, &v11);
    if ( LoggerInfoFromContext >= 0 )
    {
      v10 = v11;
      if ( (*(_DWORD *)(v11 + 12) & 8) != 0 )
      {
        if ( (*(_DWORD *)(v11 + 824) & 1) != 0
          || (EtwpSynchronizeWithLogger(v11, 4LL),
              EtwpGenerateFileName(v10 + 168, v10 + 296, v10 + 184),
              LoggerInfoFromContext = EtwpSynchronizeWithLogger(v10, 1LL),
              LoggerInfoFromContext >= 0) )
        {
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v10);
        }
      }
      else
      {
        LoggerInfoFromContext = -1073741811;
      }
      LOBYTE(v8) = 1;
      EtwpReleaseLoggerContext(v10, v8);
    }
    KeLeaveCriticalRegion();
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
