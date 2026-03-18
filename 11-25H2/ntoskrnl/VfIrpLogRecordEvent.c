/*
 * XREFs of VfIrpLogRecordEvent @ 0x140B8B6A4
 * Callers:
 *     IovpCallDriver1 @ 0x140B7CCD4 (IovpCallDriver1.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140B82B64 (IovUtilIsDeviceObjectMarked.c)
 *     VfMajorBuildIrpLogEntry @ 0x140B82E90 (VfMajorBuildIrpLogEntry.c)
 *     ViIrpLogDatabaseFindPointer @ 0x140B8BC3C (ViIrpLogDatabaseFindPointer.c)
 */

void __fastcall VfIrpLogRecordEvent(__int16 a1, _DWORD *a2, __int64 a3)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  KIRQL v6; // bp
  __int64 Pointer; // rax
  _DWORD *v8; // rsi
  ULONG_PTR v9; // rbx
  _QWORD *v10; // rcx
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _DWORD *v14; // rdi
  __int64 v15; // rdx
  _DWORD *v16; // [rsp+20h] [rbp-68h] BYREF
  __int128 v17; // [rsp+30h] [rbp-58h]
  __int128 v18; // [rsp+40h] [rbp-48h]
  __int64 v19; // [rsp+50h] [rbp-38h]

  v16 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( (a1 & 0x400) != 0 )
  {
    if ( ViIrpLogDdiLock != 2 && !_InterlockedCompareExchange(&ViIrpLogDdiLock, 1, 0) )
    {
      Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x77496656uLL);
      if ( Pool2 )
      {
        Pool2->List.Flink = 0LL;
        Pool2->WorkerRoutine = (void (__fastcall *)(void *))ViIrpLogExposeWmiCallback;
        Pool2->Parameter = Pool2;
        ExQueueWorkItem(Pool2, DelayedWorkQueue);
      }
      else
      {
        ViIrpLogDdiLock = 0;
      }
    }
    v6 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
    if ( (unsigned int)IovUtilIsDeviceObjectMarked((__int64)a2, 0) )
      goto LABEL_18;
    Pointer = ViIrpLogDatabaseFindPointer(a2, &v16);
    v8 = v16;
    v9 = Pointer;
    if ( *v16 )
      goto LABEL_18;
    if ( !Pointer )
    {
      v9 = ExAllocatePool2(0x40uLL, 0x348uLL, 0x65496656uLL);
      if ( !v9 )
      {
LABEL_18:
        KeReleaseSpinLock(&ViIrpLogDatabaseLock, v6);
        return;
      }
      PsReferenceSiloContext(a2);
      *(_DWORD *)(v9 + 24) = 0;
      v10 = v8 + 2;
      *(_QWORD *)v9 = a2;
      v11 = a2[18];
      *(_DWORD *)(v9 + 36) = 0;
      *(_DWORD *)(v9 + 28) = v11;
      v12 = (_QWORD *)(v9 + 8);
      *(_DWORD *)(v9 + 32) = 20;
      v13 = *((_QWORD *)v8 + 1);
      if ( *(_DWORD **)(v13 + 8) != v8 + 2 )
        __fastfail(3u);
      *v12 = v13;
      *(_QWORD *)(v9 + 16) = v10;
      *(_QWORD *)(v13 + 8) = v12;
      *v10 = v12;
    }
    if ( (*(_DWORD *)(v9 + 24) & 6) == 0 )
    {
      v14 = (_DWORD *)(v9 + 36);
      if ( (unsigned int)VfMajorBuildIrpLogEntry(a3) )
      {
        v15 = 5 * ((unsigned int)*v14 + 1LL);
        *(_OWORD *)(v9 + 8 * v15) = v17;
        *(_OWORD *)(v9 + 8 * v15 + 16) = v18;
        *(_QWORD *)(v9 + 8 * v15 + 32) = v19;
        if ( ++*v14 == *(_DWORD *)(v9 + 32) )
        {
          *(_DWORD *)(v9 + 24) |= 1u;
          *v14 = 0;
        }
      }
    }
    goto LABEL_18;
  }
}
