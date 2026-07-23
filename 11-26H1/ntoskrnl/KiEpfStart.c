/*
 * XREFs of KiEpfStart @ 0x1405F9914
 * Callers:
 *     KeWaitPhysicalFaultCompletion @ 0x1405F96E4 (KeWaitPhysicalFaultCompletion.c)
 *     KiEpfHandleNotification @ 0x1405F98F0 (KiEpfHandleNotification.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     KeSetKernelStackSwapEnable @ 0x1404783C0 (KeSetKernelStackSwapEnable.c)
 */

void __fastcall KiEpfStart(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  _BYTE *SchedulerAssist; // rcx
  char v5; // di
  __int64 **v6; // rax
  signed __int32 v7; // edx
  int v8; // eax
  BOOLEAN v9; // bl
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  unsigned __int64 v12; // [rsp+30h] [rbp-20h]
  __int16 v13; // [rsp+38h] [rbp-18h] BYREF
  char v14; // [rsp+3Ah] [rbp-16h]
  char v15; // [rsp+3Bh] [rbp-15h]
  int v16; // [rsp+3Ch] [rbp-14h]
  _QWORD v17[2]; // [rsp+40h] [rbp-10h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v15 = 0;
  _InterlockedIncrement(&KiEpfCounters);
  CurrentThread = KeGetCurrentThread();
  v17[1] = v17;
  v17[0] = v17;
  v12 = a1;
  v13 = 263;
  v14 = 6;
  v16 = 0;
  v2 = KiEpfHashTable + 32LL * (((unsigned int)(a1 >> 12) + (unsigned int)a1) % 0x25);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  if ( *(int *)(v2 + 24) > 0 )
    goto LABEL_8;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !KiEpfCompletionQueue )
    goto LABEL_3;
  if ( CurrentThread == CurrentPrcb->IdleThread )
  {
    CurrentPrcb = KeGetCurrentPrcb();
LABEL_3:
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v5 = 0;
    if ( SchedulerAssist )
      SchedulerAssist[16] = 1;
    goto LABEL_9;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
  {
LABEL_8:
    v5 = 0;
LABEL_9:
    --*(_DWORD *)(v2 + 24);
    goto LABEL_13;
  }
  v6 = *(__int64 ***)(v2 + 8);
  v5 = 1;
  if ( *v6 != (__int64 *)v2 )
    __fastfail(3u);
  v11 = *(_QWORD *)(v2 + 8);
  v10 = v2;
  *v6 = &v10;
  *(_QWORD *)(v2 + 8) = &v10;
LABEL_13:
  KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 16));
  if ( v5 )
  {
    _InterlockedIncrement(&dword_140F14F30);
    v7 = _InterlockedIncrement(&dword_140F14F34);
    do
      v8 = dword_140F14F38;
    while ( dword_140F14F38 < v7 && v8 != _InterlockedCompareExchange(&dword_140F14F38, v7, dword_140F14F38) );
    v9 = KeSetKernelStackSwapEnable(0);
    KeWaitForGate((__int64)&v13, 39LL);
    KeSetKernelStackSwapEnable(v9);
    _InterlockedDecrement(&dword_140F14F34);
  }
}
