/*
 * XREFs of ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x14013D840
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetNextPDCounterId@@YAKXZ @ 0x1400A6CA8 (-ndisGetNextPDCounterId@@YAKXZ.c)
 *     WPP_RECORDER_SF_qddS @ 0x1400A8760 (WPP_RECORDER_SF_qddS.c)
 *     WPP_RECORDER_SF_qddd @ 0x1400A88F0 (WPP_RECORDER_SF_qddd_ea_1400A88F0.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ??0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ @ 0x14013C2D4 (--0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ.c)
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x14013C51C (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x14013F4AC (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x14013F640 (-ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 *     ?ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x140140BF4 (-ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYPE@@PEAUNDIS_PD_ASSOCIATION@@E@Z @ 0x140140E30 (-ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYP.c)
 *     ?ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAUNDIS_PD_ASSOCIATION@@PEAUNDIS_PD_COUNTER@@EE@Z @ 0x140140ED4 (-ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAM.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDPIAcquireReceiveQueues(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS *a2,
        struct _NDIS_PD_QUEUE **a3,
        unsigned int *a4,
        struct _NDIS_PD_QUEUE_PARAMETERS *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  unsigned int v10; // edi
  const wchar_t *v11; // rcx
  __int64 v12; // rdx
  unsigned int *v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  __int64 v16; // rax
  KLockThisExclusive *v17; // rcx
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  NDIS_PD_COUNTER_HANDLE__ *v20; // r15
  const struct _NDIS_PD_QUEUE_PARAMETERS *v21; // r13
  NDIS_PD_COUNTER_HANDLE__ *PoolWithTag; // rax
  _QWORD *v23; // rax
  NDIS_PD_QUEUE_TRACKER *v24; // rax
  NDIS_PD_QUEUE_TRACKER *v25; // rax
  int v27; // [rsp+28h] [rbp-71h]
  unsigned int v28; // [rsp+58h] [rbp-41h]
  unsigned int v29; // [rsp+5Ch] [rbp-3Dh]
  struct _LIST_ENTRY v30; // [rsp+60h] [rbp-39h] BYREF
  KLockHolder v31; // [rsp+70h] [rbp-29h] BYREF
  KLockThisExclusive v32; // [rsp+88h] [rbp-11h] BYREF
  int v33; // [rsp+E8h] [rbp+4Fh]
  unsigned int v34; // [rsp+E8h] [rbp+4Fh]
  struct _NDIS_PD_QUEUE **v35; // [rsp+F8h] [rbp+5Fh]

  v35 = a3;
  v10 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 88) )
      v11 = L" ";
    WPP_RECORDER_SF_qddS(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)L" ",
      (__int64)a3,
      0x26u,
      v27,
      (char)a1,
      *a4,
      *a6,
      v11);
    a3 = v35;
  }
  if ( *((_BYTE *)a1 + 88) )
  {
    v33 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS *, struct _NDIS_PD_QUEUE **, unsigned int *, struct _NDIS_PD_QUEUE_PARAMETERS *, unsigned int *, unsigned int *))(*((_QWORD *)a1 + 10) + 24LL))(
            *((_QWORD *)a1 + 9),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7);
    v15 = v33;
    if ( v33 >= 0 && *a4 )
    {
      v13 = (unsigned int *)v35;
      do
      {
        (*(_QWORD **)((char *)&a5->CounterHandle + *a7 * v10))[5] = a1;
        v16 = v10++;
        *((_QWORD *)v35[v16]->PDPlatformReserved[1] + 5) = a1;
      }
      while ( v10 < *a4 );
      v15 = v33;
    }
    goto LABEL_44;
  }
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v31, qword_14011EE98);
  v17 = (KLockThisExclusive *)&v31;
  if ( *((_BYTE *)a1 + 89) )
  {
    v15 = -1073741808;
LABEL_43:
    KLockHolder::~KLockHolder(v17);
    goto LABEL_44;
  }
  *((_BYTE *)a1 + 89) = 1;
  KLockHolder::~KLockHolder(&v31);
  if ( a2->Header.Type != 0x80 || a2->Header.Revision != 1 || a2->Header.Size < 8u || (a2->Flags & 0xFFFFFFFE) != 0 )
  {
    v15 = -1073741811;
    goto LABEL_42;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS *, struct _NDIS_PD_QUEUE **, unsigned int *, struct _NDIS_PD_QUEUE_PARAMETERS *, unsigned int *, unsigned int *))(*((_QWORD *)a1 + 10) + 24LL))(
          *((_QWORD *)a1 + 9),
          a2,
          v35,
          a4,
          a5,
          a6,
          a7);
  if ( v15 < 0 )
  {
LABEL_42:
    KLockThisExclusive::KLockThisExclusive(&v32, qword_14011EE98);
    v17 = &v32;
    *((_BYTE *)a1 + 89) = 0;
    goto LABEL_43;
  }
  v12 = *a7;
  v28 = v12;
  if ( (unsigned int)v12 < 0x38
    || (v12 & 0xFFFFFFF8) != v12
    || (v29 = *a4, v14 = *a4, v18 = (unsigned int)v12 * v14, v18 > 0xFFFFFFFF)
    || (v13 = a6, (unsigned int)v18 > *a6) )
  {
LABEL_38:
    v15 = -1073741776;
LABEL_39:
    v31.m_Lock = (KPushLockBase *)&v31;
    *(_QWORD *)&v31.m_State = &v31;
    v30.Blink = &v30;
    v30.Flink = &v30;
    ndisCleanupPDRSSObjects((struct NDIS_PD_ASSOCIATION *)a1, (struct _LIST_ENTRY *)&v31, &v30);
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)a1 + 10) + 32LL))(*((_QWORD *)a1 + 9));
    ndisFreePDRSSObjects((struct _LIST_ENTRY *)&v31, &v30);
    goto LABEL_42;
  }
  v15 = 0;
  v19 = 0;
  while ( 1 )
  {
    v34 = v19;
    if ( v19 >= (unsigned int)v14 )
      break;
    v20 = 0LL;
    v21 = (struct _NDIS_PD_QUEUE_PARAMETERS *)((char *)a5 + v19 * (unsigned int)v12);
    v30.Flink = (_LIST_ENTRY *)v35[v19];
    if ( v21->Header.Type != 0x80
      || v21->Header.Revision != 1
      || v21->Header.Size < 0x38u
      || (v21->Flags & 0xFFFFFFFE) != 0
      || v21->QueueType != PDQueueTypeReceive )
    {
      goto LABEL_38;
    }
    if ( v21->CounterHandle )
    {
      PoolWithTag = (NDIS_PD_COUNTER_HANDLE__ *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x6E41444Eu);
      v20 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_37;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      *((_QWORD *)PoolWithTag + 5) = 0LL;
      *((_QWORD *)PoolWithTag + 6) = 0LL;
      *((_DWORD *)PoolWithTag + 14) = 0;
      *((_BYTE *)PoolWithTag + 60) = 0;
      *((_DWORD *)PoolWithTag + 17) = 0;
      *((_DWORD *)PoolWithTag + 22) = 0;
      *((_QWORD *)PoolWithTag + 1) = 0LL;
      *(_QWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 3) = 0LL;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      v23 = PoolWithTag + 18;
      *((_QWORD *)v20 + 10) = v23;
      *v23 = v23;
      *((_OWORD *)v20 + 6) = 0LL;
      *((_OWORD *)v20 + 7) = 0LL;
      *((_DWORD *)v20 + 16) = v34;
      *((_DWORD *)v20 + 17) = ndisGetNextPDCounterId();
      v15 = ndisPcwSetRssInstanceSuffix((struct NDIS_PD_COUNTER *)v20);
      if ( v15 < 0 )
      {
        NDIS_PD_COUNTER::`scalar deleting destructor'((_UNICODE_STRING *)v20);
        goto LABEL_39;
      }
      ndisSetupPDCounter(
        (struct NDIS_PD_COUNTER *)v20,
        v21->CounterHandle,
        PDCounterTypeReceiveQueue,
        (struct NDIS_PD_ASSOCIATION *)a1,
        1);
      v21->CounterHandle = v20;
    }
    v24 = (NDIS_PD_QUEUE_TRACKER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x138uLL, 0x7441444Eu);
    if ( !v24 || (v25 = NDIS_PD_QUEUE_TRACKER::NDIS_PD_QUEUE_TRACKER(v24)) == 0LL )
    {
LABEL_37:
      v15 = -1073741670;
      goto LABEL_39;
    }
    ndisSetupPDQTracker(
      v25,
      (struct _NDIS_PD_QUEUE *)v30.Flink,
      v21,
      (struct NDIS_PD_ASSOCIATION *)a1,
      (struct NDIS_PD_COUNTER *)v20,
      1u,
      a2->Flags & 1);
    v12 = v28;
    v19 = v34 + 1;
    v14 = v29;
  }
LABEL_44:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qddd(*((_QWORD *)WPP_GLOBAL_Control + 8), v12, (__int64)v13, v14, v27);
  return (unsigned int)v15;
}
