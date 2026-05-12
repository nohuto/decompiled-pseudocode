/*
 * XREFs of StorGetLogForMFNDChildControllerAsyncEvent @ 0x1400CA714
 * Callers:
 *     RaProcessMFNDChildControllerEvent @ 0x140092038 (RaProcessMFNDChildControllerEvent.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 */

char __fastcall StorGetLogForMFNDChildControllerAsyncEvent(__int64 a1, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v4; // r14
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbx
  char v11; // r13
  int v12; // eax
  int v13; // eax
  char v14; // al
  IO_WORKITEM_ROUTINE *v15; // r12
  __int64 v16; // rsi
  _BYTE *v17; // rdx
  __int64 v18; // r10
  int v19; // ecx
  __int64 v20; // r15
  _QWORD *Pool; // rbx
  PIO_WORKITEM WorkItem; // rax
  __int64 v23; // r8
  struct _IO_WORKITEM *v24; // rcx
  __int64 v26; // rcx

  v4 = a2;
  if ( !StorIsMFNDSupported(a1) )
    return 0;
  v10 = (unsigned int)(v8 + 1);
  v11 = *((_BYTE *)a3 + 6);
  v12 = *((_DWORD *)a3 + 1) & 7;
  if ( !v12 )
  {
    v15 = (IO_WORKITEM_ROUTINE *)StorGetAndLogNVMeErrorInfoWorkRoutine;
    v16 = *(_QWORD *)(*(_QWORD *)(v7 + 6224) + 56LL);
    goto LABEL_11;
  }
  v13 = v12 - v10;
  if ( !v13 )
  {
    v15 = (IO_WORKITEM_ROUTINE *)StorGetAndLogNVMeSmartHealthInfoWorkRoutine;
    v16 = *(_QWORD *)(*(_QWORD *)(v7 + 6224) + 64LL);
    goto LABEL_11;
  }
  if ( v13 != 6 )
    return 0;
  v14 = *((_BYTE *)a3 + 5);
  if ( v14 != (_BYTE)v8 + 1 )
  {
    if ( v14 == -2 )
    {
      v15 = (IO_WORKITEM_ROUTINE *)StorGetAndLogMFNDQoSStatisticsWorkRoutine;
      v16 = *(_QWORD *)(*(_QWORD *)(v7 + 6224) + 48LL);
      goto LABEL_11;
    }
    return 0;
  }
  v15 = (IO_WORKITEM_ROUTINE *)StorGetAndLogNVMeDevicePanicWorkRoutine;
  v16 = *(_QWORD *)(*(_QWORD *)(v7 + 6224) + 72LL);
LABEL_11:
  if ( v16 && v6 )
  {
    v17 = a3 + 1;
    v18 = v4;
    do
    {
      v19 = *((unsigned __int16 *)v17 - 1);
      if ( (unsigned __int16)(v19 - v10) > 0xFFFDu
        || v19 > *(unsigned __int16 *)(*(_QWORD *)(a1 + 6216) + 8LL) - (int)v10 )
      {
        *v17 |= v10;
        v9 += v10;
      }
      else if ( _interlockedbittestandset(
                  (volatile signed __int32 *)(v16 + 4 * (((unsigned __int64)*((unsigned __int16 *)v17 - 1) - v10) >> 5)),
                  ((unsigned __int8)*((_WORD *)v17 - 1) - 1) & 0x1F) )
      {
        *v17 |= 2u;
        v8 += v10;
      }
      v17 += 8;
      v18 -= v10;
    }
    while ( v18 );
  }
  if ( v8 == (_DWORD)v4 || v9 == (_DWORD)v4 || v9 + v8 >= (unsigned int)v4 )
    return 0;
  v20 = v4;
  Pool = (_QWORD *)RaidAllocatePool(64LL, 2 * v4 + 22, 1230463314LL, *(_QWORD *)(a1 + 8));
  if ( !Pool )
    goto LABEL_31;
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *Pool = WorkItem;
  if ( !WorkItem )
  {
    ExFreePoolWithTag(Pool, 0x49576152u);
LABEL_31:
    if ( v16 && (_DWORD)v4 )
    {
      do
      {
        v26 = *a3;
        if ( (unsigned __int16)(v26 - 1) <= 0xFFFDu )
          _interlockedbittestandreset(
            (volatile signed __int32 *)(v16 + 4 * ((unsigned __int64)(v26 - 1) >> 5)),
            ((_BYTE)v26 - 1) & 0x1F);
        a3 += 4;
        --v20;
      }
      while ( v20 );
    }
    return 0;
  }
  *((_DWORD *)Pool + 2) |= 2u;
  v23 = 0LL;
  *((_DWORD *)Pool + 3) = 2;
  *((_BYTE *)Pool + 16) = v11;
  if ( (_DWORD)v4 )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 2) )
      {
        *((_WORD *)Pool + v23 + 11) = *a3;
        v23 = (unsigned int)(v23 + 1);
      }
      a3 += 4;
      --v20;
    }
    while ( v20 );
  }
  v24 = (struct _IO_WORKITEM *)*Pool;
  *((_WORD *)Pool + 10) = v23;
  IoQueueWorkItem(v24, v15, DelayedWorkQueue, Pool);
  return 1;
}
