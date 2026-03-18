/*
 * XREFs of SyncEvalObject @ 0x14000EE78
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x14006C2F0 (AMLIEvalPackageElement.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     AsyncEvalObject @ 0x140009DE0 (AsyncEvalObject.c)
 *     RestartContext @ 0x14000E2E0 (RestartContext.c)
 *     GetThreadCurrentContext @ 0x14000F264 (GetThreadCurrentContext.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     LogSchedEvent @ 0x140030800 (LogSchedEvent.c)
 *     NestAsyncEvalObject @ 0x1400704D4 (NestAsyncEvalObject.c)
 */

__int64 __fastcall SyncEvalObject(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v8; // r14
  int v9; // eax
  __int64 ThreadCurrentContext; // rdi
  KIRQL v11; // r10
  KIRQL CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r10
  __int64 v14; // r11
  __int64 v15; // r8
  unsigned int restarted; // eax
  unsigned int v17; // ebx
  KIRQL v18; // al
  NTSTATUS v20; // eax
  const void *v21; // rbx
  KIRQL v22; // al
  __int64 ObjectPath; // rax
  const char *v24; // rdx
  void *v25; // rdi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-60h]
  _QWORD *v27; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v28[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v29; // [rsp+58h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-18h] BYREF
  int v31; // [rsp+B0h] [rbp+30h] BYREF

  v28[1] = 8LL;
  v31 = 0;
  v28[0] = a1 + 120;
  v27 = v28;
  v8 = 0;
  v29 = 0LL;
  memset(&Event, 0, 20);
  v9 = EmClientRuleEvaluate(&GUID_EM_RULE_AMLI_ALLOW_INVALID_RECLAIM_MEMORY_MAP_ON_EVAL, &v27, 1LL, &v31);
  if ( v9 >= 0 && v31 == 2 || v9 == -1073741818 && v31 )
  {
    v8 = 1;
    _InterlockedAdd(&gAllowInvalidReclaimMemoryMap, 1u);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  byte_14008EB70 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  ThreadCurrentContext = GetThreadCurrentContext();
  KeReleaseSpinLock(&SpinLock, v11);
  if ( !ThreadCurrentContext )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    v14 = (unsigned int)gReadyQueue;
    if ( (gDebugger & 0x8000) != 0 && qword_14008ED10 )
    {
      v15 = 9LL * (_InterlockedExchangeAdd((_DWORD *)&qword_14008ED08 + 1, 1u) % (unsigned int)qword_14008ED08);
      *((_QWORD *)qword_14008ED10 + v15 + 1) = MEMORY[0xFFFFF78000000008];
      *((_DWORD *)qword_14008ED10 + 2 * v15) = 1398361667;
      *((_QWORD *)qword_14008ED10 + v15 + 2) = CurrentThread;
      *((_QWORD *)qword_14008ED10 + v15 + 3) = 0LL;
      *((_QWORD *)qword_14008ED10 + v15 + 4) = 0LL;
      *((_QWORD *)qword_14008ED10 + v15 + 5) = v14;
      *((_QWORD *)qword_14008ED10 + v15 + 6) = CurrentIrql;
      *((_QWORD *)qword_14008ED10 + v15 + 7) = a1;
      *((_QWORD *)qword_14008ED10 + v15 + 8) = 0LL;
    }
    restarted = AsyncEvalObject(a1, a2, a3, a4, (__int64)EvalMethodComplete, (__int64)&v29, 0);
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(ThreadCurrentContext + 64) & 0x100) != 0 )
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError(ThreadCurrentContext, -1072431098);
    PrintDebugMessage(0xB3u, 0LL, 0LL, 0LL, 0LL);
    v17 = -1072431098;
  }
  else
  {
    v22 = KeGetCurrentIrql();
    LogSchedEvent(1314085198, ThreadCurrentContext, v22, a1, 0LL);
    v17 = NestAsyncEvalObject(a1, a2, a3, a4, (__int64)Timeout, (__int64)&v29);
    if ( v17 == 32772 )
    {
      restarted = RestartContext((_QWORD *)ThreadCurrentContext);
LABEL_8:
      v17 = restarted;
    }
  }
  v18 = KeGetCurrentIrql();
  if ( v17 == 32772 )
  {
    if ( v18 >= 2u )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError(ThreadCurrentContext, -1072431098);
      ObjectPath = GetObjectPath(a1);
      v24 = byte_140075A82;
      if ( ObjectPath )
        v24 = (const char *)ObjectPath;
      v25 = (void *)ObjectPath;
      PrintDebugMessage(0xB5u, v24, 0LL, 0LL, 0LL);
      v17 = -1072431098;
      if ( v25 )
        ExFreePoolWithTag(v25, 0);
    }
    else
    {
      while ( 1 )
      {
        v20 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v21 = (const void *)v20;
        if ( v20 )
          break;
        v17 = v29;
        if ( (_DWORD)v29 == 32771 )
          v17 = RestartContext(*((_QWORD **)&v29 + 1));
        if ( v17 != 32772 )
          goto LABEL_10;
      }
      LogError(-1072431098);
      AcpiDiagTraceAmlError(ThreadCurrentContext, -1072431098);
      PrintDebugMessage(0xB4u, v21, 0LL, 0LL, 0LL);
      v17 = -1072431098;
    }
  }
LABEL_10:
  if ( v8 )
    _InterlockedDecrement(&gAllowInvalidReclaimMemoryMap);
  return v17;
}
