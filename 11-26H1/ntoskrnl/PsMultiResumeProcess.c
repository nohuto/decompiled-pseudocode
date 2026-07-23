/*
 * XREFs of PsMultiResumeProcess @ 0x14052A870
 * Callers:
 *     PsResumeProcess @ 0x140B2EE70 (PsResumeProcess.c)
 *     NtResumeProcess @ 0x140B437C0 (NtResumeProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResumeThread @ 0x140310BD0 (KeResumeThread.c)
 *     PsGetNextProcessThread @ 0x14094ADD0 (PsGetNextProcessThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140AF3F18 (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsMultiResumeProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v2; // r14
  __int64 v4; // rdx
  __int64 NextProcessThread; // rax
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 488);
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488)) == 1 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL);
    v7 = 0;
    while ( 1 )
    {
      v8 = NextProcessThread;
      if ( !NextProcessThread )
        break;
      if ( (*(_DWORD *)(NextProcessThread + 116) & 0x200000) == 0 )
        KeResumeThread(NextProcessThread, 1u, v6);
      NextProcessThread = PsGetNextProcessThread(a1, v8);
    }
    ExReleaseRundownProtection_0(v2);
  }
  else
  {
    v7 = -1073741558;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v4);
  if ( (*(_DWORD *)(a1 + 1532) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(v7, CurrentThread, a1, 1LL);
  return v7;
}
