/*
 * XREFs of PspSuspendThread @ 0x140949620
 * Callers:
 *     DbgkQueueUserExceptionReport @ 0x14078D54C (DbgkQueueUserExceptionReport.c)
 *     PsSuspendProcess @ 0x1408029A0 (PsSuspendProcess.c)
 *     NtChangeThreadState @ 0x140949110 (NtChangeThreadState.c)
 *     NtSuspendThread @ 0x140949500 (NtSuspendThread.c)
 *     PsSuspendThread @ 0x140949600 (PsSuspendThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140949760 (DbgkpPostFakeThreadMessages.c)
 *     PspWow64GetContextThread @ 0x140A2AB08 (PspWow64GetContextThread.c)
 * Callees:
 *     KeSuspendThread @ 0x140208E28 (KeSuspendThread.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeSetKernelStackSwapEnable @ 0x1404783C0 (KeSetKernelStackSwapEnable.c)
 *     KeWaitForSynchronousSuspend @ 0x1405EECEC (KeWaitForSynchronousSuspend.c)
 *     EtwTiLogSuspendResumeThread @ 0x140AAD018 (EtwTiLogSuspendResumeThread.c)
 */

__int64 __fastcall PspSuspendThread(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebp
  _BYTE *v7; // r14
  int v8; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  struct _EX_RUNDOWN_REF *v10; // r12
  __int64 v11; // r9
  unsigned int v12; // ebx
  int v13; // eax
  BOOLEAN v14; // cl
  _DWORD v16[4]; // [rsp+30h] [rbp-38h] BYREF
  char v17; // [rsp+78h] [rbp+10h] BYREF

  v16[0] = 0;
  v17 = 0;
  v6 = 0;
  v7 = 0LL;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v8 = a2 & 1;
  if ( a3 )
  {
    if ( (a2 & 1) == 0 )
      return 3221225485LL;
  }
  CurrentThread = KeGetCurrentThread();
  v10 = (struct _EX_RUNDOWN_REF *)(a1 + 1416);
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1416)) )
  {
    if ( (*(_DWORD *)(a1 + 1440) & 1) != 0 )
    {
      v12 = -1073741749;
    }
    else
    {
      v7 = (_BYTE *)((unsigned __int64)&v17 & -(__int64)(v8 != 0));
      v13 = KeSuspendThread((struct _KTHREAD *)a1, v7, v16);
      v6 = v16[0];
      v12 = v13;
      if ( v13 < 0 )
        v7 = 0LL;
    }
    ExReleaseRundownProtection_0(v10);
  }
  else
  {
    v12 = -1073741749;
  }
  if ( a4 )
  {
    *a4 = v6;
    if ( !v6 && (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 1532LL) & 0x100000) != 0 )
    {
      LOBYTE(v11) = 1;
      EtwTiLogSuspendResumeThread(v12, CurrentThread, a1, v11);
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v7 )
  {
    KeSetKernelStackSwapEnable(0);
    v12 = KeWaitForSynchronousSuspend();
    KeSetKernelStackSwapEnable(v14);
  }
  return v12;
}
