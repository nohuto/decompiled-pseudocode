/*
 * XREFs of ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1403511A0
 * Callers:
 *     ?InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@@Z @ 0x1401E2F50 (-InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1401FDB60 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     NtDxgkCreateNativeFenceInternal @ 0x140200CD8 (NtDxgkCreateNativeFenceInternal.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAUDXGK_PRESENT_PARAMS@@1@Z @ 0x1402E5630 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x1402F7CF0 (-EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x14034F800 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x14035097C (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x140067CAC (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1403516A8 (-SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAEI@Z @ 0x1403517DC (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAEI@Z.c)
 *     ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAU_D3DDDI_NATIVEFENCEINFO@@@Z @ 0x1403525C8 (--0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJE.c)
 *     ??0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x14035277C (--0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77I@Z @ 0x140352B34 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1403531A0 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::CreateSyncObject(
        __int64 a1,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        bool a7,
        struct DXGPAGINGQUEUE *a8,
        __int64 *a9,
        struct DXGDEVICESYNCOBJECT **a10,
        unsigned int *a11,
        struct DXGADAPTERSYNCOBJECT **a12,
        __int64 a13,
        unsigned __int8 *a14)
{
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v21; // r12d
  int v22; // esi
  int v23; // eax
  int v24; // eax
  __int64 *v25; // rax
  __int64 v26; // rcx
  int v28; // eax
  unsigned int v29; // ebx
  const wchar_t *v30; // r9
  __int64 v31; // rax
  struct DXGDEVICESYNCOBJECT *v32; // rcx
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v33; // [rsp+50h] [rbp-78h]

  if ( !a9 && !a10 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3163;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ppSyncObject != NULL || ppDeviceSyncObject != NULL",
      3163LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a5 )
  {
    if ( a13 )
      goto LABEL_4;
    v29 = -1073741811;
    WdLogSingleEntry1(2LL);
    v30 = L"Cannot create syncobject without specifying either SyncObjectInfo and NativeFenceInfo, returning 0x%I64x";
    WdLogGlobalForLineNumber = 3175;
LABEL_39:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v30, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    return v29;
  }
  if ( a13 )
  {
    v29 = -1073741811;
    WdLogSingleEntry1(2LL);
    v30 = L"Cannot create syncobject using both SyncObjectInfo and NativeFenceInfo, returning 0x%I64x";
    WdLogGlobalForLineNumber = 3168;
    goto LABEL_39;
  }
LABEL_4:
  if ( a9 )
    *a9 = 0LL;
  if ( a10 )
    *a10 = 0LL;
  if ( a11 )
    *a11 = 0;
  if ( a5 )
    v16 = *(_DWORD *)(a5 + 4);
  else
    v16 = *(_DWORD *)(a13 + 16);
  if ( (v16 & 4) != 0 )
  {
    v31 = operator new(0x1D0uLL, 0x4B677844u, 64LL);
    v18 = v31;
    if ( v31 )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(v31, a1, a5, a6, a13);
      *(_QWORD *)(v18 + 456) = 0LL;
      *(_QWORD *)(v18 + 448) = v18 + 440;
      *(_QWORD *)(v18 + 440) = v18 + 440;
    }
    else
    {
      v18 = 0LL;
    }
    if ( v18 )
    {
LABEL_16:
      v19 = *(_DWORD *)(v18 + 428) ^ ((unsigned __int8)*(_DWORD *)(v18 + 428) ^ (unsigned __int8)(2
                                                                                                * *(_BYTE *)(*((_QWORD *)a2 + 2) + 209LL))) & 2u;
      *(_DWORD *)(v18 + 428) = v19;
      Current = DXGPROCESS::GetCurrent(v19);
      DXGSYNCOBJECT::SetVmSyncObject((DXGSYNCOBJECT *)v18, Current);
      if ( a13 )
        v21 = *(_DWORD *)(a13 + 80);
      else
        v21 = 0;
      v22 = DXGSYNCOBJECT::Initialize((DXGSYNCOBJECT *)v18, a8, a3, a14, v21);
      if ( v22 >= 0 )
      {
        if ( !a11 )
        {
          v28 = *(_DWORD *)(v18 + 420);
          if ( v28 != 6 && ((v28 - 5) & 0xFFFFFFFD) != 0 )
          {
            DXGSYNCOBJECT::AddReference((DXGSYNCOBJECT *)v18);
            goto LABEL_24;
          }
        }
        v23 = *(_DWORD *)(v18 + 420);
        if ( v23 == 7 )
        {
          v22 = DXGSYNCOBJECT::Open(
                  (DXGSYNCOBJECT *)v18,
                  a2,
                  a3,
                  a10,
                  a11,
                  0LL,
                  0LL,
                  a4,
                  a12,
                  a7,
                  *(struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)(a13 + 16),
                  a8,
                  a14,
                  0,
                  0,
                  v21);
          if ( v22 >= 0 )
          {
            v32 = *a10;
            *(_QWORD *)(a13 + 24) = *((_QWORD *)*a10 + 7);
            *(_QWORD *)(a13 + 32) = *((_QWORD *)v32 + 6);
            *(_QWORD *)(a13 + 40) = *((_QWORD *)v32 + 13);
            goto LABEL_24;
          }
        }
        else
        {
          v33.0 = *(struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E *)(a5 + 4);
          if ( v23 == 6 )
            v24 = DXGSYNCOBJECT::Open(
                    (DXGSYNCOBJECT *)v18,
                    a2,
                    a3,
                    a10,
                    a11,
                    (void **)(a5 + 24),
                    (unsigned __int64 *)(a5 + 32),
                    a4,
                    a12,
                    a7,
                    v33,
                    0LL,
                    0LL,
                    0,
                    0,
                    0);
          else
            v24 = DXGSYNCOBJECT::Open(
                    (DXGSYNCOBJECT *)v18,
                    a2,
                    a3,
                    a10,
                    a11,
                    (void **)(a5 + 16),
                    (unsigned __int64 *)(a5 + 24),
                    a4,
                    a12,
                    a7,
                    v33,
                    0LL,
                    0LL,
                    0,
                    0,
                    0);
          v22 = v24;
          if ( v24 >= 0 )
          {
LABEL_24:
            DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a1 + 544));
            v25 = (__int64 *)(a1 + 592);
            v26 = *(_QWORD *)(a1 + 592);
            if ( *(_QWORD *)(v26 + 8) != a1 + 592 )
              __fastfail(3u);
            *(_QWORD *)v18 = v26;
            *(_QWORD *)(v18 + 8) = v25;
            *(_QWORD *)(v26 + 8) = v18;
            *v25 = v18;
            DXGFASTMUTEX::Release((struct _KTHREAD **)(a1 + 544));
            if ( a9 )
              *a9 = v18;
            return (unsigned int)v22;
          }
        }
      }
      DXGSYNCOBJECT::Destroy((DXGSYNCOBJECT *)v18);
      return (unsigned int)v22;
    }
  }
  else
  {
    v17 = operator new(0x250uLL, 0x4B677844u, 64LL);
    v18 = v17;
    if ( v17 )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(v17, a1, a5, a6, a13);
      DXGADAPTERSYNCOBJECT::DXGADAPTERSYNCOBJECT((DXGADAPTERSYNCOBJECT *)(v18 + 440), a2);
      goto LABEL_16;
    }
  }
  v29 = -1073741801;
  WdLogSingleEntry1(6LL);
  WdLogGlobalForLineNumber = 3213;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Out of memory allocating DXGSYNCOBJECT class, returning 0x%I64x",
    -1073741801LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return v29;
}
