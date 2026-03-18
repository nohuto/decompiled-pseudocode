/*
 * XREFs of ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400E72E0
 * Callers:
 *     VidMmWaitForFences @ 0x140045440 (VidMmWaitForFences.c)
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1400A2D54 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PE.c)
 *     ?WaitForPagingOperationFences@VIDMM_GLOBAL@@QEAAXIPEB_KIPEAU_KEVENT@@@Z @ 0x1400A385C (-WaitForPagingOperationFences@VIDMM_GLOBAL@@QEAAXIPEB_KIPEAU_KEVENT@@@Z.c)
 *     ?MapGpuVaVidMmAlloc@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400A5570 (-MapGpuVaVidMmAlloc@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_S.c)
 *     ?OpenFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1400A5A70 (-OpenFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE.c)
 *     ?RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@I@Z @ 0x1400A5F58 (-RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDM.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DE210 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1400E49FC (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGIN.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E53F0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1400E591C (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E68D8 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1400E7230 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     AddDmaBufferToPool @ 0x1400ED250 (AddDmaBufferToPool.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x14010CF0C (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     VidSchSubmitWaitFromCpu @ 0x1400119F0 (VidSchSubmitWaitFromCpu.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x14003B0B8 (VidSchIsMonitoredFenceSignaled.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall VIDMM_GLOBAL::WaitForFences(
        VIDMM_GLOBAL *this,
        struct _VIDSCH_SYNC_OBJECT **a2,
        const unsigned __int64 *a3,
        unsigned int a4,
        const unsigned __int64 *a5,
        struct _KEVENT *Object)
{
  struct _KEVENT *v6; // rbx
  char v7; // r14
  const unsigned __int64 *v8; // rdi
  char *v9; // r11
  __int64 v10; // rsi
  char v11; // r10
  VIDMM_GLOBAL *v12; // rax
  __int64 v13; // r15
  const unsigned __int64 *v14; // r13
  struct _VIDSCH_SYNC_OBJECT **v15; // r12
  __int64 v16; // rbx
  char *v17; // r14
  void *v18; // rax
  const unsigned __int64 *v19; // rdx
  signed __int64 v20; // r9
  signed __int64 v21; // r10
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  int v24; // r9d
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rcx
  PRKEVENT v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // [rsp+28h] [rbp-D8h]
  __int64 v34; // [rsp+30h] [rbp-D0h]
  __int64 v35; // [rsp+38h] [rbp-C8h]
  char v36; // [rsp+50h] [rbp-B0h]
  char v37; // [rsp+51h] [rbp-AFh]
  PRKEVENT Event; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h]
  _BYTE v41[16]; // [rsp+68h] [rbp-98h] BYREF
  int v42; // [rsp+78h] [rbp-88h]
  struct _KEVENT *v43; // [rsp+80h] [rbp-80h]
  VIDMM_GLOBAL *v44; // [rsp+88h] [rbp-78h]
  const unsigned __int64 *v45; // [rsp+90h] [rbp-70h]
  struct _VIDSCH_SYNC_OBJECT **v46; // [rsp+98h] [rbp-68h]
  union _LARGE_INTEGER Interval; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v48[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v49; // [rsp+C8h] [rbp-38h]
  PVOID Pool2; // [rsp+D8h] [rbp-28h]
  _BYTE v51[16]; // [rsp+E0h] [rbp-20h] BYREF
  int v52; // [rsp+F0h] [rbp-10h]

  v6 = Object;
  v7 = 1;
  v8 = a5;
  v9 = 0LL;
  v10 = a4;
  v11 = 1;
  v12 = this;
  v43 = Object;
  LODWORD(v13) = a4;
  Event = 0LL;
  v14 = a3;
  v37 = 1;
  v15 = a2;
  v36 = 1;
  v45 = a3;
  v46 = a2;
  v44 = this;
  while ( 1 )
  {
    Pool2 = 0LL;
    v52 = 0;
    P = 0LL;
    v42 = 0;
    if ( !v8 || *((_BYTE *)v12 + 4576) )
      goto LABEL_27;
    if ( (unsigned int)v10 <= 2 )
    {
      Pool2 = v51;
      if ( !(_DWORD)v10 )
        goto LABEL_11;
      memset(v51, 0, 8LL * (unsigned int)v10);
    }
    else
    {
      v16 = (unsigned int)v10;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v10 < 8 )
      {
        v17 = 0LL;
        goto LABEL_18;
      }
      Pool2 = (PVOID)ExAllocatePool2(64LL, 8 * v10, 945908054LL);
    }
    v9 = 0LL;
LABEL_11:
    v17 = (char *)Pool2;
    v52 = v10;
    v16 = (unsigned int)v10;
    if ( a4 <= 2 )
    {
      v10 = a4;
      P = v41;
      if ( a4 )
        memset(v41, 0, 8 * v16);
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v10 < 8 )
      {
        v10 = a4;
        goto LABEL_18;
      }
      v18 = (void *)ExAllocatePool2(64LL, 8 * v10, 945908054LL);
      v16 = v10;
      v10 = a4;
      P = v18;
    }
    v9 = (char *)P;
    v42 = v10;
LABEL_18:
    if ( !v17 || !v9 )
    {
      LODWORD(v27) = -1073741801;
      WdLogSingleEntry1(1LL, -1073741801LL);
      WdLogGlobalForLineNumber = 16028;
      HIDWORD(v35) = 0;
      HIDWORD(v34) = 0;
      HIDWORD(v33) = 0;
      DxgkLogInternalTriageEvent(v29, 0x40000LL);
      v6 = v43;
      v7 = v37;
      goto LABEL_43;
    }
    v13 = 0LL;
    if ( (_DWORD)v10 )
    {
      v19 = a5;
      v20 = (char *)v45 - (char *)a5;
      v21 = (char *)v46 - (char *)a5;
      do
      {
        v22 = *(const unsigned __int64 *)((char *)v19 + v20);
        if ( *v19 <= v22 || *v19 - v22 < 0x7FFFFFFF )
        {
          v23 = 8 * v13;
          v13 = (unsigned int)(v13 + 1);
          *(_QWORD *)&v17[v23] = v22;
          *(_QWORD *)&v9[v23] = *(const unsigned __int64 *)((char *)v19 + v21);
        }
        ++v19;
        --v16;
      }
      while ( v16 );
    }
    v14 = (const unsigned __int64 *)Pool2;
    v9 = 0LL;
    v15 = (struct _VIDSCH_SYNC_OBJECT **)P;
    v6 = v43;
    v7 = v37;
    v11 = v36;
LABEL_27:
    v24 = 0;
    if ( (_DWORD)v13 )
    {
      while ( 1 )
      {
        v25 = (__int64)v15[v24];
        if ( v25 )
        {
          if ( !VidSchIsMonitoredFenceSignaled(v25, v14[v24]) )
            break;
        }
        if ( ++v24 >= (unsigned int)v13 )
          goto LABEL_31;
      }
      v36 = 0;
      goto LABEL_32;
    }
LABEL_31:
    if ( v11 )
      break;
LABEL_32:
    if ( v6 )
    {
      v30 = v6;
      Event = v6;
    }
    else
    {
      LODWORD(v35) = (_DWORD)v9;
      LODWORD(v34) = (_DWORD)v9;
      LODWORD(v33) = 24;
      v48[0] = 48LL;
      v48[3] = 512LL;
      v48[1] = v9;
      v48[2] = v9;
      v49 = 0LL;
      v26 = ObCreateObject(0LL, ExEventObjectType, v48, 0LL, v9, v33, v34, v35, &Event);
      LODWORD(v27) = v26;
      if ( v26 < 0 )
      {
        WdLogSingleEntry1(1LL, v26);
        WdLogGlobalForLineNumber = 16117;
        HIDWORD(v35) = 0;
        HIDWORD(v34) = 0;
        HIDWORD(v33) = 0;
        DxgkLogInternalTriageEvent(v28, 0x40000LL);
        v6 = v43;
        goto LABEL_43;
      }
      KeInitializeEvent(Event, SynchronizationEvent, 0);
      v30 = Event;
    }
    ObfReferenceObject(v30);
    v31 = VidSchSubmitWaitFromCpu(
            v13,
            v15,
            v14,
            (__int64)Event,
            0,
            1,
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v44 + 2) + 744LL) + 320LL),
            0LL);
    v27 = v31;
    if ( v31 >= 0 )
    {
      v7 = 0;
      v37 = 0;
      if ( v6 )
        goto LABEL_55;
      LODWORD(v27) = KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
    }
    else
    {
      ObfDereferenceObject(Event);
      WdLogSingleEntry1(1LL, v27);
      WdLogGlobalForLineNumber = 16151;
      HIDWORD(v35) = 0;
      HIDWORD(v34) = 0;
      HIDWORD(v33) = 0;
      DxgkLogInternalTriageEvent(v32, 0x40000LL);
      v6 = v43;
    }
LABEL_43:
    if ( Event )
    {
      ObfDereferenceObject(Event);
      Event = 0LL;
    }
    if ( (int)v27 >= 0 || !v7 )
      goto LABEL_55;
    Interval.QuadPart = 50000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( P != v41 && P )
      ExFreePoolWithTag(P, 0);
    v8 = a5;
    v9 = 0LL;
    v11 = v36;
    v12 = v44;
    P = 0LL;
    v42 = 0;
    if ( Pool2 != v51 )
    {
      if ( Pool2 )
      {
        ExFreePoolWithTag(Pool2, 0);
        v11 = v36;
        v9 = 0LL;
        v12 = v44;
      }
    }
  }
  if ( v6 )
    KeSetEvent(v6, 0, 0);
LABEL_55:
  if ( P != v41 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v42 = 0;
  if ( Pool2 != v51 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
