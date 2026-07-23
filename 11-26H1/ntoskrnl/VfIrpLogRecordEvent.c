/*
 * XREFs of VfIrpLogRecordEvent @ 0x140C41720
 * Callers:
 *     IovpCallDriver1 @ 0x140C312C8 (IovpCallDriver1.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140C36FEC (IovUtilIsDeviceObjectMarked.c)
 *     VfMajorBuildIrpLogEntry @ 0x140C37320 (VfMajorBuildIrpLogEntry.c)
 *     ViIrpLogDatabaseFindPointer @ 0x140C41CD8 (ViIrpLogDatabaseFindPointer.c)
 */

void __fastcall VfIrpLogRecordEvent(__int16 a1, _DWORD *a2, __int64 a3)
{
  __int64 v5; // rsi
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  KIRQL v7; // r14
  __int64 Pointer; // rax
  _DWORD *v9; // rbp
  ULONG_PTR v10; // rbx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int v14; // edx
  __int64 v15; // rdx
  _DWORD *v16; // [rsp+20h] [rbp-68h] BYREF
  __int128 v17; // [rsp+30h] [rbp-58h]
  __int128 v18; // [rsp+40h] [rbp-48h]
  __int64 v19; // [rsp+50h] [rbp-38h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( (a1 & 0x400) != 0 )
  {
    v5 = 32LL;
    if ( ViIrpLogDdiLock != 2 && !_InterlockedCompareExchange(&ViIrpLogDdiLock, 1, 0) )
    {
      Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 0x20uLL, 0x77496656u);
      if ( Pool2 )
      {
        Pool2->Parameter = Pool2;
        Pool2->WorkerRoutine = (void (__fastcall *)(void *))ViIrpLogExposeWmiCallback;
        Pool2->List.Flink = 0LL;
        ExQueueWorkItem(Pool2, DelayedWorkQueue);
      }
      else
      {
        ViIrpLogDdiLock = 0;
      }
    }
    v7 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
    if ( (unsigned int)IovUtilIsDeviceObjectMarked((__int64)a2, 0) )
      goto LABEL_20;
    Pointer = ViIrpLogDatabaseFindPointer(a2, &v16);
    v9 = v16;
    v10 = Pointer;
    if ( *v16 )
      goto LABEL_20;
    if ( !Pointer )
    {
      v10 = ExAllocatePool2(64LL, 0x348uLL, 0x65496656u);
      if ( !v10 )
      {
LABEL_20:
        KeReleaseSpinLock(&ViIrpLogDatabaseLock, v7);
        return;
      }
      PsReferenceSiloContext(a2);
      *(_QWORD *)v10 = a2;
      v11 = v9 + 2;
      *(_DWORD *)(v10 + 24) = 0;
      *(_DWORD *)(v10 + 28) = a2[18];
      v12 = (_QWORD *)(v10 + 8);
      *(_QWORD *)(v10 + 32) = 20LL;
      v13 = *((_QWORD *)v9 + 1);
      if ( *(_DWORD **)(v13 + 8) != v9 + 2 )
        __fastfail(3u);
      *v12 = v13;
      *(_QWORD *)(v10 + 16) = v11;
      *(_QWORD *)(v13 + 8) = v12;
      *v11 = v12;
    }
    v14 = *(_DWORD *)(v10 + 24);
    if ( (v14 & 6) == 0 )
    {
      if ( v14 != 1 )
        v5 = 36LL;
      if ( (unsigned int)VfMajorBuildIrpLogEntry(a3, *(unsigned int *)(v5 + v10)) )
      {
        v15 = 5 * (*(unsigned int *)(v10 + 36) + 1LL);
        *(_OWORD *)(v10 + 8 * v15) = v17;
        *(_OWORD *)(v10 + 8 * v15 + 16) = v18;
        *(_QWORD *)(v10 + 8 * v15 + 32) = v19;
        if ( ++*(_DWORD *)(v10 + 36) == *(_DWORD *)(v10 + 32) )
        {
          *(_DWORD *)(v10 + 24) |= 1u;
          *(_DWORD *)(v10 + 36) = 0;
        }
      }
    }
    goto LABEL_20;
  }
}
