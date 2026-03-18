/*
 * XREFs of SyncLoadDDB @ 0x1400DDC3C
 * Callers:
 *     AMLILoadDDB @ 0x1400DC2B4 (AMLILoadDDB.c)
 * Callees:
 *     FreeContext @ 0x140003D30 (FreeContext.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     RestartContext @ 0x14000E2E0 (RestartContext.c)
 *     GetThreadCurrentContext @ 0x14000F264 (GetThreadCurrentContext.c)
 */

__int64 __fastcall SyncLoadDDB(char *Entry)
{
  char v2; // si
  unsigned int restarted; // ebx
  __int64 ThreadCurrentContext; // rbx
  KIRQL v5; // r10
  NTSTATUS v6; // eax
  const void *v7; // r14
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  int v11; // [rsp+88h] [rbp+28h] BYREF

  v11 = 0;
  v2 = 0;
  if ( (int)EmClientQueryRuleState(&GUID_EM_RULE_AMLI_ALLOW_INVALID_RECLAIM_MEMORY_MAP_ON_LOAD, &v11) >= 0 && v11 == 2 )
  {
    v2 = 1;
    _InterlockedIncrement(&gAllowInvalidReclaimMemoryMap);
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    byte_14008EB70 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    ThreadCurrentContext = GetThreadCurrentContext();
    KeReleaseSpinLock(&SpinLock, v5);
    if ( ThreadCurrentContext )
    {
      restarted = -1072431098;
      LogError(-1072431098);
      AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
      PrintDebugMessage(0xB6u, 0LL, 0LL, 0LL, 0LL);
      *((_QWORD *)Entry + 11) = 0LL;
      FreeContext(Entry);
    }
    else
    {
      v9 = 0LL;
      memset(&Event, 0, 20);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      *((_DWORD *)Entry + 16) |= 0x200u;
      *((_QWORD *)Entry + 21) = EvalMethodComplete;
      *((_QWORD *)Entry + 23) = &v9;
      restarted = RestartContext(Entry);
      if ( restarted == 32772 )
      {
        while ( 1 )
        {
          v6 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v7 = (const void *)v6;
          if ( v6 )
            break;
          restarted = v9;
          if ( (_DWORD)v9 == 32771 )
            restarted = RestartContext(*((_QWORD **)&v9 + 1));
          if ( restarted != 32772 )
            goto LABEL_15;
        }
        restarted = -1072431098;
        LogError(-1072431098);
        AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
        PrintDebugMessage(0xB7u, v7, 0LL, 0LL, 0LL);
      }
    }
LABEL_15:
    if ( v2 )
      _InterlockedDecrement(&gAllowInvalidReclaimMemoryMap);
  }
  else
  {
    restarted = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
    PrintDebugMessage(0xB8u, 0LL, 0LL, 0LL, 0LL);
    *((_QWORD *)Entry + 11) = 0LL;
    FreeContext(Entry);
  }
  return restarted;
}
