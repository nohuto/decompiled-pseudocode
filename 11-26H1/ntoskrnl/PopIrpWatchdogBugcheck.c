/*
 * XREFs of PopIrpWatchdogBugcheck @ 0x140603508
 * Callers:
 *     PopCompleteIrpWatchdog @ 0x1403BDEDC (PopCompleteIrpWatchdog.c)
 *     PopDisableIrpWatchdog @ 0x1404D64E4 (PopDisableIrpWatchdog.c)
 *     PopIrpWatchdog @ 0x1406034F0 (PopIrpWatchdog.c)
 *     PopBroadcastBlameBugcheckCallback @ 0x140C03590 (PopBroadcastBlameBugcheckCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1406032D4 (PopInternalAddToDumpFile.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopIrpWatchdogBugcheck(__int64 MaxDataSize)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned int v3; // ecx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v10; // [rsp+48h] [rbp-31h] BYREF
  ULONG_PTR BugCheckParameter3[5]; // [rsp+50h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp+17h] BYREF
  unsigned int *v14; // [rsp+A0h] [rbp+27h]
  __int64 v15; // [rsp+A8h] [rbp+2Fh]
  __int64 v16; // [rsp+B0h] [rbp+37h]
  int v17; // [rsp+B8h] [rbp+3Fh]
  int v18; // [rsp+BCh] [rbp+43h]

  BugCheckParameter4 = 0LL;
  HIDWORD(BugCheckParameter3[0]) = 0;
  v1 = MaxDataSize;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 4) == 0 )
  {
    if ( (struct _KTHREAD *)PopIrpLockThread != KeGetCurrentThread() )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitListEntry.Blink, &LockHandle);
      PopIrpLockThread = (__int64)KeGetCurrentThread();
    }
    if ( !*(_DWORD *)(v1 + 188) )
    {
      v5 = *(_QWORD *)(v1 + 24);
      v6 = v5 ? *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL) : 0LL;
      v7 = *(_QWORD *)(v6 + 264);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 72LL * *(char *)(v7 + 66) + 200);
        if ( *(_BYTE *)(v8 + 184) == *(_BYTE *)(v1 + 184) )
          v1 = v8;
      }
    }
    BugCheckParameter4 = *(_QWORD *)(v1 + 16);
    PopInternalAddToDumpFile(0LL, 0, *(_QWORD *)(v1 + 24));
    IoAddTriageDumpDataBlock(BugCheckParameter4, (PVOID)*(unsigned __int16 *)(BugCheckParameter4 + 2));
    IoAddTriageDumpDataBlock(v1, (PVOID)0x138);
    BugCheckParameter3[0] = 163840LL;
    BugCheckParameter3[1] = (ULONG_PTR)&PpmIdlePolicyLock.WaitBlockList;
    BugCheckParameter3[2] = (ULONG_PTR)&PopIrpThreadList;
    BugCheckParameter3[3] = *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[64];
    BugCheckParameter3[4] = (ULONG_PTR)ExSaPageGroupDescriptorArrayLock.WaitBlock[1].WaitListEntry.Blink;
    KeBugCheckEx(0x9Fu, 3uLL, *(_QWORD *)(v1 + 24), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
  }
  v2 = *(_QWORD *)(MaxDataSize + 24);
  if ( v2 )
    v2 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL);
  v3 = *(unsigned __int16 *)(v2 + 40);
  UserData.Ptr = (ULONGLONG)&BugCheckParameter4;
  v14 = &v10;
  v10 = v3 >> 1;
  *(_QWORD *)&UserData.Size = 8LL;
  v15 = 4LL;
  v16 = *(_QWORD *)(v2 + 48);
  v17 = 2 * (v3 >> 1);
  v18 = 0;
  return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_IRP_WATCHDOG_TRIGGERED, 0LL, 0, 0LL, 0LL, 3u, &UserData);
}
