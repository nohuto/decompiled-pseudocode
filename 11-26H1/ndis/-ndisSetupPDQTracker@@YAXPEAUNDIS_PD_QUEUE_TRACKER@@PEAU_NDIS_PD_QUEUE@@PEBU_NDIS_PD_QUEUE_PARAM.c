/*
 * XREFs of ?ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAUNDIS_PD_ASSOCIATION@@PEAUNDIS_PD_COUNTER@@EE@Z @ 0x140140ED4
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x14013D840 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 *     ?NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@@Z @ 0x14013DF10 (-NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU.c)
 * Callees:
 *     ?ndisInitPDQAWM@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x14013F70C (-ndisInitPDQAWM@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisSetupPDQTracker(
        char *DeferredContext,
        struct _NDIS_PD_QUEUE *a2,
        const struct _NDIS_PD_QUEUE_PARAMETERS *a3,
        struct NDIS_PD_ASSOCIATION *a4,
        struct NDIS_PD_COUNTER *a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  struct KPushLockBase *v10; // rdx
  struct NDIS_PD_ASSOCIATION **v11; // rcx
  struct NDIS_PD_ASSOCIATION **v12; // rdx
  struct NDIS_PD_ASSOCIATION *v13; // rax
  struct NDIS_PD_ASSOCIATION **v14; // rcx
  struct NDIS_PD_COUNTER **v15; // rdx
  struct NDIS_PD_COUNTER *v16; // rbx
  KLockThisExclusive v17; // [rsp+20h] [rbp-28h] BYREF

  *((_QWORD *)DeferredContext + 6) = a2;
  *((_DWORD *)DeferredContext + 38) = a3->QueueType;
  *((_DWORD *)DeferredContext + 39) = a3->QueueSize;
  *((_DWORD *)DeferredContext + 40) = a3->ReceiveDataLength;
  *(_GROUP_AFFINITY *)(DeferredContext + 168) = a3->Affinity;
  *((_DWORD *)DeferredContext + 46) = a3->TrafficClassId;
  *((_DWORD *)DeferredContext + 47) = a3->MaximumPartialBufferCount;
  DeferredContext[200] = a6;
  *((_QWORD *)DeferredContext + 4) = a4;
  *((_DWORD *)DeferredContext + 68) = _InterlockedIncrement((volatile signed __int32 *)&qword_14011EE98[1029].m_Lock.Ptr + 1);
  if ( a7 )
    ndisInitPDQAWM(DeferredContext);
  v10 = qword_14011EE98;
  a2->PDPlatformReserved[0] = (void *)a2->Dispatch;
  a2->Dispatch = (const _NDIS_PD_QUEUE_DISPATCH *)&unk_1400F54A0;
  a2->PDPlatformReserved[1] = DeferredContext;
  KLockThisExclusive::KLockThisExclusive(&v17, v10);
  if ( *((_DWORD *)DeferredContext + 38) == 1 )
  {
    v11 = (struct NDIS_PD_ASSOCIATION **)*((_QWORD *)a4 + 17);
    if ( *v11 != (struct NDIS_PD_ASSOCIATION *)((char *)a4 + 128) )
      goto LABEL_14;
    *(_QWORD *)DeferredContext = (char *)a4 + 128;
    *((_QWORD *)DeferredContext + 1) = v11;
    *v11 = (struct NDIS_PD_ASSOCIATION *)DeferredContext;
    *((_QWORD *)a4 + 17) = DeferredContext;
    if ( a6 )
    {
      v12 = (struct NDIS_PD_ASSOCIATION **)*((_QWORD *)a4 + 19);
      v13 = (struct NDIS_PD_ASSOCIATION *)(DeferredContext + 16);
      if ( *v12 != (struct NDIS_PD_ASSOCIATION *)((char *)a4 + 144) )
        goto LABEL_14;
      *(_QWORD *)v13 = (char *)a4 + 144;
      *((_QWORD *)DeferredContext + 3) = v12;
      *v12 = v13;
      *((_QWORD *)a4 + 19) = v13;
    }
  }
  else
  {
    v14 = (struct NDIS_PD_ASSOCIATION **)*((_QWORD *)a4 + 21);
    if ( *v14 != (struct NDIS_PD_ASSOCIATION *)((char *)a4 + 160) )
      goto LABEL_14;
    *(_QWORD *)DeferredContext = (char *)a4 + 160;
    *((_QWORD *)DeferredContext + 1) = v14;
    *v14 = (struct NDIS_PD_ASSOCIATION *)DeferredContext;
    *((_QWORD *)a4 + 21) = DeferredContext;
    *((_DWORD *)DeferredContext + 48) = -1;
  }
  if ( a5 )
  {
    *((_QWORD *)DeferredContext + 28) = a5;
    v15 = (struct NDIS_PD_COUNTER **)*((_QWORD *)a5 + 10);
    v16 = (struct NDIS_PD_COUNTER *)(DeferredContext + 232);
    if ( *v15 == (struct NDIS_PD_COUNTER *)((char *)a5 + 72) )
    {
      *(_QWORD *)v16 = (char *)a5 + 72;
      *((_QWORD *)v16 + 1) = v15;
      *v15 = v16;
      *((_QWORD *)a5 + 10) = v16;
      ++*((_DWORD *)a5 + 22);
      goto LABEL_13;
    }
LABEL_14:
    __fastfail(3u);
  }
LABEL_13:
  KLockHolder::~KLockHolder(&v17);
}
