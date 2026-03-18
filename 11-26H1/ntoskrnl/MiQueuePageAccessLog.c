/*
 * XREFs of MiQueuePageAccessLog @ 0x1403BA328
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1402CFDDC (MiEmptyPageAccessLog.c)
 *     MiPeriodicTrimWorkingSet @ 0x1403B9E10 (MiPeriodicTrimWorkingSet.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403BA2D4 (MiCheckAndProcessCcAccessLog.c)
 *     MiReturnCcAccessLog @ 0x1403BA494 (MiReturnCcAccessLog.c)
 *     MiAgeTargetedWorkingSet @ 0x140476D30 (MiAgeTargetedWorkingSet.c)
 *     MiGetCcAccessLog @ 0x140A52AF4 (MiGetCcAccessLog.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiQueuePageAccessLog(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  struct _EX_RUNDOWN_REF *v4; // r15
  unsigned int v5; // r14d
  __int64 v6; // rax
  BOOL v7; // ebp
  int v8; // edi
  void *v9; // rcx

  *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a2 + 12) = stru_140F12D20.Padding[2];
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 32LL);
  v4 = (struct _EX_RUNDOWN_REF *)(v3 + 728);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v3 + 728)) )
    goto LABEL_26;
  v5 = *(unsigned __int16 *)(v3 + 768);
  if ( v5 >= *(_DWORD *)(v3 + 760) )
  {
    _InterlockedAdd((volatile signed __int32 *)(v3 + 688), 0x64u);
    v8 = 0;
  }
  else
  {
    v7 = 0;
    if ( *(int *)(a2 + 8) <= 1 )
    {
      v6 = *(_QWORD *)(a2 + 56);
      if ( v6 )
      {
        if ( *(PVOID *)v3 != PspSystemPartition
          && (*(_DWORD *)(v6 + 500) & 4) != 0
          && (*(_DWORD *)(*(_QWORD *)v3 + 136LL) & 1) != 0 )
        {
          v7 = 1;
        }
      }
    }
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v3 + 768), (PSLIST_ENTRY)a2);
    if ( !*(_DWORD *)(v3 + 740) && (unsigned __int16)v5 >= 8u )
      KeSetEvent((PRKEVENT)(v3 + 736), 0, 0);
    if ( !*(_DWORD *)(v3 + 740) && v7 )
      KeSetEvent((PRKEVENT)(v3 + 736), 0, 0);
    v8 = 1;
  }
  ExReleaseRundownProtection_0(v4);
  if ( !v8 )
  {
LABEL_26:
    if ( !*(_DWORD *)(a2 + 8) )
    {
      v9 = *(void **)(a2 + 56);
      if ( (unsigned __int64)v9 > 1 )
        ObDereferenceObjectDeferDeleteWithTag(v9, 0x4C416D4Du);
    }
    ExFreePoolWithTag((PVOID)a2, 0);
  }
}
