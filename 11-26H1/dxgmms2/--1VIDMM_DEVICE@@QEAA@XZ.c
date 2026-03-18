/*
 * XREFs of ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1400E1ABC
 * Callers:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x14000471C (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14002FDD8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?VidMmSynchronizeWithWorkerThreadRun@@YAXPEBUVIDMM_WORKER_THREAD@@@Z @ 0x1400463A0 (-VidMmSynchronizeWithWorkerThreadRun@@YAXPEBUVIDMM_WORKER_THREAD@@@Z.c)
 *     ?VidMmCancelTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x14009AC7C (-VidMmCancelTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z.c)
 *     ?VidMmRemoveFromSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@@Z @ 0x14009B390 (-VidMmRemoveFromSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@@Z.c)
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1400E1D88 (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 *     FlushDevicePagingQueue @ 0x1400E1DF0 (FlushDevicePagingQueue.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1400E2318 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ??1VIDMM_PHYSICAL_DEVICE@@QEAA@XZ @ 0x1400E2470 (--1VIDMM_PHYSICAL_DEVICE@@QEAA@XZ.c)
 *     IsDeviceSelectedForPaging @ 0x1400E2704 (IsDeviceSelectedForPaging.c)
 */

void __fastcall VIDMM_DEVICE::~VIDMM_DEVICE(__int64 **this)
{
  unsigned int i; // edi
  __int64 *v3; // rax
  __int64 v4; // rsi
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rcx
  struct _LIST_ENTRY *v8; // rdi
  VIDMM_GLOBAL *v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *j; // rax
  __int64 v12; // rcx
  VIDMM_DEVICE **v13; // rdx
  VIDMM_DEVICE **v14; // rax
  int v15; // esi
  __int64 v16; // rdi
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rcx
  __int64 *v21; // rcx
  bool v22; // zf
  __int64 k; // rdi
  __int64 *v24; // rax
  void *v25; // rsi
  struct VIDMM_WORKER_THREAD2 *v26; // rcx
  _BYTE v27[40]; // [rsp+20h] [rbp-28h] BYREF

  for ( i = 0; i < *((_DWORD *)this + 15); ++i )
  {
    v3 = this[9];
    v4 = 4LL * i;
    if ( v3 )
      FlushDevicePagingQueue(**this, &v3[v4]);
    v5 = this[10];
    if ( v5 )
      FlushDevicePagingQueue(**this, &v5[v4]);
    v6 = this[11];
    if ( v6 )
      FlushDevicePagingQueue(**this, &v6[v4]);
  }
  v7 = *this;
  v8 = (struct _LIST_ENTRY *)(this + 23);
  if ( (*((_BYTE *)*this + 41065) & 0x10) != 0 )
  {
    VidMmCancelTask((struct VIDMM_TASK **)*v7, (struct VIDMM_TASK *)(this + 40));
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v27,
      (struct _KTHREAD **)*this + 5625);
    if ( v8->Flink )
      VidMmRemoveFromSuspendList(v26, (struct VIDMM_DEVICE *)this);
  }
  else
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v27, (struct _KTHREAD **)v7 + 5625);
    if ( v8->Flink )
      VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v9, v8);
    v10 = *this + 5631;
    for ( j = (_QWORD *)*v10; j != v10; j = (_QWORD *)*j )
    {
      if ( this == (__int64 **)j[7] )
        j[7] = 0LL;
    }
    KeSetEvent(*(PRKEVENT *)(**this + 24), 0, 0);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
  v12 = **this;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v12 + 8) && (unsigned __int8)IsDeviceSelectedForPaging(v12, this) )
    VidMmSynchronizeWithWorkerThreadRun((const struct VIDMM_WORKER_THREAD *)**this);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v27, (struct _KTHREAD **)*this + 5625);
  v13 = (VIDMM_DEVICE **)this[25];
  if ( v13[1] != (VIDMM_DEVICE *)(this + 25) || (v14 = (VIDMM_DEVICE **)this[26], *v14 != (VIDMM_DEVICE *)(this + 25)) )
    __fastfail(3u);
  *v14 = (VIDMM_DEVICE *)v13;
  v13[1] = (VIDMM_DEVICE *)v14;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
  v15 = *((_DWORD *)this + 15) - 1;
  if ( v15 >= 0 )
  {
    v16 = 4LL * v15;
    do
    {
      v17 = this[11];
      if ( v17 )
        VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)&v17[v16]);
      v18 = this[9];
      if ( v18 )
        VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)&v18[v16]);
      v19 = this[10];
      if ( v19 )
        VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)&v19[v16]);
      v16 -= 4LL;
      --v15;
    }
    while ( v15 >= 0 );
  }
  operator delete(this[9]);
  v20 = this[10];
  this[9] = 0LL;
  operator delete(v20);
  v21 = this[11];
  this[10] = 0LL;
  operator delete(v21);
  v22 = this[5] == 0LL;
  this[11] = 0LL;
  if ( !v22 )
  {
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 15); k = (unsigned int)(k + 1) )
    {
      v24 = this[5];
      v25 = (void *)v24[k];
      if ( v25 )
      {
        VIDMM_PHYSICAL_DEVICE::~VIDMM_PHYSICAL_DEVICE((VIDMM_PHYSICAL_DEVICE *)v24[k]);
        operator delete(v25);
        this[5][k] = 0LL;
      }
    }
    operator delete(this[5]);
    this[5] = 0LL;
  }
  if ( (*((_BYTE *)this + 58) & 1) != 0 )
    VIDMM_PROCESS::CloseAdapter((VIDMM_PROCESS *)this[1], (struct VIDMM_GLOBAL *)*this);
}
