/*
 * XREFs of ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400E9BD0
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14002FDD8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140030174 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     VidSchSubmitDeviceCommand @ 0x140030D50 (VidSchSubmitDeviceCommand.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x140035C50 (VidSchiInterlockedRemoveEntryList.c)
 *     ?VidMmEnsureDeviceSchedulable@@YAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1400393AC (-VidMmEnsureDeviceSchedulable@@YAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x14003C2CC (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z @ 0x1400990DC (-VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z.c)
 *     ?VidMmSwapSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1400B9098 (-VidMmSwapSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@.c)
 *     VidSchWaitForCompletionEvent @ 0x1400EA1E8 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400EA5D8 (VidSchRegisterCompletionEvent.c)
 */

void __fastcall VIDMM_GLOBAL::TerminateOneAllocation(
        VIDMM_GLOBAL *this,
        int ***a2,
        __int64 a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4,
        int **a5)
{
  char v6; // bl
  int *v8; // r15
  __int64 v9; // r13
  __int64 v10; // rcx
  int **v12; // rdi
  int *v13; // rcx
  DXGPUSHLOCK *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  VIDMM_GLOBAL *v17; // rcx
  __int64 v18; // r8
  __int64 *v19; // rdx
  int *v20; // r8
  __int64 v21; // rax
  __int64 **v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  char *v25; // r8
  unsigned __int64 v26; // rdx
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // r9
  __int64 v30; // rbx
  __int64 v31; // rcx
  struct VIDMM_DEVICE *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r13
  union _LARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  _QWORD v36[2]; // [rsp+50h] [rbp-B0h] BYREF
  BOOL v37; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+64h] [rbp-9Ch]
  __int64 v39; // [rsp+6Ch] [rbp-94h]
  int v40; // [rsp+74h] [rbp-8Ch]
  __int64 v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  _QWORD *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  __int128 v46; // [rsp+A0h] [rbp-60h]
  _QWORD v47[20]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v48[80]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v49; // [rsp+1B8h] [rbp+B8h]

  v6 = (char)a4.0;
  v8 = **a2;
  v9 = *(_QWORD *)v8;
  v49 = *(_QWORD *)v8;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 34));
  *((_DWORD *)a2 + 8) |= 1u;
  if ( *((struct _KTHREAD **)v8 + 20) != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v8 + 34, 0LL, 0LL);
    WdLogGlobalForLineNumber = 553;
  }
  if ( v8[42] <= 0 )
  {
    WdLogSingleEntry0(1LL);
    Timeout.QuadPart = 556LL;
    WdLogGlobalForLineNumber = 556;
    DxgkLogInternalTriageEvent(v10, 262146LL);
  }
  if ( v8[42]-- == 1 )
  {
    *((_QWORD *)v8 + 20) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 36, 0LL);
  }
  KeLeaveCriticalRegion();
  v12 = a2[1];
  a2[91] = a5;
  v13 = *v12;
  *((_BYTE *)v12 + 56) = 1;
  v14 = (DXGPUSHLOCK *)(v13 + 11250);
  if ( (*((_BYTE *)v13 + 41065) & 0x10) != 0 )
  {
    v34 = *(_QWORD *)v13;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v48, (struct _KTHREAD **)v13 + 5625);
    if ( ((_BYTE)v12[39] & 7) == 4 )
    {
      VidMmSwapSuspendList(v34, (__int64)v12, 1u);
      VidMmNotifyTaskWork(
        (struct VIDMM_WORKER_THREAD2 *)v34,
        (struct VIDMM_SCHCLASS *)(v34 + 5472),
        (struct VIDMM_TASK *)(v12 + 40),
        1u);
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48);
    v9 = v49;
  }
  else
  {
    if ( v13 != (int *)-45000LL && *((struct _KTHREAD **)v13 + 5626) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      Timeout.QuadPart = 1495LL;
      WdLogGlobalForLineNumber = 1495;
      DxgkLogInternalTriageEvent(v15, 262146LL);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v14, 0LL) )
    {
      DXGPUSHLOCK::LogEvent(v14, v16, v18);
      ExAcquirePushLockExclusiveEx(v14, 0LL);
    }
    *((_QWORD *)v14 + 1) = KeGetCurrentThread();
    if ( ((_BYTE)v12[39] & 7) == 4 )
    {
      VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v17, (struct _LIST_ENTRY *)(v12 + 23));
      *((_BYTE *)v12 + 312) &= 0xF8u;
      v20 = *v12;
      v21 = (__int64)(*v12 + 11266);
      v22 = (__int64 **)*((_QWORD *)*v12 + 5634);
      if ( *v22 != (__int64 *)v21 )
        __fastfail(3u);
      *v19 = v21;
      v19[1] = (__int64)v22;
      *v22 = v19;
      *(_QWORD *)(v21 + 8) = v19;
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)v20 + 24LL), 0, 0);
      *((_BYTE *)v12 + 312) = (_BYTE)v12[39] & 0xF8 | 3;
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)*v12 + 24LL), 0, 0);
    }
    *((_QWORD *)v14 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
  }
  while ( *((_DWORD *)a2 + 174) )
    KeWaitForSingleObject(a2 + 88, Executive, 0, 0, 0LL);
  if ( (byte_14008A201 & 0x10) != 0 )
    McTemplateK0x_EtwWriteTransfer(v23, &EventTerminateAllocation, v24, a2);
  v25 = (char *)this + 7712;
  v26 = *(_QWORD *)(v9 + 16);
  if ( (**((_DWORD **)**a2 + 46) & 0x20000000) == 0 )
    v25 = (char *)this + 7728;
  _InterlockedIncrement((volatile signed __int32 *)v25);
  _InterlockedAdd64((volatile signed __int64 *)v25 + 1, v26);
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v41 = 0LL;
  v44 = v36;
  v36[0] = 1LL;
  v36[1] = a2;
  v37 = (v6 & 1) == 0 || (**((_DWORD **)v8 + 46) & 0x4000) != 0;
  v27 = (__int64)a2[1][4];
  v28 = VidSchSubmitDeviceCommand(v27, (__int64)&v37);
  if ( v28 < 0 )
  {
    WdLogSingleEntry1(3LL, v28);
    WdLogGlobalForLineNumber = 5233;
    if ( !v27 )
    {
      WdLogSingleEntry1(1LL, -1073741811LL);
      WdLogGlobalForLineNumber = 4414;
      DxgkLogInternalTriageEvent(v33, 0x40000LL);
      goto LABEL_42;
    }
    v30 = *(_QWORD *)(v27 + 40);
    VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(v27, v30, 5, v29, Timeout);
    v31 = *(_QWORD *)(v27 + 8);
    if ( v31 )
    {
      v32 = *(struct VIDMM_DEVICE **)(v31 + 792);
      if ( v32 )
        VidMmEnsureDeviceSchedulable(v32, 0);
    }
    if ( !*(_DWORD *)(v27 + 1848) )
    {
LABEL_36:
      if ( !*(_DWORD *)(v27 + 1836) )
      {
LABEL_41:
        *(_DWORD *)(v27 + 1964) = 0;
LABEL_42:
        v37 = 0;
        VidSchSubmitDeviceCommand(v27, (__int64)&v37);
        return;
      }
      memset(v47, 0, sizeof(v47));
      LODWORD(v47[4]) |= 0x10u;
      LODWORD(v47[2]) = 3;
      v47[5] = v27 + 1836;
      LOBYTE(v47[19]) = 0;
      VidSchRegisterCompletionEvent(v30, v47);
      if ( (v47[4] & 0x10) != 0 )
      {
        if ( !*(_DWORD *)v47[5] )
          goto LABEL_40;
      }
      else if ( SLOBYTE(v47[4]) < 0 && !*(_QWORD *)v47[5] )
      {
        goto LABEL_40;
      }
      VidSchWaitForCompletionEvent(v30, v47, 23LL);
LABEL_40:
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v30 + 2032), v47, 0LL);
      goto LABEL_41;
    }
    memset(v47, 0, sizeof(v47));
    LODWORD(v47[4]) |= 0x10u;
    LODWORD(v47[2]) = 1;
    v47[5] = v27 + 1848;
    LOBYTE(v47[19]) = 0;
    VidSchRegisterCompletionEvent(v30, v47);
    if ( (v47[4] & 0x10) != 0 )
    {
      if ( !*(_DWORD *)v47[5] )
        goto LABEL_35;
    }
    else if ( SLOBYTE(v47[4]) < 0 && !*(_QWORD *)v47[5] )
    {
      goto LABEL_35;
    }
    VidSchWaitForCompletionEvent(v30, v47, 24LL);
LABEL_35:
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v30 + 2032), v47, 0LL);
    goto LABEL_36;
  }
}
