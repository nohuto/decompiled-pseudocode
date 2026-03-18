/*
 * XREFs of PspSuspendThread @ 0x140AD5030
 * Callers:
 *     DbgkQueueUserExceptionReport @ 0x14078AA1C (DbgkQueueUserExceptionReport.c)
 *     PsSuspendProcess @ 0x1407FCF70 (PsSuspendProcess.c)
 *     DbgkpPostFakeThreadMessages @ 0x1409556F0 (DbgkpPostFakeThreadMessages.c)
 *     PspWow64GetContextThread @ 0x140A214E8 (PspWow64GetContextThread.c)
 *     NtChangeThreadState @ 0x140AD4B20 (NtChangeThreadState.c)
 *     NtSuspendThread @ 0x140AD4F10 (NtSuspendThread.c)
 *     PsSuspendThread @ 0x140AD5010 (PsSuspendThread.c)
 * Callees:
 *     KeSuspendThread @ 0x140208D48 (KeSuspendThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     KeSetKernelStackSwapEnable @ 0x14047EA50 (KeSetKernelStackSwapEnable.c)
 *     KeWaitForSynchronousSuspend @ 0x1405EC37C (KeWaitForSynchronousSuspend.c)
 *     EtwTiLogSuspendResumeThread @ 0x140AAF3C8 (EtwTiLogSuspendResumeThread.c)
 */

__int64 __fastcall PspSuspendThread(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebp
  _BYTE *v7; // r14
  int v8; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  struct _EX_RUNDOWN_REF *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // ebx
  int v14; // eax
  BOOLEAN v15; // cl
  _DWORD v17[4]; // [rsp+30h] [rbp-38h] BYREF
  char v18; // [rsp+78h] [rbp+10h] BYREF

  v17[0] = 0;
  v18 = 0;
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
      v13 = -1073741749;
    }
    else
    {
      v7 = (_BYTE *)((unsigned __int64)&v18 & -(__int64)(v8 != 0));
      v14 = KeSuspendThread((struct _KTHREAD *)a1, v7, v17);
      v6 = v17[0];
      v13 = v14;
      if ( v14 < 0 )
        v7 = 0LL;
    }
    ExReleaseRundownProtection_0(v10);
  }
  else
  {
    v13 = -1073741749;
  }
  if ( a4 )
  {
    *a4 = v6;
    if ( !v6 )
    {
      v11 = *(unsigned int *)(*(_QWORD *)(a1 + 544) + 1532LL);
      if ( (v11 & 0x100000) != 0 )
        EtwTiLogSuspendResumeThread(v13, (__int64)CurrentThread, a1, 1);
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v11, v12);
  if ( v7 )
  {
    KeSetKernelStackSwapEnable(0);
    v13 = KeWaitForSynchronousSuspend();
    KeSetKernelStackSwapEnable(v15);
  }
  return v13;
}
