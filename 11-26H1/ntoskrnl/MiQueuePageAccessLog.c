/*
 * XREFs of MiQueuePageAccessLog @ 0x1403C4198
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1402B1B9C (MiEmptyPageAccessLog.c)
 *     MiPeriodicTrimWorkingSet @ 0x1403C3C80 (MiPeriodicTrimWorkingSet.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403C4144 (MiCheckAndProcessCcAccessLog.c)
 *     MiReturnCcAccessLog @ 0x1403C4304 (MiReturnCcAccessLog.c)
 *     MiAgeTargetedWorkingSet @ 0x1404704B0 (MiAgeTargetedWorkingSet.c)
 *     MiGetCcAccessLog @ 0x140A5BDE4 (MiGetCcAccessLog.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  *(_DWORD *)(a2 + 12) = xmmword_140F13528;
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
