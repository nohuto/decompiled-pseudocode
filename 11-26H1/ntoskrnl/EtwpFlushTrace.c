/*
 * XREFs of EtwpFlushTrace @ 0x140AB2FD0
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     EtwpCCSwapStop @ 0x1408381E4 (EtwpCCSwapStop.c)
 *     EtwpAcquireLoggerContext @ 0x140979888 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x140979D9C (EtwpValidateLoggerInfo.c)
 *     EtwpCheckLoggerControlAccess @ 0x14097A438 (EtwpCheckLoggerControlAccess.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14097A694 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCaptureString @ 0x14097A9F8 (EtwpCaptureString.c)
 *     EtwpBufferingModeFlush @ 0x140A12844 (EtwpBufferingModeFlush.c)
 *     EtwpSynchronizeWithLogger @ 0x140AB31F8 (EtwpSynchronizeWithLogger.c)
 *     EtwpEventWriteTemplateSession @ 0x140AB32A0 (EtwpEventWriteTemplateSession.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall EtwpFlushTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  unsigned int *v8; // rbx
  unsigned int v9; // r15d
  ACCESS_MASK v10; // r8d
  unsigned __int16 *v11; // rbp
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  UNICODE_STRING v16; // xmm0
  __int64 v17; // rax
  int v18; // eax
  UNICODE_STRING P; // [rsp+20h] [rbp-38h] BYREF
  unsigned int *v20; // [rsp+70h] [rbp+18h] BYREF

  v20 = 0LL;
  P = 0LL;
  result = EtwpValidateLoggerInfo((_DWORD *)a2);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, v5, (__int64 *)&v20);
  if ( LoggerInfoFromContext >= 0 )
  {
    v8 = v20;
    v9 = v20[3];
    v10 = ((v9 & 0x100 | 0x400) >> 3) | 0x40;
    if ( !*((_QWORD *)v20 + 100) )
      v10 = (v20[3] & 0x100 | 0x400) >> 3;
    if ( (v9 & 0x400) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 136) || (v11 = (unsigned __int16 *)(a2 + 128), !*(_WORD *)(a2 + 128)) )
      {
        LoggerInfoFromContext = -1073741809;
        goto LABEL_14;
      }
      v10 |= 0x40u;
    }
    else
    {
      v11 = (unsigned __int16 *)(a2 + 128);
    }
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v10, (__int64)v20);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (v9 & 0x400) != 0 )
      {
        LoggerInfoFromContext = EtwpCaptureString(v11, &P);
        if ( LoggerInfoFromContext >= 0 )
        {
          v16 = P;
          P.Buffer = 0LL;
          *(UNICODE_STRING *)(v8 + 46) = v16;
          _InterlockedOr((volatile signed __int32 *)v8 + 206, 1u);
          if ( (v8[3] & 0x2000000) != 0 )
          {
            v17 = a1 + 32LL * *((unsigned __int8 *)v8 + 818) + 4556;
            if ( v17 )
            {
              v18 = *(_DWORD *)(v17 + 4);
              if ( (v18 & 4) != 0 && (v18 & 0x100) != 0 )
                EtwpCCSwapStop(v8[50], 0);
            }
          }
          v12 = EtwpBufferingModeFlush(v8);
          goto LABEL_11;
        }
      }
      else
      {
        if ( (v9 & 0x40000) == 0 )
        {
          v12 = EtwpSynchronizeWithLogger(v8, 4LL);
LABEL_11:
          LoggerInfoFromContext = v12;
          if ( v12 >= 0 )
          {
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, (__int64)v8, v13, v14);
            if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_FLUSH_TRACE) )
              EtwpEventWriteTemplateSession(v15, &ETW_EVENT_FLUSH_TRACE, v8);
          }
          goto LABEL_14;
        }
        LoggerInfoFromContext = -1073741637;
      }
    }
LABEL_14:
    KeReleaseMutex((PRKMUTEX)(v8 + 158), 0);
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v8 + 170) + 704LL) + 8LL * *v8),
      1u);
  }
  if ( P.Buffer )
    ExFreePool(P.Buffer);
  KeLeaveCriticalRegion();
  return (unsigned int)LoggerInfoFromContext;
}
