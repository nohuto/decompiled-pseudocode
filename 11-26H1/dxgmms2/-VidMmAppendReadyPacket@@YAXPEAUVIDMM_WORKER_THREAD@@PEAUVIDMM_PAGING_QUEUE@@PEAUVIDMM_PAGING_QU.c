/*
 * XREFs of ?VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1400E6BC0
 * Callers:
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1400E49FC (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGIN.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E53F0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1400E591C (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E68D8 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14002FDD8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140030174 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0pppxqpq_EtwWriteTransfer @ 0x14003D490 (McTemplateK0pppxqpq_EtwWriteTransfer.c)
 *     McTemplateK0pppxqq_EtwWriteTransfer @ 0x14003E314 (McTemplateK0pppxqq_EtwWriteTransfer.c)
 *     ?VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z @ 0x1400990DC (-VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z.c)
 *     ?VidMmSwapSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1400B9098 (-VidMmSwapSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@.c)
 *     ?GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ @ 0x1400E8468 (-GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ.c)
 */

void __fastcall VidMmAppendReadyPacket(
        struct VIDMM_WORKER_THREAD *a1,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_PAGING_QUEUE_PACKET *a3,
        unsigned __int64 *a4)
{
  bool v5; // zf
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ecx
  unsigned __int64 v13; // rax
  struct VIDMM_PAGING_QUEUE **v14; // rcx
  _QWORD *v15; // r14
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  struct VIDMM_PAGING_QUEUE **v18; // rax
  struct VIDMM_PAGING_QUEUE **v19; // rcx
  struct VIDMM_WORKER_THREAD ***v20; // r8
  int v21; // eax
  struct VIDMM_WORKER_THREAD **v22; // rcx
  char *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  _BYTE *v26; // rdi
  __int64 v27; // rcx
  DXGPUSHLOCK *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rdx
  VIDMM_GLOBAL *v31; // rcx
  __int64 v32; // r8
  __int64 *v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 **v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rax
  struct VIDMM_DEVICE *VidMmDevice; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rsi
  _BYTE v44[32]; // [rsp+50h] [rbp-38h] BYREF

  v5 = *((_BYTE *)a3 + 24) == 0;
  *((_QWORD *)a3 + 2) = KeGetCurrentThread();
  if ( !v5 )
  {
    v9 = *((_QWORD *)a3 + 8);
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 696));
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a1 + 184, 0LL);
  *((_QWORD *)a1 + 24) = KeGetCurrentThread();
  if ( *((_BYTE *)a3 + 25) )
  {
    v12 = *((_DWORD *)a2 + 28);
    *((_QWORD *)a2 + 8) += *((unsigned int *)a2 + 27);
    if ( (v12 & 4) == 0 )
      *((_DWORD *)a2 + 17) = 0;
    v13 = *((_QWORD *)a2 + 8);
    *((_QWORD *)a3 + 4) = v13;
    *a4 = v13;
  }
  v14 = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 5);
  if ( *v14 != (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 32) )
LABEL_9:
    __fastfail(3u);
  *(_QWORD *)a3 = (char *)a2 + 32;
  *((_QWORD *)a3 + 1) = v14;
  *v14 = a3;
  *((_QWORD *)a2 + 5) = a3;
  if ( *((_BYTE *)a3 + 24) )
  {
    v15 = (_QWORD *)((char *)a3 + 64);
    if ( (byte_14008A201 & 1) != 0 )
    {
      VidMmDevice = VIDMM_PAGING_QUEUE_PACKET::GetVidMmDevice(a3);
      McTemplateK0pppxqpq_EtwWriteTransfer(
        *((_QWORD *)a3 + 5),
        v40,
        v41,
        *((_QWORD *)VidMmDevice + 3),
        a2,
        a3,
        *((_QWORD *)a3 + 5),
        *((_DWORD *)a3 + 12),
        *v15,
        v40);
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
      v16[3] = a3;
      v16[4] = *((int *)a3 + 12);
      v16[5] = *v15;
      v16[6] = *((_QWORD *)a3 + 7);
      v14 = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a3 + 4);
      v16[7] = v14;
      WdLogGlobalForLineNumber = 548;
    }
  }
  else
  {
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0pppxqq_EtwWriteTransfer(
        (__int64)v14,
        v10,
        v11,
        *(_QWORD *)(*(_QWORD *)a1 + 24LL),
        a2,
        a3,
        *((_QWORD *)a3 + 5),
        *((_DWORD *)a3 + 12),
        (*((_DWORD *)a2 + 28) >> 3) & 3);
    if ( g_IsInternalReleaseOrDbg )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
      v37[3] = a3;
      v37[4] = *((int *)a3 + 12);
      v37[5] = *((unsigned __int8 *)a3 + 25);
      v14 = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a3 + 4);
      v37[6] = v14;
      WdLogGlobalForLineNumber = 567;
    }
  }
  if ( !*((_DWORD *)a2 + 26) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
      v17[3] = a2;
      v17[4] = *((int *)a2 + 26);
      v17[5] = 1LL;
      WdLogGlobalForLineNumber = 703;
    }
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 41065LL) & 0x10) == 0 )
    {
      if ( *((_DWORD *)a2 + 26) == 2 )
      {
        v18 = *(struct VIDMM_PAGING_QUEUE ***)a2;
        if ( *(struct VIDMM_PAGING_QUEUE **)(*(_QWORD *)a2 + 8LL) != a2 )
          goto LABEL_9;
        v19 = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 1);
        if ( *v19 != a2 )
          goto LABEL_9;
        *v19 = (struct VIDMM_PAGING_QUEUE *)v18;
        v20 = (struct VIDMM_WORKER_THREAD ***)((char *)a2 + 8);
        v18[1] = (struct VIDMM_PAGING_QUEUE *)v19;
        if ( v19 != v18 )
          v20 = (struct VIDMM_WORKER_THREAD ***)((char *)a2 + 8);
        *(_QWORD *)a2 = 0LL;
        *((_QWORD *)a2 + 1) = 0LL;
      }
      else
      {
        v20 = (struct VIDMM_WORKER_THREAD ***)((char *)a2 + 8);
      }
      v21 = *((_DWORD *)a2 + 28);
      if ( (v21 & 1) != 0 )
      {
        if ( (v21 & 0x18) == 0x18 )
        {
          v22 = (struct VIDMM_WORKER_THREAD **)*((_QWORD *)a1 + 5);
          v23 = (char *)a1 + 32;
          if ( *v22 != (struct VIDMM_WORKER_THREAD *)((char *)a1 + 32) )
            goto LABEL_9;
        }
        else
        {
          v22 = (struct VIDMM_WORKER_THREAD **)*((_QWORD *)a1 + 9);
          v23 = (char *)a1 + 64;
          if ( *v22 != (struct VIDMM_WORKER_THREAD *)((char *)a1 + 64) )
            goto LABEL_9;
        }
      }
      else if ( (v21 & 2) != 0 )
      {
        v22 = (struct VIDMM_WORKER_THREAD **)*((_QWORD *)a1 + 7);
        v23 = (char *)a1 + 48;
        if ( *v22 != (struct VIDMM_WORKER_THREAD *)((char *)a1 + 48) )
          goto LABEL_9;
      }
      else
      {
        v22 = (struct VIDMM_WORKER_THREAD **)*((_QWORD *)a1 + 5);
        v23 = (char *)a1 + 32;
        if ( *v22 != (struct VIDMM_WORKER_THREAD *)((char *)a1 + 32) )
          goto LABEL_9;
      }
      *(_QWORD *)a2 = v23;
      *v20 = v22;
      *v22 = a2;
      *((_QWORD *)v23 + 1) = a2;
    }
    *((_DWORD *)a2 + 26) = 1;
    KeSetEvent(*((PRKEVENT *)a1 + 3), 0, 0);
    if ( *((_BYTE *)a3 + 24) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v25 = WdLogNewEntry5_WdTrace(v24);
        *(_QWORD *)(v25 + 24) = a2;
        *(_QWORD *)(v25 + 32) = *((_QWORD *)a3 + 7);
        WdLogGlobalForLineNumber = 576;
      }
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      v38 = WdLogNewEntry5_WdTrace(v24);
      *(_QWORD *)(v38 + 24) = a2;
      *(_QWORD *)(v38 + 32) = **((_QWORD **)a2 + 12);
      WdLogGlobalForLineNumber = 580;
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 41065LL) & 0x10) != 0 )
  {
    if ( *((_DWORD *)a2 + 26) == 1 )
    {
      v42 = 5472LL;
      if ( (*((_DWORD *)a2 + 28) & 0x18) == 24 || (*((_DWORD *)a2 + 28) & 1) == 0 )
        v42 = 5392LL;
      VidMmNotifyTaskWork(
        a1,
        (struct VIDMM_WORKER_THREAD *)((char *)a1 + v42),
        (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 120),
        1u);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)a2 + 48);
    }
  }
  ++*(_DWORD *)(*((_QWORD *)a2 + 12) + 64LL);
  ++*((_DWORD *)a1 + 52);
  *((_QWORD *)a1 + 24) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a1 + 184, 0LL);
  KeLeaveCriticalRegion();
  v26 = (_BYTE *)*((_QWORD *)a2 + 12);
  if ( v26[56] )
  {
    v27 = *(_QWORD *)v26;
    v26[56] = 1;
    v28 = (DXGPUSHLOCK *)(v27 + 45000);
    if ( (*(_BYTE *)(v27 + 41065) & 0x10) != 0 )
    {
      v43 = *(_QWORD *)v27;
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v44,
        (struct _KTHREAD **)(v27 + 45000));
      if ( (v26[312] & 7) == 4 )
      {
        VidMmSwapSuspendList(v43, (__int64)v26, 1u);
        VidMmNotifyTaskWork(
          (struct VIDMM_WORKER_THREAD2 *)v43,
          (struct VIDMM_SCHCLASS *)(v43 + 5472),
          (struct VIDMM_TASK *)(v26 + 320),
          1u);
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v44);
    }
    else
    {
      if ( v27 != -45000 && *(struct _KTHREAD **)(v27 + 45008) == KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1495;
        DxgkLogInternalTriageEvent(v29, 262146LL);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v28, 0LL) )
      {
        DXGPUSHLOCK::LogEvent(v28, v30, v32);
        ExAcquirePushLockExclusiveEx(v28, 0LL);
      }
      *((_QWORD *)v28 + 1) = KeGetCurrentThread();
      if ( (v26[312] & 7) == 4 )
      {
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v31, (struct _LIST_ENTRY *)(v26 + 184));
        v26[312] &= 0xF8u;
        v34 = *(_QWORD *)v26;
        v35 = *(_QWORD *)v26 + 45064LL;
        v36 = *(__int64 ***)(*(_QWORD *)v26 + 45072LL);
        if ( *v36 != (__int64 *)v35 )
          goto LABEL_9;
        *v33 = v35;
        v33[1] = (__int64)v36;
        *v36 = v33;
        *(_QWORD *)(v35 + 8) = v33;
        KeSetEvent(*(PRKEVENT *)(*(_QWORD *)v34 + 24LL), 0, 0);
        v26[312] = v26[312] & 0xF8 | 3;
        KeSetEvent(*(PRKEVENT *)(**(_QWORD **)v26 + 24LL), 0, 0);
      }
      *((_QWORD *)v28 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v28, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
