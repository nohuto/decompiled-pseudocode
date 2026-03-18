/*
 * XREFs of ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x14010CF0C
 * Callers:
 *     ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x14010CE44 (-ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEA_KPEAW4_.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003797C (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     ??0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z @ 0x14003B56C (--0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z.c)
 *     ??1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ @ 0x14003BA5C (--1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x14003EF0C (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     McTemplateK0puu_EtwWriteTransfer @ 0x140041008 (McTemplateK0puu_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D7254 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E53F0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400E72E0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400F4F2C (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400F5BF0 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14010D768 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010DAD4 (-RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14010DB3C (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140119910 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1401275CC (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReclaimOneAllocation(
        struct _KTHREAD **this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 ***a3,
        unsigned __int64 *a4,
        enum _D3DDDI_RECLAIM_RESULT *a5)
{
  struct _VIDSCH_SYNC_OBJECT *v5; // r13
  __int64 **v8; // rax
  __int64 *v9; // rdi
  int v10; // ecx
  int v11; // ecx
  unsigned __int8 v13; // al
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct VIDMM_LOCAL_ALLOC *v17; // r12
  int v18; // r9d
  __int64 v19; // r13
  _QWORD *v20; // rax
  _QWORD *j; // r14
  _QWORD *v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  struct VIDMM_PROCESS *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  _QWORD *v28; // r13
  _QWORD *v29; // r14
  _QWORD *v30; // rbx
  __int64 v31; // rcx
  _QWORD *i; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 *v36; // r12
  __int64 v37; // rcx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int8 *v41; // [rsp+20h] [rbp-E0h]
  int Object; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v43; // [rsp+50h] [rbp-B0h] BYREF
  char v44; // [rsp+51h] [rbp-AFh]
  unsigned int v45; // [rsp+54h] [rbp-ACh]
  _QWORD *v46; // [rsp+58h] [rbp-A8h]
  struct _VIDSCH_SYNC_OBJECT *v47; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+68h] [rbp-98h]
  struct VIDMM_PAGING_QUEUE *v49; // [rsp+70h] [rbp-90h]
  unsigned __int64 v50; // [rsp+78h] [rbp-88h] BYREF
  int v51; // [rsp+80h] [rbp-80h]
  PVOID v52; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v53; // [rsp+90h] [rbp-70h]
  struct _KAPC_STATE ApcState[2]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = (struct _VIDSCH_SYNC_OBJECT *)a5;
  v52 = a4;
  v49 = a2;
  v47 = (struct _VIDSCH_SYNC_OBJECT *)a5;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a3;
    WdLogGlobalForLineNumber = 6736;
  }
  v8 = *a3;
  v50 = 0LL;
  v9 = *v8;
  v10 = *((_DWORD *)*v8 + 8);
  v48 = **v8;
  v11 = v10 & 0x40;
  if ( v11 && !a5 )
  {
    WdLogSingleEntry1(1LL, a3);
    WdLogGlobalForLineNumber = 6750;
    DxgkLogInternalTriageEvent(v31, 0x40000LL);
    VidSchMarkDeviceAsError((__int64)a3[1][4], 20);
    return 3221225485LL;
  }
  if ( (*((_BYTE *)this + 41065) & 0x20) != 0 )
    return 0LL;
  if ( !v11 || (v13 = 1, ((_DWORD)this[873] & 0x10000) == 0) )
    v13 = 0;
  v14 = (_DWORD)this[873] & 8;
  v43 = v13;
  if ( v13 )
  {
    VIDMM_GLOBAL::ForceDecommitOffer((VIDMM_GLOBAL *)this, (struct VIDMM_ALLOC *)a3);
  }
  else if ( v14 )
  {
    VIDMM_GLOBAL::ForceDiscardOffer((VIDMM_GLOBAL *)this, (struct VIDMM_ALLOC *)a3);
  }
  v44 = 0;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)ApcState, this + 5031);
  if ( v9[32] )
    VIDMM_GLOBAL::RemoveAllocationFromOfferList((VIDMM_GLOBAL *)this, (struct VIDMM_GLOBAL_ALLOC *)v9);
  if ( v9[34] )
  {
    VIDMM_GLOBAL::RemoveAllocationFromDecommitList((VIDMM_GLOBAL *)this, (struct VIDMM_GLOBAL_ALLOC *)v9);
    v44 = 1;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)ApcState);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 17));
  v15 = *((unsigned __int16 *)a3[12] + 4);
  *((_WORD *)a3[12] + 4) = 0;
  v16 = (unsigned int)(__int16)v15;
  v45 = (__int16)v15;
  if ( !(_WORD)v15 )
  {
    WdLogSingleEntry1((unsigned int)(v16 + 2), a3);
    WdLogGlobalForLineNumber = 6813;
    if ( a5 )
      *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v9 + 17);
    return DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
  }
  LODWORD(v17) = 0;
  v18 = v9[4] & 0x20;
  v51 = v18;
  if ( v44 )
  {
    v15 = *(_QWORD *)(v9[6] + 8);
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(v15 + 72) + 440LL), -*(_QWORD *)(v48 + 16));
  }
  if ( !v18 )
  {
    if ( !v43 && (*(_DWORD *)(*(_QWORD *)(v9[6] + 8) + 152LL) & 4) == 0 )
    {
      v43 = 1;
      LODWORD(v17) = VIDMM_GLOBAL::CommitGlobalBackingStore(
                       (VIDMM_GLOBAL *)this,
                       (struct VIDMM_GLOBAL_ALLOC *)v9,
                       *(struct VIDMM_PROCESS **)(*((_QWORD *)v49 + 12) + 8LL),
                       0LL,
                       &v43);
      if ( (int)v17 >= 0 )
      {
        v15 = (__int64)(v9 + 14);
        for ( i = (_QWORD *)v9[14]; ; i = (_QWORD *)*v46 )
        {
          v46 = i;
          if ( i == (_QWORD *)v15 )
          {
            v16 = v45;
            v18 = v51;
            *((_BYTE *)v9 + 42) = 0;
            goto LABEL_21;
          }
          v17 = (struct VIDMM_LOCAL_ALLOC *)(i - 6);
          v33 = *(i - 5);
          memset(ApcState, 0, 48);
          v53 = i - 6;
          KeStackAttachProcess(*(PRKPROCESS *)(v33 + 16), ApcState);
          LODWORD(v17) = VIDMM_GLOBAL::CommitLocalBackingStore((VIDMM_GLOBAL *)this, v17);
          KeUnstackDetachProcess(ApcState);
          if ( (int)v17 < 0 )
            break;
          v15 = (__int64)(v9 + 14);
        }
        WdLogSingleEntry1(1LL, v53);
        WdLogGlobalForLineNumber = 6890;
        DxgkLogInternalTriageEvent(v34, 0x40000LL);
        v36 = (__int64 *)v46[1];
        if ( v36 != v9 + 14 )
        {
          do
          {
            v37 = *(v36 - 5);
            memset(ApcState, 0, 48);
            KeStackAttachProcess(*(PRKPROCESS *)(v37 + 16), ApcState);
            VIDMM_GLOBAL::UncommitLocalBackingStore((VIDMM_GLOBAL *)this, (struct VIDMM_LOCAL_ALLOC *)(v36 - 6), 1);
            KeUnstackDetachProcess(ApcState);
            v36 = (__int64 *)v36[1];
          }
          while ( v36 != v9 + 14 );
          v5 = v47;
        }
        VIDMM_GLOBAL::UncommitGlobalBackingStore((VIDMM_GLOBAL *)this, (struct VIDMM_GLOBAL_ALLOC *)v9, 0, v35);
      }
    }
    LODWORD(v17) = 0;
    *((_WORD *)a3[12] + 4) = 3;
    *(_DWORD *)v5 = 2;
    _InterlockedAdd(&dword_14008A84C, 1u);
    WdLogSingleEntry1(6LL, v9);
    WdLogGlobalForLineNumber = 6940;
    DxgkLogInternalTriageEvent(v38, 262145LL);
    goto LABEL_37;
  }
LABEL_21:
  *((_DWORD *)v9 + 8) &= ~0x40u;
  if ( a5 )
  {
    if ( (_DWORD)v16 == 1 )
    {
      *a5 = D3DDDI_RECLAIM_RESULT_OK;
    }
    else
    {
      if ( (_DWORD)v16 == 3 )
        *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
      if ( v18 && (*(_DWORD *)(v48 + 56) & 1) == 0 && *((_BYTE *)v9 + 42) && !*((_BYTE *)v9 + 43) && (v9[4] & 8) != 0 )
      {
        if ( !v14 )
          goto LABEL_29;
        v24 = v9[6];
        if ( v24 )
        {
          v25 = *(struct VIDMM_PROCESS **)(v24 + 8);
          if ( v25 )
          {
            VIDMM_PROCESS_AUTOATTACH::VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)ApcState, v25, 1);
            v17 = (struct VIDMM_LOCAL_ALLOC *)(*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v9[27] + 40LL))(
                                                v9[27],
                                                v9[28],
                                                *(_QWORD *)(v9[6] + 16),
                                                *(_QWORD *)(v48 + 16));
            VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)ApcState);
            if ( (int)v17 < 0 )
            {
              *((_BYTE *)v9 + 42) = 0;
              WdLogSingleEntry1(4LL, v17);
              LODWORD(v17) = 0;
              WdLogGlobalForLineNumber = 7013;
            }
            else
            {
              *a5 = D3DDDI_RECLAIM_RESULT_OK;
              v9[37] = 0LL;
              WdLogSingleEntry1(4LL, v9);
              WdLogGlobalForLineNumber = 7008;
            }
            if ( (byte_14008A201 & 1) != 0 )
            {
              Object = *(_QWORD *)(v48 + 16) >> 12;
              McTemplateK0pqqt_EtwWriteTransfer((int)v17 >= 0, v26, v27, v9);
            }
            *((_DWORD *)v9 + 8) &= ~8u;
            v16 = v45;
          }
        }
        goto LABEL_81;
      }
    }
    if ( !v14 )
      goto LABEL_29;
LABEL_81:
    *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
    goto LABEL_29;
  }
  *((_BYTE *)v9 + 42) = 0;
LABEL_29:
  if ( (byte_14008A201 & 1) != 0 )
  {
    LOBYTE(Object) = v16;
    LOBYTE(v41) = *((_BYTE *)v9 + 288);
    McTemplateK0puu_EtwWriteTransfer(v15, &EventReclaimAllocation, v16, a3, v41, Object);
  }
  if ( v14 )
  {
    LODWORD(v19) = v45;
  }
  else
  {
    v19 = (int)v45;
    if ( v45 != 3 && (v45 != 2 || (v9[3] & 0x4000000) == 0) && *((_DWORD *)v9 + 18) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v15);
        v22[3] = a3;
        v22[4] = 0LL;
        v22[5] = v19;
        v23 = ((unsigned __int64)*((unsigned int *)v9 + 6) >> 26) & 1;
        v22[7] = 1LL;
        v22[6] = v23;
        WdLogGlobalForLineNumber = 7148;
      }
      goto LABEL_37;
    }
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v15);
    v39[3] = a3;
    v39[4] = v14 != 0;
    v39[5] = (int)v19;
    v40 = ((unsigned __int64)*((unsigned int *)v9 + 6) >> 26) & 1;
    v39[7] = 0LL;
    v39[6] = v40;
    WdLogGlobalForLineNumber = 7095;
  }
  v20 = v9 + 14;
  for ( j = (_QWORD *)v9[14]; ; j = (_QWORD *)*j )
  {
    v46 = j;
    if ( j == v20 )
      break;
    v28 = (_QWORD *)*(j - 2);
    if ( v28 != j - 2 )
    {
      v29 = j - 2;
      do
      {
        v30 = v28 - 5;
        if ( (*(_DWORD *)(v28 - 1) & 1) == 0 && VIDMM_ALLOC::HasAnyResidencyReferences((VIDMM_ALLOC *)(v28 - 5)) )
        {
          memset(ApcState, 0, 0x58uLL);
          LODWORD(ApcState[0].ApcListHead[0].Flink) = 210;
          ApcState[0].ApcListHead[1].Flink = (struct _LIST_ENTRY *)(v28 - 5);
          LODWORD(v17) = VIDMM_GLOBAL::QueueDeferredCommand(
                           this,
                           v49,
                           (struct _VIDMM_DEFERRED_COMMAND *)ApcState,
                           0,
                           &v50);
          if ( (*((_DWORD *)v30 + 7) & 0x20) != 0 )
          {
            v30[99] = v49;
            v30[102] = v50;
          }
        }
        v28 = (_QWORD *)*v28;
      }
      while ( v28 != v29 );
      j = v46;
      v20 = v9 + 14;
    }
  }
LABEL_37:
  DXGFASTMUTEX::Release((struct _KTHREAD **)v9 + 17);
  if ( (_DWORD)v17 == 259 )
  {
    if ( v52 )
    {
      *(_QWORD *)v52 = v50;
    }
    else
    {
      v47 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v49 + 11);
      v52 = (PVOID)v50;
      VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)this, &v47, (const unsigned __int64 *)&v52, 1u, 0LL, 0LL);
      LODWORD(v17) = 0;
    }
  }
  return (unsigned int)v17;
}
