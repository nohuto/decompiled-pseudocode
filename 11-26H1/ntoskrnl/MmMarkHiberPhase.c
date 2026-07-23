/*
 * XREFs of MmMarkHiberPhase @ 0x140C07330
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140C00E30 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiIsRetpolineEnabled @ 0x1404793CC (MiIsRetpolineEnabled.c)
 *     MiQuerySystemBase @ 0x14048EB78 (MiQuerySystemBase.c)
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 *     MiMarkHiberProtectedImages @ 0x1406F477C (MiMarkHiberProtectedImages.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiMarkKernelPageTablePages @ 0x140C06E58 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140C06EE0 (MiMarkNonPagedHiberPhasePages.c)
 */

__int64 MmMarkHiberPhase()
{
  __int64 v0; // rax
  __int64 v1; // rax
  void *KernelWaitTime; // r8
  __int64 v3; // rbx
  __int64 v4; // rdi
  void *v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD **v8; // rcx
  void *v9; // r8
  _QWORD *v10; // rax
  _QWORD *i; // rcx
  _DWORD v13[2]; // [rsp+38h] [rbp-69h] BYREF
  char v14; // [rsp+41h] [rbp-60h]
  char *AnyMultiplexedVm; // [rsp+58h] [rbp-49h]
  unsigned __int64 v16; // [rsp+60h] [rbp-41h]
  __int64 v17; // [rsp+68h] [rbp-39h]
  __int64 (__fastcall *v18)(__int64, unsigned __int64 *, int); // [rsp+E0h] [rbp+3Fh]
  __int64 v19; // [rsp+108h] [rbp+67h] BYREF

  v19 = 0LL;
  MiMarkKernelPageTablePages();
  PoSetHiberRange(0LL, 0x14000u, (PVOID)(PsInitialSystemProcess->DirectoryTableBase >> 12), 1uLL, 0x74706D4Du);
  MiMarkNonPagedHiberPhasePages(0xFFFFDE0000000000uLL, qword_140E2D890 - 1, 0x100u);
  if ( qword_140E37D58 )
  {
    v0 = MiQuerySystemBase(6, &v19);
    if ( v19 )
      MiMarkNonPagedHiberPhasePages(v0, v0 + v19 - 1, 0x100u);
  }
  if ( qword_140E37D08 )
  {
    v1 = MiQuerySystemBase(1, &v19);
    if ( v19 )
      MiMarkNonPagedHiberPhasePages(v1, v1 + v19 - 1, 0x100u);
  }
  PoSetHiberRange(0LL, 0x14000u, qword_140E36180[0], 1uLL, 0x61676D4Du);
  PoSetHiberRange(0LL, 0x10000u, KeGetCurrentThread()->ApcState.Process, 0x840uLL, 0x62706D4Du);
  KernelWaitTime = (void *)KeGetCurrentThread()->ApcState.Process[2].KernelWaitTime;
  if ( KernelWaitTime )
    PoSetHiberRange(0LL, 0x10000u, KernelWaitTime, 0x1000uLL, 0x62706D4Du);
  PoSetHiberRange(
    0LL,
    0x10000u,
    *(PVOID *)&stru_140E2D2D0.WaitBlockFill11[64],
    (unsigned int)(*(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[76] << 12),
    0x62706D4Du);
  if ( MiIsRetpolineEnabled() )
    PoSetHiberRange(
      0LL,
      0x10000u,
      *(PVOID *)&stru_140E2D2D0.WaitBlockFill11[112],
      8
    * (((unsigned __int64)stru_140E2D2D0.WaitBlock[2].WaitListEntry.Blink >> 6)
     + ((stru_140E2D2D0.WaitBlockFill6[104] & 0x3F) != 0)),
      0x62706D4Du);
  MiMarkNonPagedHiberPhasePages(
    (__int64)stru_140E2DAB0.SuspendEvent.Header.WaitListHead.Flink,
    (__int64)stru_140E2DAB0.SuspendEvent.Header.WaitListHead.Flink
  + (unsigned __int64)&stru_140E2DAB0.SuspendEvent.Header.WaitListHead.Blink[-1].Blink
  + 7,
    0);
  PoSetHiberRange(0LL, 0x10000u, &MiState, 0xC000uLL, 0x74536D4Du);
  PoSetHiberRange(
    0LL,
    0x10000u,
    (PVOID)stru_140E2ED08.ThreadLock,
    8LL * *(unsigned int *)stru_140E2ED08.QuantumTarget,
    0x70536D4Du);
  PoSetHiberRange(
    0LL,
    0x10000u,
    *(PVOID *)(stru_140E2ED08.QuantumTarget + 8),
    8
  * (((unsigned __int64)*(unsigned int *)stru_140E2ED08.QuantumTarget >> 6)
   + ((*(_DWORD *)stru_140E2ED08.QuantumTarget & 0x3F) != 0)),
    0x70536D4Du);
  PoSetHiberRange(0LL, 0x10000u, (PVOID)0xFFFFF78000000000LL, 0x1000uLL, 0x64736D4Du);
  PoSetHiberRange(0LL, 0x10000u, MmUnloadedDrivers, 0x7D0uLL, 0x64736D4Du);
  v3 = 0LL;
  v4 = 50LL;
  do
  {
    v5 = *(void **)((char *)MmUnloadedDrivers + v3 + 8);
    if ( v5 )
      PoSetHiberRange(0LL, 0x10000u, v5, *(unsigned __int16 *)((char *)MmUnloadedDrivers + v3), 0x64736D4Du);
    v3 += 40LL;
    --v4;
  }
  while ( v4 );
  v6 = (_QWORD *)qword_140E36000;
  v7 = 0LL;
  while ( v6 )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
  }
  while ( v7 )
  {
    v8 = (_QWORD **)v7[1];
    v9 = v7;
    v10 = v7;
    if ( v8 )
    {
      v7 = (_QWORD *)v7[1];
      for ( i = *v8; i; i = (_QWORD *)*i )
        v7 = i;
    }
    else
    {
      while ( 1 )
      {
        v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v7 || (_QWORD *)*v7 == v10 )
          break;
        v10 = v7;
      }
    }
    PoSetHiberRange(0LL, 0x10000u, v9, 0x4B0uLL, 0x6F496D4Du);
  }
  memset_0(v13, 0, 0xC0uLL);
  v13[0] = 4481;
  v18 = MiMarkHiberNotCachedPte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v14 = 17;
  v16 = 0xFFFF800000000000uLL;
  v17 = -1LL;
  MiWalkPageTables((__int64)v13);
  return MiMarkHiberProtectedImages();
}
