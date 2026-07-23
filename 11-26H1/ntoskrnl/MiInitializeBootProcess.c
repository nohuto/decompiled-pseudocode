/*
 * XREFs of MiInitializeBootProcess @ 0x140CF8124
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiSetPageTablePfnBuddy @ 0x1402A4030 (MiSetPageTablePfnBuddy.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 *     MiAllocateProcessExtension @ 0x140B26608 (MiAllocateProcessExtension.c)
 *     MiInitializeFaultClusterProcessContext @ 0x140B3358C (MiInitializeFaultClusterProcessContext.c)
 */

__int64 MiInitializeBootProcess()
{
  __int64 *p_SchedulingGroup; // rdi
  _KPROCESS *Process; // rbx
  _QWORD *v2; // rcx
  KIRQL v3; // al
  struct _LIST_ENTRY *v4; // rdx
  _LIST_ENTRY *p_CpuPartitionList; // rcx
  __int64 ProcessExtension; // rax
  __int64 v8; // rdx
  int v9; // [rsp+40h] [rbp+8h] BYREF

  if ( !qword_140FBF248 )
    qword_140FBF248 = 0x100000LL;
  if ( !qword_140FBF240 )
    qword_140FBF240 = 0x2000LL;
  if ( !qword_140FBF238 )
    qword_140FBF238 = 0x10000LL;
  if ( !qword_140FBF230 )
    qword_140FBF230 = 4096LL;
  p_SchedulingGroup = &qword_140E37980;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[2].ContextSwitches & 0xF) != 1 )
    p_SchedulingGroup = (__int64 *)&Process[2].SchedulingGroup;
  Process[2].Padding[5] = 50LL;
  *(_QWORD *)&Process[2].Spare0e = 450LL;
  v2 = (_QWORD *)(48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  *v2 = 0LL;
  MiSetPageTablePfnBuddy((__int64)v2, 0x10000000001uLL, 0);
  BYTE6(Process[3].PerProcessorCycleTimes) = -1;
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x40000u);
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
  v3 = ExAcquireSpinLockExclusive(&dword_140E36200);
  v4 = (struct _LIST_ENTRY *)qword_140E2D7A0;
  p_CpuPartitionList = &Process[2].CpuPartitionList;
  if ( *(__int64 **)qword_140E2D7A0 != &qword_140E2D798 )
    __fastfail(3u);
  p_CpuPartitionList->Flink = (struct _LIST_ENTRY *)&qword_140E2D798;
  Process[2].CpuPartitionList.Blink = v4;
  v4->Flink = p_CpuPartitionList;
  qword_140E2D7A0 = (__int64)&Process[2].CpuPartitionList;
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36200);
  else
    ExReleaseSpinLockExclusive(&dword_140E36200, v3);
  ProcessExtension = MiAllocateProcessExtension();
  if ( !ProcessExtension )
    return 3221225626LL;
  MiInitializeFaultClusterProcessContext((_QWORD *)(ProcessExtension + 832));
  v9 = 0;
  *p_SchedulingGroup = v8 + 320;
  return MmInitializeProcessAddressSpace((__int64)Process, 0LL, 0LL, &v9, 0);
}
