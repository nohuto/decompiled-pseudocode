/*
 * XREFs of CiThreadCleanup @ 0x14000EEF0
 * Callers:
 *     CiThreadNotification @ 0x1400039C0 (CiThreadNotification.c)
 *     CiThreadCreate @ 0x14000E900 (CiThreadCreate.c)
 *     CiDispatchCleanup @ 0x14000F740 (CiDispatchCleanup.c)
 * Callees:
 *     CiSchedulerRemoveThread @ 0x1400030F0 (CiSchedulerRemoveThread.c)
 *     CiTaskIndexDereference @ 0x140003BB0 (CiTaskIndexDereference.c)
 *     CiDecrementTotalThreadCount @ 0x140003DF0 (CiDecrementTotalThreadCount.c)
 *     CiThreadRemoveFromTree @ 0x140003E00 (CiThreadRemoveFromTree.c)
 *     CiLogThreadLeave @ 0x140004310 (CiLogThreadLeave.c)
 *     CiSystemAcquirePushLock @ 0x14000F090 (CiSystemAcquirePushLock.c)
 *     CiProcessDereference @ 0x14000F0D0 (CiProcessDereference.c)
 *     CiProcessRemoveThread @ 0x14000F1F0 (CiProcessRemoveThread.c)
 *     CiThreadDecrementScheduledCount @ 0x14000F260 (CiThreadDecrementScheduledCount.c)
 */

void __fastcall CiThreadCleanup(__int64 a1)
{
  bool v2; // zf
  _QWORD *v3; // rbp
  volatile signed __int32 *v4; // rsi
  struct _KTHREAD *v5; // rdi
  char v6; // al
  __int64 ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(_BYTE *)(a1 + 148) & 2) == 0;
  v3 = 0LL;
  ThreadInformation = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( v2 )
  {
    CiSystemAcquirePushLock(a1 + 16);
    v6 = *(_BYTE *)(a1 + 148);
    if ( (v6 & 2) == 0 )
    {
      v4 = *(volatile signed __int32 **)(a1 + 128);
      v3 = *(_QWORD **)(a1 + 72);
      *(_BYTE *)(a1 + 148) = v6 | 2;
      CiDecrementTotalThreadCount(v4 + 23);
      v5 = *(struct _KTHREAD **)(a1 + 96);
      if ( v5 )
      {
        CiThreadRemoveFromTree(a1);
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 3LL) & 1) != 0 )
          CiSchedulerRemoveThread((_QWORD *)a1);
        CiProcessRemoveThread(a1);
        if ( (*(_BYTE *)(a1 + 148) & 1) == 0 )
          CiThreadDecrementScheduledCount(a1);
        KeSetBasePriorityThread(v5, *(_DWORD *)(a1 + 144));
        KeSetPriorityThread(v5, *(_DWORD *)(a1 + 108));
        ThreadInformation = *(_QWORD *)(a1 + 136);
        if ( v5 == KeGetCurrentThread() )
          ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAffinityMask, &ThreadInformation, 8u);
        if ( byte_14000A0F0 )
          CiLogThreadLeave(a1);
      }
      CiDecrementTotalThreadCount(&CiTotalThreads);
    }
    *(_QWORD *)(a1 + 24) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 16, 0LL);
    if ( v5 )
      ObfDereferenceObject(v5);
    if ( v4 )
      CiProcessDereference((PVOID)v4);
    if ( v3 )
      CiTaskIndexDereference(v3);
  }
}
