/*
 * XREFs of VidSchSubmitDeviceCommand @ 0x140030D50
 * Callers:
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400E95E8 (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLA.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400E9BD0 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x140113CB0 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 * Callees:
 *     ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140008B38 (-HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidMmAddPendingTermination@@YAXPEAUVIDMM_ALLOC@@@Z @ 0x140031278 (-VidMmAddPendingTermination@@YAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x14003134C (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_.c)
 *     ?VidMmOfferAllocationCallback@@YAXPEAX@Z @ 0x1400319F0 (-VidMmOfferAllocationCallback@@YAXPEAX@Z.c)
 */

__int64 __fastcall VidSchSubmitDeviceCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // r14
  __int64 v6; // rsi
  bool v7; // bp
  __int64 v8; // r10
  int v9; // r9d
  int v10; // r15d
  _QWORD *i; // r8
  int v12; // edx
  bool v13; // cc
  _QWORD *j; // rdx
  int v15; // ebx
  char v17; // si
  __int64 v18; // r11
  int v19; // r9d
  int v20; // ebp
  _QWORD *m; // r8
  int v22; // edx
  _QWORD *n; // rdx
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  KSPIN_LOCK *v27; // rcx
  __int64 *v28; // rdx
  __int64 v29; // rax
  __int64 **v30; // rcx
  __int64 *ii; // rcx
  __int64 *k; // r8
  _QWORD *v33; // r8
  __int64 v34; // rax
  __int64 v35; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v37; // [rsp+68h] [rbp-30h] BYREF

  if ( a1 && a2 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    v5 = *(_QWORD **)(a2 + 48);
    if ( !*(_DWORD *)(a2 + 40) )
    {
      *(_BYTE *)v5 = 1;
      memset(&LockHandle, 0, sizeof(LockHandle));
      v6 = v5[1];
      v7 = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 2016), &LockHandle);
      v8 = *(_QWORD *)(a1 + 1856);
      v9 = 0;
      v10 = 0;
      if ( !*(_DWORD *)a2 )
      {
        if ( !*(_DWORD *)(v6 + 692) && !*(_DWORD *)(v6 + 104) )
          v7 = (*(_BYTE *)(v6 + 25) & 1) == 0
            || !VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(*(VIDMM_GLOBAL_ALLOC_NONPAGED **)(v6 + 96));
        if ( v7 )
        {
LABEL_15:
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( !v7 )
            return 0LL;
LABEL_16:
          VidMmAddPendingTermination((struct VIDMM_ALLOC *)v6);
          return 0LL;
        }
        goto LABEL_36;
      }
      if ( *(_QWORD *)(a1 + 1864) >= v8 || !*(_DWORD *)(a1 + 1848) && !*(_DWORD *)(a1 + 1836) )
      {
LABEL_38:
        if ( !*(_DWORD *)(v6 + 692)
          && !*(_DWORD *)(v6 + 104)
          && ((*(_BYTE *)(v6 + 25) & 1) == 0
           || !VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(*(VIDMM_GLOBAL_ALLOC_NONPAGED **)(v6 + 96))) )
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          goto LABEL_16;
        }
LABEL_36:
        v27 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 40) + 2048LL);
        memset(&v37, 0, sizeof(v37));
        KeAcquireInStackQueuedSpinLockAtDpcLevel(v27, &v37);
        v28 = (__int64 *)(v6 + 736);
        v29 = *(_QWORD *)(a1 + 40) + 2080LL;
        v30 = *(__int64 ***)(*(_QWORD *)(a1 + 40) + 2088LL);
        if ( *v30 != (__int64 *)v29 )
          goto LABEL_37;
        *(_QWORD *)(v6 + 744) = v30;
        *v28 = v29;
        *v30 = v28;
        *(_QWORD *)(v29 + 8) = v28;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v37);
        goto LABEL_14;
      }
      for ( i = *(_QWORD **)(a1 + 80); i != (_QWORD *)(a1 + 80); v9 = v12 )
      {
        v12 = v9 + 1;
        v13 = i[20] <= i[18];
        i = (_QWORD *)*i;
        if ( v13 )
          v12 = v9;
      }
      for ( j = *(_QWORD **)(a1 + 96); j != (_QWORD *)(a1 + 96); j = (_QWORD *)*j )
      {
        for ( k = (__int64 *)j[4]; k != j + 4; k = (__int64 *)*k )
        {
          if ( *((_DWORD *)k + 35) && (k[8] > (unsigned __int64)k[7] || k[11] > (unsigned __int64)k[10]) )
            ++v10;
        }
      }
      if ( !v9 && !v10 )
      {
        *(_QWORD *)(a1 + 1864) = v8;
        goto LABEL_38;
      }
      v15 = VidSchiAddPendingCommandToSyncPointList(a1, v6, v8);
      if ( v15 >= 0 )
      {
LABEL_14:
        *(_BYTE *)v5 = 0;
        goto LABEL_15;
      }
      goto LABEL_30;
    }
    v17 = 1;
    if ( *(_DWORD *)a2 == 1 )
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 2016), &LockHandle);
      v18 = *(_QWORD *)(a1 + 1856);
      v19 = 0;
      v20 = 0;
      if ( *(_QWORD *)(a1 + 1864) < v18 )
      {
        if ( !*(_DWORD *)(a1 + 1848) && !*(_DWORD *)(a1 + 1836) )
          goto LABEL_66;
        for ( m = *(_QWORD **)(a1 + 80); m != (_QWORD *)(a1 + 80); v19 = v22 )
        {
          v22 = v19 + 1;
          v13 = m[20] <= m[18];
          m = (_QWORD *)*m;
          if ( v13 )
            v22 = v19;
        }
        for ( n = *(_QWORD **)(a1 + 96); n != (_QWORD *)(a1 + 96); n = (_QWORD *)*n )
        {
          for ( ii = (__int64 *)n[4]; ii != n + 4; ii = (__int64 *)*ii )
          {
            if ( *((_DWORD *)ii + 35) && (ii[8] > (unsigned __int64)ii[7] || ii[11] > (unsigned __int64)ii[10]) )
              ++v20;
          }
        }
        if ( !v19 && !v20 )
        {
          *(_QWORD *)(a1 + 1864) = v18;
LABEL_66:
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          VidMmOfferAllocationCallback(v5);
          return 0LL;
        }
        v17 = 0;
        if ( *(_DWORD *)(a2 + 40) == 3 )
        {
          v24 = *(_QWORD **)(a2 + 48);
          memset(&v37, 0, sizeof(v37));
          v25 = v24 + 94;
          v26 = v24[94];
          if ( v26 )
          {
            if ( *(_QWORD **)(v26 + 8) != v25 || (v33 = (_QWORD *)v24[95], (_QWORD *)*v33 != v25) )
LABEL_37:
              __fastfail(3u);
            *v33 = v26;
            *(_QWORD *)(v26 + 8) = v33;
            *v25 = 0LL;
            v34 = v24[12];
            v24[95] = 0LL;
            _InterlockedDecrement((volatile signed __int32 *)(v34 + 12));
          }
        }
        v15 = VidSchiAddPendingCommandToSyncPointList(a1, v5, v18);
        if ( v15 < 0 )
        {
LABEL_30:
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          return (unsigned int)v15;
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !v17 )
        return 0LL;
    }
    VidMmOfferAllocationCallback(v5);
    return 0LL;
  }
  WdLogSingleEntry1(1LL, -1073741811LL);
  WdLogGlobalForLineNumber = 7380;
  DxgkLogInternalTriageEvent(v35, 0x40000LL);
  return 3221225485LL;
}
