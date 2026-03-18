/*
 * XREFs of ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400E95E8
 * Callers:
 *     VidMmTerminateAllocation @ 0x14003BBF0 (VidMmTerminateAllocation.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14002FDD8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14002FF98 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
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

void __fastcall VIDMM_GLOBAL::TerminateAllocation(
        VIDMM_GLOBAL *this,
        struct _KTHREAD ****a2,
        __int64 a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4,
        struct _KTHREAD ***a5)
{
  char v6; // bl
  struct _KTHREAD **v8; // r12
  struct _KTHREAD ***v9; // rdi
  struct _KTHREAD **v10; // r15
  struct _KTHREAD **v11; // r14
  __int64 v12; // rcx
  VIDMM_GLOBAL *v13; // rcx
  __int64 *v14; // rdx
  struct _KTHREAD **v15; // r8
  __int64 v16; // rax
  __int64 **v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  char *v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rcx
  struct VIDMM_DEVICE *v27; // rcx
  struct _KTHREAD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r15
  bool v31; // zf
  bool v32; // zf
  union _LARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  _QWORD v34[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v35[20]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v36[10]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v37[32]; // [rsp+150h] [rbp+50h] BYREF
  struct _KTHREAD *v38; // [rsp+1A8h] [rbp+A8h]

  v6 = (char)a4.0;
  v8 = **a2;
  v38 = *v8;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 17));
  *((_DWORD *)a2 + 8) |= 1u;
  DXGFASTMUTEX::Release(v8 + 17);
  v9 = a2[1];
  a2[91] = a5;
  v10 = *v9;
  *((_BYTE *)v9 + 56) = 1;
  v11 = v10 + 5625;
  if ( (*((_BYTE *)v10 + 41065) & 0x10) != 0 )
  {
    v30 = (__int64)*v10;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v37, v11);
    if ( ((_BYTE)v9[39] & 7) == 4 )
    {
      VidMmSwapSuspendList(v30, (__int64)v9, 1u);
      VidMmNotifyTaskWork(
        (struct VIDMM_WORKER_THREAD2 *)v30,
        (struct VIDMM_SCHCLASS *)(v30 + 5472),
        (struct VIDMM_TASK *)(v9 + 40),
        1u);
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
  }
  else
  {
    if ( v10 != (struct _KTHREAD **)-45000LL && v10[5626] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1495;
      Timeout.QuadPart = 1495LL;
      DxgkLogInternalTriageEvent(v12, 262146LL);
    }
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v11);
    if ( ((_BYTE)v9[39] & 7) == 4 )
    {
      VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v13, (struct _LIST_ENTRY *)(v9 + 23));
      *((_BYTE *)v9 + 312) &= 0xF8u;
      v15 = *v9;
      v16 = (__int64)(*v9 + 5633);
      v17 = (__int64 **)(*v9)[5634];
      if ( *v17 != (__int64 *)v16 )
        __fastfail(3u);
      *v14 = v16;
      v14[1] = (__int64)v17;
      *v17 = v14;
      *(_QWORD *)(v16 + 8) = v14;
      KeSetEvent(*((PRKEVENT *)*v15 + 3), 0, 0);
      *((_BYTE *)v9 + 312) = (_BYTE)v9[39] & 0xF8 | 3;
      KeSetEvent(*((PRKEVENT *)**v9 + 3), 0, 0);
    }
    v10[5626] = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
  }
  while ( *((_DWORD *)a2 + 174) )
    KeWaitForSingleObject(a2 + 88, Executive, 0, 0, 0LL);
  if ( (byte_14008A201 & 0x10) != 0 )
    McTemplateK0x_EtwWriteTransfer(v18, &EventTerminateAllocation, v19, a2);
  v20 = (char *)this + 7712;
  v21 = *((_QWORD *)v38 + 2);
  if ( (*(_DWORD *)(**a2)[46] & 0x20000000) == 0 )
    v20 = (char *)this + 7728;
  _InterlockedAdd((volatile signed __int32 *)v20, 1u);
  _InterlockedAdd64((volatile signed __int64 *)v20 + 1, v21);
  v34[0] = 1LL;
  v34[1] = a2;
  memset(v36, 0, sizeof(v36));
  v36[6] = v34;
  if ( (v6 & 1) == 0 || (v28 = v8[46], LODWORD(v36[0]) = 0, (*(_DWORD *)v28 & 0x4000) != 0) )
    LODWORD(v36[0]) = 1;
  v22 = (__int64)a2[1][4];
  v23 = VidSchSubmitDeviceCommand(v22, (__int64)v36);
  if ( v23 < 0 )
  {
    WdLogSingleEntry1(3LL, v23);
    WdLogGlobalForLineNumber = 5233;
    if ( !v22 )
    {
      WdLogSingleEntry1(1LL, -1073741811LL);
      WdLogGlobalForLineNumber = 4414;
      DxgkLogInternalTriageEvent(v29, 0x40000LL);
      goto LABEL_34;
    }
    v25 = *(_QWORD *)(v22 + 40);
    VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(v22, v25, 5, v24, Timeout);
    v26 = *(_QWORD *)(v22 + 8);
    if ( v26 )
    {
      v27 = *(struct VIDMM_DEVICE **)(v26 + 792);
      if ( v27 )
        VidMmEnsureDeviceSchedulable(v27, 0);
    }
    if ( !*(_DWORD *)(v22 + 1848) )
    {
LABEL_28:
      if ( !*(_DWORD *)(v22 + 1836) )
      {
LABEL_33:
        *(_DWORD *)(v22 + 1964) = 0;
LABEL_34:
        LODWORD(v36[0]) = 0;
        VidSchSubmitDeviceCommand(v22, (__int64)v36);
        return;
      }
      memset(v35, 0, sizeof(v35));
      LODWORD(v35[4]) |= 0x10u;
      LODWORD(v35[2]) = 3;
      v35[5] = v22 + 1836;
      LOBYTE(v35[19]) = 0;
      VidSchRegisterCompletionEvent(v25, v35);
      if ( (v35[4] & 0x10) != 0 )
      {
        v32 = *(_DWORD *)v35[5] == 0;
      }
      else
      {
        if ( SLOBYTE(v35[4]) >= 0 )
        {
LABEL_31:
          VidSchWaitForCompletionEvent(v25, v35, 23LL);
LABEL_32:
          VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v25 + 2032), v35, 0LL);
          goto LABEL_33;
        }
        v32 = *(_QWORD *)v35[5] == 0LL;
      }
      if ( v32 )
        goto LABEL_32;
      goto LABEL_31;
    }
    memset(v35, 0, sizeof(v35));
    LODWORD(v35[4]) |= 0x10u;
    LODWORD(v35[2]) = 1;
    v35[5] = v22 + 1848;
    LOBYTE(v35[19]) = 0;
    VidSchRegisterCompletionEvent(v25, v35);
    if ( (v35[4] & 0x10) != 0 )
    {
      v31 = *(_DWORD *)v35[5] == 0;
    }
    else
    {
      if ( SLOBYTE(v35[4]) >= 0 )
      {
LABEL_26:
        VidSchWaitForCompletionEvent(v25, v35, 24LL);
LABEL_27:
        VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v25 + 2032), v35, 0LL);
        goto LABEL_28;
      }
      v31 = *(_QWORD *)v35[5] == 0LL;
    }
    if ( v31 )
      goto LABEL_27;
    goto LABEL_26;
  }
}
