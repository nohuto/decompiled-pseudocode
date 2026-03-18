/*
 * XREFs of PspDereferenceSessionFinal @ 0x140B4AB84
 * Callers:
 *     PsDereferenceSession @ 0x140AF14D0 (PsDereferenceSession.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PspMarkSessionDeletePending @ 0x14077A3B8 (PspMarkSessionDeletePending.c)
 *     PspSessionUnlinkProcess @ 0x1407FF424 (PspSessionUnlinkProcess.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     ExpWnfDeleteScopeById @ 0x140A41D9C (ExpWnfDeleteScopeById.c)
 */

void PspDereferenceSessionFinal()
{
  _KPROCESS *Process; // rdi
  __int64 CycleTime; // rbx
  __int64 v2; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rcx
  void *v5; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  CycleTime = Process[1].CycleTime;
  PspMarkSessionDeletePending(CycleTime);
  if ( *(_QWORD *)(CycleTime + 40) )
  {
    KeSetEvent(*(PRKEVENT *)(CycleTime + 32), 1, 0);
    ObCloseHandle(*(HANDLE *)(CycleTime + 40), 0);
  }
  if ( *(_QWORD *)(CycleTime + 120) > 1uLL )
    guard_dispatch_icall_no_overrides(0LL, v2);
  v6 = *(_DWORD *)(CycleTime + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteScopeById(1LL, &v6, 4u);
  KeLeaveCriticalRegion();
  if ( Process[1].ReadyListHead.Flink )
  {
    PspSessionUnlinkProcess(v4, (__int64)Process);
    Process[1].ReadyListHead.Flink = 0LL;
  }
  v5 = *(void **)(CycleTime + 160);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x73536D4Du);
  *(_QWORD *)(CycleTime + 160) = 0LL;
}
