/*
 * XREFs of ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x140055A60
 * Callers:
 *     ?SendWnfNotificationToVmProcess@DXGGLOBAL@@SAJPEAVDXGPROCESS@@PEBU_WNF_STATE_NAME@@IPEBX@Z @ 0x1401DFC00 (-SendWnfNotificationToVmProcess@DXGGLOBAL@@SAJPEAVDXGPROCESS@@PEBU_WNF_STATE_NAME@@IPEBX@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140055B10 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 */

void __fastcall DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
        DXG_DEFERRED_WORK_QUEUE *this,
        struct DXG_DEFERRED_QUEUE_WORK_ITEM *a2,
        bool a3)
{
  DXG_DEFERRED_WORK_QUEUE **v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v7, this, a3);
  v5 = (DXG_DEFERRED_WORK_QUEUE **)*((_QWORD *)this + 4);
  if ( *v5 != (DXG_DEFERRED_WORK_QUEUE *)((char *)this + 24) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)this + 24;
  *((_QWORD *)a2 + 1) = v5;
  *v5 = a2;
  *((_QWORD *)this + 4) = a2;
  if ( ++*((_DWORD *)this + 10) == 1 )
  {
    KeResetEvent((PRKEVENT)this + 2);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)this + 72), *((WORK_QUEUE_TYPE *)this + 26));
  }
  if ( v8 )
  {
    v6 = v7;
    *(_QWORD *)(v7 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
  }
}
