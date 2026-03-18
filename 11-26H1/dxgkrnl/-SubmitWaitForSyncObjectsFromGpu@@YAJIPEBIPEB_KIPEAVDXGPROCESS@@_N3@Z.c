/*
 * XREFs of ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1403158CC
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x140306F50 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1403153B8 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x14000D554 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14000FD00 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1400112A8 (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x140017698 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1400469A4 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x140193010 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x140316D1C (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 */

__int64 __fastcall SubmitWaitForSyncObjectsFromGpu(
        unsigned int a1,
        const unsigned int *a2,
        unsigned __int64 *a3,
        unsigned int a4,
        struct DXGPROCESS *a5,
        bool a6,
        bool a7)
{
  __int64 v7; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // r9
  struct DXGHWQUEUE *v11; // r12
  __int64 v12; // rcx
  unsigned int v13; // ecx
  _BYTE *Pool2; // r8
  _BYTE *v16; // r14
  _BYTE *v17; // r9
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v19; // rbx
  unsigned int i; // eax
  unsigned int j; // ebx
  __int64 v22; // r14
  unsigned int *v23; // rdx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rsi
  unsigned int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // edx
  int v32; // r8d
  bool v33; // al
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rax
  DXGADAPTER *v39; // rcx
  __int64 v40; // rcx
  unsigned int v41; // edi
  const unsigned int *v42; // rdi
  unsigned __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // r8
  int v46; // edx
  __int64 v47; // rbx
  DXGSYNCOBJECT *v48; // rbx
  const unsigned int *v49; // rbx
  unsigned int *v50; // rsi
  int HostHandle; // eax
  const unsigned int *v52; // rbx
  char v53; // [rsp+50h] [rbp-1D8h]
  struct DXGGLOBAL *v54; // [rsp+58h] [rbp-1D0h] BYREF
  char v55; // [rsp+60h] [rbp-1C8h]
  unsigned int *v56; // [rsp+68h] [rbp-1C0h]
  _BYTE *v57; // [rsp+70h] [rbp-1B8h]
  PVOID v58; // [rsp+78h] [rbp-1B0h]
  _BYTE v59[32]; // [rsp+80h] [rbp-1A8h] BYREF
  int v60; // [rsp+A0h] [rbp-188h]
  struct DXGHWQUEUE *v61; // [rsp+A8h] [rbp-180h] BYREF
  const unsigned int *v62; // [rsp+B0h] [rbp-178h]
  unsigned int v63; // [rsp+B8h] [rbp-170h]
  __int64 v64; // [rsp+C0h] [rbp-168h] BYREF
  int v65; // [rsp+C8h] [rbp-160h]
  void *Src; // [rsp+D0h] [rbp-158h]
  _BYTE v67[16]; // [rsp+D8h] [rbp-150h] BYREF
  PVOID v68; // [rsp+E8h] [rbp-140h]
  PVOID v69; // [rsp+F0h] [rbp-138h]
  _BYTE v70[16]; // [rsp+F8h] [rbp-130h] BYREF
  int v71; // [rsp+108h] [rbp-120h]
  PVOID P; // [rsp+110h] [rbp-118h]
  _BYTE v73[32]; // [rsp+118h] [rbp-110h] BYREF
  int v74; // [rsp+138h] [rbp-F0h]
  char v75[8]; // [rsp+140h] [rbp-E8h] BYREF
  _BYTE v76[16]; // [rsp+148h] [rbp-E0h] BYREF
  DXGADAPTER *v77; // [rsp+158h] [rbp-D0h]
  char v78; // [rsp+160h] [rbp-C8h]
  __int64 v79; // [rsp+168h] [rbp-C0h]
  _BYTE v80[16]; // [rsp+188h] [rbp-A0h] BYREF
  DXGADAPTER *v81; // [rsp+198h] [rbp-90h]
  char v82; // [rsp+1A0h] [rbp-88h]
  __int64 v83; // [rsp+1A8h] [rbp-80h]
  __int64 v84; // [rsp+1C8h] [rbp-60h]
  char v85; // [rsp+1D0h] [rbp-58h]

  v7 = a4;
  Src = a3;
  v62 = a2;
  v9 = a1;
  v56 = (unsigned int *)a5;
  v61 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v67, a4, (struct _KTHREAD **)a5, &v61, a7, 1);
  v11 = v61;
  if ( !v61 )
  {
    v41 = -1073741811;
    WdLogSingleEntry3(2LL, a5, v7, -1073741811LL);
    WdLogGlobalForLineNumber = 1957;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)a5,
      v7,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_78;
  }
  v64 = *(_QWORD *)(*((_QWORD *)v61 + 2) + 16LL);
  v65 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v75, v64, 0, v10, a7);
  if ( !a7 )
  {
    if ( v85 )
    {
      if ( v82 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v80, 0LL, 0LL);
        WdLogGlobalForLineNumber = 7648;
      }
      v39 = v81;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v81 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v81 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v40, (__int64)"g");
          KeWaitForSingleObject((char *)v81 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v81, 0LL);
        v39 = v81;
      }
      v83 = 0LL;
      v82 = 1;
      if ( *((_DWORD *)v39 + 50) != 1 )
      {
LABEL_76:
        COREACCESS::Release((COREACCESS *)v80);
LABEL_77:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v64);
        v41 = -1073741130;
LABEL_78:
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v67);
        return v41;
      }
    }
    if ( v78 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v76, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v77 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v77 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v12, (__int64)"g");
        KeWaitForSingleObject((char *)v77 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v77, 0LL);
    }
    v79 = 0LL;
    v78 = 1;
    if ( *(_DWORD *)(v84 + 608) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v76);
      if ( !v85 )
        goto LABEL_77;
      goto LABEL_76;
    }
  }
  P = 0LL;
  v13 = 0;
  v74 = 0;
  if ( a6 )
  {
    if ( (unsigned int)v9 > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
        goto LABEL_15;
      P = (PVOID)ExAllocatePool2(64LL, 8 * v9, 1265072196LL);
    }
    else
    {
      P = v73;
      if ( (_DWORD)v9 )
        memset(v73, 0, 8 * v9);
    }
    v13 = v9;
    v74 = v9;
LABEL_15:
    if ( !P )
    {
      P = 0LL;
      v74 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v64);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v67);
      return 3221225495LL;
    }
    RtlCopyFromUser(P, a3, 8LL * v13);
    Src = P;
    v68 = P;
  }
  Pool2 = 0LL;
  v58 = 0LL;
  v60 = 0;
  v16 = 0LL;
  v57 = 0LL;
  v17 = 0LL;
  v69 = 0LL;
  v71 = 0;
  v56 = 0LL;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
  {
    v53 = 0;
    if ( (unsigned int)v9 > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
      {
        v16 = 0LL;
LABEL_26:
        v57 = v16;
        if ( !v16 )
        {
          if ( v17 != v70 && v17 )
          {
            ExFreePoolWithTag(v17, 0);
            Pool2 = v58;
          }
          v69 = 0LL;
          v71 = 0;
          if ( Pool2 != v59 && Pool2 )
            ExFreePoolWithTag(Pool2, 0);
          v58 = 0LL;
          v60 = 0;
          if ( P != v73 && P )
            ExFreePoolWithTag(P, 0);
          v41 = -1073741801;
LABEL_131:
          P = 0LL;
          v74 = 0;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v64);
          goto LABEL_78;
        }
        goto LABEL_27;
      }
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v9, 1265072196LL);
      v58 = Pool2;
    }
    else
    {
      Pool2 = v59;
      v58 = v59;
      if ( !(_DWORD)v9 )
      {
LABEL_25:
        v60 = v9;
        v16 = Pool2;
        goto LABEL_26;
      }
      memset(v59, 0, 8 * v9);
      Pool2 = v58;
    }
    v17 = v69;
    goto LABEL_25;
  }
  v53 = 1;
  if ( (unsigned int)v9 <= 4 )
  {
    v17 = v70;
    v69 = v70;
    if ( (_DWORD)v9 )
    {
      memset(v70, 0, 4 * v9);
      v17 = v69;
    }
    goto LABEL_141;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v9 >= 4 )
  {
    v17 = (_BYTE *)ExAllocatePool2(256LL, 4 * v9, 1265072196LL);
    v69 = v17;
LABEL_141:
    v71 = v9;
    v50 = (unsigned int *)v17;
    goto LABEL_142;
  }
  v50 = 0LL;
LABEL_142:
  v56 = v50;
  if ( !v50 )
  {
    if ( v17 != v70 && v17 )
      ExFreePoolWithTag(v17, 0);
    v69 = 0LL;
    v71 = 0;
    v58 = 0LL;
    v60 = 0;
    if ( P != v73 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v74 = 0;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v67);
    return 3221225495LL;
  }
LABEL_27:
  Global = DXGGLOBAL::GetGlobal();
  v54 = Global;
  v55 = 0;
  if ( !Global )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3058;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pGlobal != NULL", 3058LL, 0LL, 0LL, 0LL, 0LL);
    Global = 0LL;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 76)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3063;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursiveSharedLock",
      3063LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v19 = v54;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v19 + 76), 1u);
  v55 = 1;
  for ( i = 0; ; i = v63 + 1 )
  {
    v63 = i;
    if ( i >= (unsigned int)v9 )
      break;
    v27 = i;
    v28 = v62[i];
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a5 + 248, 0LL) )
    {
      DXGPUSHLOCK::LogEvent((struct DXGPROCESS *)((char *)a5 + 248), v29, v30);
      ExAcquirePushLockSharedEx((char *)a5 + 248, 0LL);
    }
    _InterlockedIncrement((volatile signed __int32 *)a5 + 66);
    v31 = (v28 >> 6) & 0xFFFFFF;
    v33 = 0;
    if ( v31 < *((_DWORD *)a5 + 74) )
    {
      v32 = *(_DWORD *)(*((_QWORD *)a5 + 35) + 16LL * v31 + 8);
      if ( ((v28 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)a5 + 35) + 16LL * v31 + 8) & 0x60)
        && (v32 & 0x2000) == 0
        && (v32 & 0x1F) != 0 )
      {
        v33 = 1;
      }
    }
    if ( v33 && (v34 = *((_QWORD *)a5 + 35), (*(_BYTE *)(v34 + 16LL * v31 + 8) & 0x1F) == 0xB) )
      v35 = *(_QWORD *)(v34 + 16LL * v31);
    else
      v35 = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)a5 + 66);
    ExReleasePushLockSharedEx((char *)a5 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v35 )
    {
      v36 = *(_QWORD *)(v35 + 16);
      v37 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
      if ( v36 != v37 )
      {
        WdLogSingleEntry2(2LL, v37, v36);
        WdLogGlobalForLineNumber = 2052;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"WaitForSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a different device 0x%p.",
          *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL),
          *(_QWORD *)(v35 + 16),
          0LL,
          0LL,
          0LL);
LABEL_125:
        if ( v55 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v54);
        if ( v69 != v70 && v69 )
          ExFreePoolWithTag(v69, 0);
        v69 = 0LL;
        v71 = 0;
        if ( v58 != v59 && v58 )
          ExFreePoolWithTag(v58, 0);
        v58 = 0LL;
        v60 = 0;
        if ( P != v73 && P )
          ExFreePoolWithTag(P, 0);
        v41 = -1073741811;
        goto LABEL_131;
      }
      if ( (*(_DWORD *)(v35 + 72) & 0x20) != 0 )
      {
        v52 = v62;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2060;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%x object is opened as signal only and thus cannot be waited on.",
          v52[v27],
          0LL,
          0LL,
          0LL,
          0LL);
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v54);
        if ( v69 != v70 && v69 )
          ExFreePoolWithTag(v69, 0);
        v69 = 0LL;
        v71 = 0;
        if ( v58 != v59 && v58 )
          ExFreePoolWithTag(v58, 0);
        v58 = 0LL;
        v60 = 0;
        if ( P != v73 && P )
          ExFreePoolWithTag(P, 0);
        v41 = -1073741790;
        goto LABEL_131;
      }
      v38 = *(_QWORD *)(v35 + 32);
      if ( *(_DWORD *)(v38 + 420) == 7 && *(_DWORD *)(v38 + 316) == 1 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2068;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DXGDEVICESYNCOBJECT 0x%x. Queuing Wait/Signals not supported on native fence of type D3DDDI_NATIVEFEN"
                    "CE_TYPE_INTRA_GPU, returning STATUS_INVALID_PARAMETER",
          v35,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_125;
      }
      v16 = v57;
      if ( v53 )
        v56[v27] = *(_DWORD *)(v35 + 44);
      else
        *(_QWORD *)&v57[8 * v27] = v38;
    }
    else
    {
      v43 = v62[v27];
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a5 + 248));
      v44 = ((unsigned int)v43 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v44 < *((_DWORD *)a5 + 74)
        && (v45 = *((_QWORD *)a5 + 35),
            v46 = *(_DWORD *)(v45 + 16 * v44 + 8),
            (((unsigned int)v43 >> 25) & 0x60) == (*(_BYTE *)(v45 + 16 * v44 + 8) & 0x60))
        && (v46 & 0x2000) == 0
        && (v46 & 0x1F) != 0
        && (v47 = 2 * ((v43 >> 6) & 0xFFFFFF), (*(_BYTE *)(v45 + 8 * v47 + 8) & 0x1F) == 8) )
      {
        v48 = *(DXGSYNCOBJECT **)(v45 + 8 * v47);
      }
      else
      {
        v48 = 0LL;
      }
      _InterlockedDecrement((volatile signed __int32 *)a5 + 66);
      ExReleasePushLockSharedEx((char *)a5 + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( !v48 && !v53 )
      {
        v49 = v62;
        WdLogSingleEntry3(1LL, a5, v62[v27], v27);
        WdLogGlobalForLineNumber = 2098;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"0x%p failed to wait with invalid hSyncObject 0x%x at index %d",
          (__int64)a5,
          v49[v27],
          v27,
          0LL,
          0LL);
        goto LABEL_125;
      }
      if ( v53 )
      {
        HostHandle = v62[v27];
        if ( v48 )
          HostHandle = DXGSYNCOBJECT::GetHostHandle(v48, HostHandle);
        v56[v27] = HostHandle;
        v16 = v57;
      }
      else
      {
        v16 = v57;
        *(_QWORD *)&v57[8 * v27] = v48;
      }
    }
  }
  if ( v53 )
  {
    v41 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 16LL)
                                                     + 16LL)
                                         + 4712LL),
            a5,
            0LL,
            v56,
            0LL,
            0LL,
            Src,
            0LL,
            v9,
            v11);
    if ( v55 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v54);
    if ( v69 != v70 && v69 )
      ExFreePoolWithTag(v69, 0);
    v69 = 0LL;
    v71 = 0;
    if ( v58 != v59 && v58 )
      ExFreePoolWithTag(v58, 0);
    v58 = 0LL;
    v60 = 0;
    if ( P != v73 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v74 = 0;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
    goto LABEL_78;
  }
  for ( j = 0; j < (unsigned int)v9; ++j )
  {
    v22 = *(_QWORD *)&v16[8 * j];
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v64, (struct DXGSYNCOBJECT *)v22);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v64);
    if ( (*(_DWORD *)(v22 + 424) & 4) != 0 )
      v23 = (unsigned int *)*((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                                          (DXGSYNCOBJECTCA *)v22,
                                          *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 16LL))
                            + 4);
    else
      v23 = *(unsigned int **)(v22 + 472);
    v56 = v23;
    v24 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v61 + 2) + 16LL) + 16LL)
                                                                                            + 736LL)
                                                                                + 8LL)
                                                                    + 656LL))(
            *((_QWORD *)v61 + 6),
            v23,
            *((_QWORD *)Src + j));
    v26 = v24;
    if ( v24 < 0 )
    {
      v42 = v62;
      WdLogSingleEntry4(2LL, a5, v62[j], j, v24);
      WdLogGlobalForLineNumber = 2156;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed to acquire hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)a5,
        v42[j],
        j,
        v26,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v64);
      if ( v55 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v54);
      if ( v69 != v70 && v69 )
        ExFreePoolWithTag(v69, 0);
      v69 = 0LL;
      v71 = 0;
      if ( v58 != v59 && v58 )
        ExFreePoolWithTag(v58, 0);
      v58 = 0LL;
      v60 = 0;
      if ( P != v73 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v74 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
      v41 = v26;
      goto LABEL_78;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v11 = v61;
      McTemplateK0pqPR1XR1_EtwWriteTransfer(v25, (__int64)&EventWaitForSynchronizationObjectFromGpu);
    }
    else
    {
      v11 = v61;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v64);
    v16 = v57;
  }
  if ( v55 )
  {
    v55 = 0;
    ExReleaseResourceLite(*((PERESOURCE *)v54 + 76));
    KeLeaveCriticalRegion();
  }
  if ( v69 != v70 && v69 )
    ExFreePoolWithTag(v69, 0);
  v69 = 0LL;
  v71 = 0;
  if ( v58 != v59 && v58 )
    ExFreePoolWithTag(v58, 0);
  v58 = 0LL;
  v60 = 0;
  if ( P != v73 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v74 = 0;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v67);
  return 0LL;
}
