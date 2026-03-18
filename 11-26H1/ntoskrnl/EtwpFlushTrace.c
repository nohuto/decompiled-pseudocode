/*
 * XREFs of EtwpFlushTrace @ 0x140A6F6CC
 * Callers:
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140257080 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     EtwpCCSwapStop @ 0x140831FA4 (EtwpCCSwapStop.c)
 *     EtwpAcquireLoggerContext @ 0x14091EE28 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x14091F33C (EtwpValidateLoggerInfo.c)
 *     EtwpBufferingModeFlush @ 0x140A13654 (EtwpBufferingModeFlush.c)
 *     EtwpCheckLoggerControlAccess @ 0x140A6FAA4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpSynchronizeWithLogger @ 0x140A6FD00 (EtwpSynchronizeWithLogger.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140A6FDA8 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpEventWriteTemplateSession @ 0x140A7010C (EtwpEventWriteTemplateSession.c)
 *     EtwpCaptureString @ 0x140A70314 (EtwpCaptureString.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
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
  __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // rax
  int v16; // eax
  PVOID P[2]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int *v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = 0LL;
  *(_OWORD *)P = 0LL;
  result = EtwpValidateLoggerInfo((_DWORD *)a2);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, v5, (__int64 *)&v18);
  if ( LoggerInfoFromContext >= 0 )
  {
    v8 = v18;
    v9 = v18[3];
    v10 = ((v9 & 0x100 | 0x400) >> 3) | 0x40;
    if ( !*((_QWORD *)v18 + 100) )
      v10 = (v18[3] & 0x100 | 0x400) >> 3;
    if ( (v9 & 0x400) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 136) || (v11 = a2 + 128, !*(_WORD *)(a2 + 128)) )
      {
        LoggerInfoFromContext = -1073741809;
        goto LABEL_14;
      }
      v10 |= 0x40u;
    }
    else
    {
      v11 = a2 + 128;
    }
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v10);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (v9 & 0x400) != 0 )
      {
        LoggerInfoFromContext = EtwpCaptureString(v11, P);
        if ( LoggerInfoFromContext >= 0 )
        {
          v14 = *(_OWORD *)P;
          P[1] = 0LL;
          *(_OWORD *)(v8 + 46) = v14;
          _InterlockedOr((volatile signed __int32 *)v8 + 206, 1u);
          if ( (v8[3] & 0x2000000) != 0 )
          {
            v15 = a1 + 32LL * *((unsigned __int8 *)v8 + 818) + 4556;
            if ( v15 )
            {
              v16 = *(_DWORD *)(v15 + 4);
              if ( (v16 & 4) != 0 && (v16 & 0x100) != 0 )
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
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v8);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_FLUSH_TRACE) )
              EtwpEventWriteTemplateSession(v13, &ETW_EVENT_FLUSH_TRACE, v8);
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
  if ( P[1] )
    ExFreePool(P[1]);
  KeLeaveCriticalRegion();
  return (unsigned int)LoggerInfoFromContext;
}
