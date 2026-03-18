/*
 * XREFs of EtwpSetSoftRestartInformation @ 0x140777D18
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140B36610 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     EtwpCancelMemoryPreservation @ 0x14082E13C (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x14082E4AC (EtwpPreserveLogger.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14091EFC0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14093D918 (EtwpReleaseLoggerContext.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     EtwpCheckLoggerControlAccess @ 0x140A6FAA4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpCaptureString @ 0x140A70314 (EtwpCaptureString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpSetSoftRestartInformation(__int64 a1, unsigned int a2, char a3)
{
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  char UCharFromUser; // r14
  __int64 v10; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdx
  ULONG_PTR v13; // rsi
  int v14; // ebx
  __int64 v15; // rdi
  __int64 Pool2; // rax
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-40h] BYREF
  __int128 v18; // [rsp+38h] [rbp-30h] BYREF

  DestinationString = 0LL;
  v18 = 0LL;
  if ( !PspSiloMonitorLock.KernelWaitTime || PsIsCurrentThreadInServerSilo() )
    return 3221225659LL;
  if ( a2 < 0x18 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  *((_QWORD *)&v18 + 1) = a1 + 18;
  LOWORD(v18) = a2 - 18;
  WORD1(v18) = a2 - 18;
  if ( (_WORD)a2 == 18 || (result = EtwpCaptureString(&v18, &DestinationString), (int)result >= 0) )
  {
    if ( a3 )
      LOWORD(v8) = RtlReadULong64FromUser(a1 + 8);
    else
      v8 = *(_QWORD *)(a1 + 8);
    if ( a3 )
      UCharFromUser = RtlReadUCharFromUser(a1 + 16);
    else
      UCharFromUser = *(_BYTE *)(a1 + 16);
    v10 = (unsigned __int16)v8;
    if ( (unsigned __int16)v8 == 0xFFFF )
      v10 = *(unsigned __int8 *)(EtwpHostSiloState + 4504);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LOBYTE(v7) = 1;
    v13 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v10, v7);
    if ( !v13 )
    {
      v14 = -1073741162;
      goto LABEL_38;
    }
    v14 = EtwpCheckLoggerControlAccess(0x80u);
    if ( v14 >= 0 )
    {
      v15 = *(_QWORD *)(v13 + 1352);
      if ( !UCharFromUser )
      {
        if ( v15 && *(_BYTE *)(v15 + 32) )
        {
          EtwpCancelMemoryPreservation(v13);
          RtlFreeAnsiString((PUNICODE_STRING)(v15 + 16));
          *(_BYTE *)(v15 + 32) = 0;
          v14 = 0;
        }
        else
        {
          v14 = -1073741054;
        }
        goto LABEL_38;
      }
      if ( !v15 )
      {
        Pool2 = ExAllocatePool2(0x100uLL);
        v15 = Pool2;
        if ( !Pool2 )
        {
          v14 = -1073741801;
          goto LABEL_38;
        }
        *(_QWORD *)(v13 + 1352) = Pool2;
      }
      if ( *(_BYTE *)(v15 + 32) )
      {
        v14 = -1073741053;
      }
      else if ( DestinationString.Length )
      {
        if ( (*(_DWORD *)(v13 + 12) & 0x400) == 0 || *(_DWORD *)(v13 + 300) == 1 || (*(_DWORD *)(v13 + 4) & 0xFFF) != 0 )
        {
          v14 = -1073741637;
        }
        else
        {
          *(UNICODE_STRING *)(v15 + 16) = DestinationString;
          DestinationString.Buffer = 0LL;
          *(_BYTE *)(v15 + 32) = 1;
          v14 = 0;
          if ( EtwpKsrPrepared )
          {
            v14 = EtwpPreserveLogger(v13);
            if ( v14 < 0 )
            {
              *(_BYTE *)(v15 + 32) = 0;
              RtlFreeAnsiString((PUNICODE_STRING)(v15 + 16));
            }
          }
        }
      }
      else
      {
        v14 = -1073741672;
      }
    }
LABEL_38:
    if ( v13 )
    {
      LOBYTE(v12) = 1;
      EtwpReleaseLoggerContext(v13, v12);
    }
    RtlFreeAnsiString(&DestinationString);
    KeLeaveCriticalRegion();
    return (unsigned int)v14;
  }
  return result;
}
