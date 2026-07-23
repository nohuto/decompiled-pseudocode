/*
 * XREFs of PopRecordPoIrpBlackboxInformation @ 0x1406161C0
 * Callers:
 *     PopRecordPoBlackboxInformation @ 0x1407E8D2C (PopRecordPoBlackboxInformation.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     PopDiagGetDriverName @ 0x1404809A8 (PopDiagGetDriverName.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PopRecordPoIrpBlackboxInformation()
{
  _KWAIT_BLOCK *WaitBlockList; // rsi
  int v1; // r14d
  void *v2; // rdi
  unsigned __int64 v3; // rbx
  KIRQL v4; // al
  int Blink; // r12d
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int64 v7; // r11
  __int64 v8; // rax
  __int64 Pool2; // rax
  _DWORD *v10; // r14
  _KWAIT_BLOCK *i; // rsi
  __int64 v12; // r12
  __int64 v13; // r15
  __int128 InputBuffer_8; // [rsp+38h] [rbp-99h] BYREF
  __int128 v15; // [rsp+48h] [rbp-89h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-79h] BYREF
  _WORD Src[64]; // [rsp+78h] [rbp-59h] BYREF

  InputBuffer_8 = 0LL;
  v15 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitListEntry.Blink, &LockHandle);
  WaitBlockList = PpmIdlePolicyLock.WaitBlockList;
  v1 = 0;
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  v2 = 0LL;
  v3 = 64LL;
  while ( WaitBlockList != (_KWAIT_BLOCK *)&PpmIdlePolicyLock.WaitBlockList )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WaitBlockList[6]);
    Blink = (int)WaitBlockList[6].WaitListEntry.Blink;
    if ( Blink == 1 )
      Flink = WaitBlockList[1].WaitListEntry.Flink;
    else
      Flink = 0LL;
    *(_QWORD *)&WaitBlockList[6].WaitType = Flink;
    KeReleaseSpinLock((PKSPIN_LOCK)&WaitBlockList[6], v4);
    if ( Blink == 1 )
    {
      if ( (int)PopDiagGetDriverName((__int64)WaitBlockList->Object, Src) >= 0 )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( Src[v8] );
        v7 = 2 * v8 + 26;
        if ( v7 < 0x18 )
          goto LABEL_14;
      }
      ++v1;
      if ( v3 + v7 < v3 )
        goto LABEL_14;
      v3 += v7;
    }
    WaitBlockList = (_KWAIT_BLOCK *)WaitBlockList->WaitListEntry.Flink;
  }
  if ( !v1 )
  {
LABEL_14:
    v3 = 0LL;
    goto LABEL_26;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v2 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = v1;
    v10 = (_DWORD *)(Pool2 + 40);
    *(_DWORD *)(Pool2 + 4) = 1;
    *(_DWORD *)Pool2 = v3;
    *(_QWORD *)(Pool2 + 16) = &PpmIdlePolicyLock.WaitBlockList;
    *(_QWORD *)(Pool2 + 24) = &PopIrpThreadList;
    *(_QWORD *)(Pool2 + 32) = *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[64];
    for ( i = PpmIdlePolicyLock.WaitBlockList;
          i != (_KWAIT_BLOCK *)&PpmIdlePolicyLock.WaitBlockList;
          i = (_KWAIT_BLOCK *)i->WaitListEntry.Flink )
    {
      if ( *(_QWORD *)&i[6].WaitType )
      {
        v10[2] = LOBYTE(i[3].SparePtr);
        v10[3] = HIDWORD(i[3].SparePtr);
        v10[4] = i[4].WaitListEntry.Flink;
        v12 = 24LL;
        v10[1] = (KiQueryUnbiasedInterruptTime() - *(_QWORD *)&i[6].WaitType) / 0x2710uLL;
        if ( (int)PopDiagGetDriverName((__int64)i->Object, Src) >= 0 )
        {
          v13 = -1LL;
          do
            ++v13;
          while ( Src[v13] );
          v12 = 2 * v13 + 26;
          memmove(v10 + 5, Src, 2 * v13);
          *((_WORD *)v10 + v13 + 10) = 0;
        }
        *v10 = v12;
        v10 = (_DWORD *)((char *)v10 + v12);
      }
    }
  }
LABEL_26:
  PopIrpLockThread = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
  {
    DWORD2(v15) = 4;
    *(_QWORD *)&InputBuffer_8 = v2;
    *((_QWORD *)&InputBuffer_8 + 1) = (unsigned int)v3;
    NtPowerInformation(UpdateBlackBoxRecorder, &InputBuffer_8, 0x20u, 0LL, 0);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x42424F50u);
}
