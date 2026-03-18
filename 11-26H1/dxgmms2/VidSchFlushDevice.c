/*
 * XREFs of VidSchFlushDevice @ 0x1400E8640
 * Callers:
 *     ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@IK@Z @ 0x1400E8494 (-WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@IK@Z.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E85D8 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchTerminateDevice @ 0x1400FD230 (VidSchTerminateDevice.c)
 *     VidSchSuspendAdapter @ 0x1401088A0 (VidSchSuspendAdapter.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x140113CB0 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x140122454 (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 *     ?WaitOnAllDMAReferencesExceptThis@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140122544 (-WaitOnAllDMAReferencesExceptThis@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     VidSchiClearFlipDevice @ 0x140003564 (VidSchiClearFlipDevice.c)
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x140035C50 (VidSchiInterlockedRemoveEntryList.c)
 *     ?VidMmEnsureDeviceSchedulable@@YAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1400393AC (-VidMmEnsureDeviceSchedulable@@YAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x14003C2CC (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiInterlockedReadUlong @ 0x14003F594 (VidSchiInterlockedReadUlong.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400EA1E8 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400EA5D8 (VidSchRegisterCompletionEvent.c)
 */

__int64 __fastcall VidSchFlushDevice(__int64 a1, int *a2, unsigned int a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // r12
  int v8; // r15d
  __int64 v9; // rsi
  __int64 v10; // rax
  struct VIDMM_DEVICE *v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rcx
  bool v15; // zf
  bool v16; // zf
  union _LARGE_INTEGER v17; // [rsp+28h] [rbp-99h]
  _QWORD v18[20]; // [rsp+58h] [rbp-69h] BYREF
  char v19; // [rsp+140h] [rbp+7Fh]

  v19 = a4;
  v4 = 0;
  v5 = a3;
  if ( a1 && a2 )
  {
    v8 = *a2;
    if ( *a2 == 13 )
    {
      *(_DWORD *)(a1 + 1968) = 1;
      VidSchMarkDeviceAsError(a1, 14);
    }
    v9 = *(_QWORD *)(a1 + 40);
    VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(a1, v9, *a2, a4, v17);
    if ( (v8 & 1) == 0 )
      goto LABEL_22;
    v10 = *(_QWORD *)(a1 + 8);
    if ( v10 )
    {
      v11 = *(struct VIDMM_DEVICE **)(v10 + 792);
      if ( v11 )
        VidMmEnsureDeviceSchedulable(v11, 0);
    }
    memset(v18, 0, sizeof(v18));
    if ( *a2 == 5 || (v12 = 1844LL, *a2 == 3) )
      v12 = 1848LL;
    if ( !*(_DWORD *)(v12 + a1) )
    {
LABEL_16:
      if ( !*(_DWORD *)(a1 + 1836) )
        goto LABEL_21;
      memset(v18, 0, sizeof(v18));
      LODWORD(v18[4]) |= 0x10u;
      LODWORD(v18[2]) = 3;
      v18[5] = a1 + 1836;
      LOBYTE(v18[19]) = v8 == 7;
      VidSchRegisterCompletionEvent(v9, v18);
      if ( (v18[4] & 0x10) != 0 )
      {
        v16 = *(_DWORD *)v18[5] == 0;
      }
      else
      {
        if ( SLOBYTE(v18[4]) >= 0 )
        {
LABEL_19:
          VidSchWaitForCompletionEvent(v9, v18, 23LL);
LABEL_20:
          VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v9 + 2032), v18, 0LL);
LABEL_21:
          if ( v8 != 5 )
          {
            if ( (_DWORD)v5 != -3 && (unsigned int)v5 >= *(_DWORD *)(v9 + 48) )
            {
              WdLogSingleEntry1(3LL, v5);
              WdLogGlobalForLineNumber = 4546;
              LODWORD(v5) = -3;
            }
            VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)v9, a1, 9, v5, v19);
            VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v9 + 2016), (_DWORD *)(a1 + 1836));
          }
LABEL_22:
          LOBYTE(v4) = v8 >= 11;
          result = 0LL;
          *(_DWORD *)(a1 + 1964) = v4;
          return result;
        }
        v16 = *(_QWORD *)v18[5] == 0LL;
      }
      if ( v16 )
        goto LABEL_20;
      goto LABEL_19;
    }
    LODWORD(v18[4]) |= 0x10u;
    v18[5] = v12 + a1;
    LODWORD(v18[2]) = 1;
    LOBYTE(v18[19]) = v8 == 7;
    VidSchRegisterCompletionEvent(v9, v18);
    if ( (v18[4] & 0x10) != 0 )
    {
      v15 = *(_DWORD *)v18[5] == 0;
    }
    else
    {
      if ( SLOBYTE(v18[4]) >= 0 )
      {
LABEL_14:
        VidSchWaitForCompletionEvent(v9, v18, 24LL);
LABEL_15:
        VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v9 + 2032), v18, 0LL);
        goto LABEL_16;
      }
      v15 = *(_QWORD *)v18[5] == 0LL;
    }
    if ( v15 )
      goto LABEL_15;
    goto LABEL_14;
  }
  WdLogSingleEntry1(1LL, -1073741811LL);
  WdLogGlobalForLineNumber = 4414;
  DxgkLogInternalTriageEvent(v14, 0x40000LL);
  return 3221225485LL;
}
