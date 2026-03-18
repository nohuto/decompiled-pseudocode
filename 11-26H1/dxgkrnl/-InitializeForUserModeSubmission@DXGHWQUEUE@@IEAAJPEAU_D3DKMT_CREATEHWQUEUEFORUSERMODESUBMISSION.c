/*
 * XREFs of ?InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@@Z @ 0x1401E2F50
 * Callers:
 *     ?CreateHwQueueForUserModeSubmission@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1401E147C (-CreateHwQueueForUserModeSubmission@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISS.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003EC14 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?VidMmMapCpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@Z @ 0x140055F84 (-VidMmMapCpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@.c)
 *     ?VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N11_K1PEAVVIDMM_DEVICE@@@Z @ 0x140056160 (-VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N11_K1PEA.c)
 *     ?VidSchSetHwQueueProgressFenceObject@VIDSCH_EXPORT@@QEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@W4VIDSCH_HW_QUEUE_PROGRESS_FENCE_TYPE@@@Z @ 0x14005CD5C (-VidSchSetHwQueueProgressFenceObject@VIDSCH_EXPORT@@QEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_SYNC_O.c)
 *     ?VidSchCreateHwQueue@VIDSCH_EXPORT@@QEAAJPEAVDXGHWQUEUE@@PEAUVIDSCH_HW_CONTEXT@@PEAU_D3DKMT_CREATEHWQUEUE@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@@Z @ 0x14005FC80 (-VidSchCreateHwQueue@VIDSCH_EXPORT@@QEAAJPEAVDXGHWQUEUE@@PEAUVIDSCH_HW_CONTEXT@@PEAU_D3DKMT_CREA.c)
 *     ?VidMmOpenFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_DEVICE@@_N@Z @ 0x14007C788 (-VidMmOpenFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_DEVIC.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetNativeFenceDriverHandle@DXGSYNCOBJECT@@QEAAPEAXPEAVADAPTER_RENDER@@@Z @ 0x140194ED4 (-GetNativeFenceDriverHandle@DXGSYNCOBJECT@@QEAAPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiCreateHwQueueForUserModeSubmission@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEHWQUEUEFORUSERMODESUBMISSION@@@Z @ 0x1401AC4F8 (-DdiCreateHwQueueForUserModeSubmission@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEHWQUEUEFORUSERMOD.c)
 *     ?CreateDoorbell@DXGHWQUEUE@@QEAAJU_D3DDDI_CREATEHWQUEUEFORUSERMODESUBMISSION_FLAGS@@@Z @ 0x1401E1370 (-CreateDoorbell@DXGHWQUEUE@@QEAAJU_D3DDDI_CREATEHWQUEUEFORUSERMODESUBMISSION_FLAGS@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402AF684 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1402E5CE4 (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1403511A0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 */

__int64 __fastcall DXGHWQUEUE::InitializeForUserModeSubmission(
        DXGHWQUEUE *this,
        struct _D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION *a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  char v6; // al
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rdi
  unsigned int v17; // esi
  unsigned int v18; // eax
  int v19; // r8d
  __int64 v20; // rcx
  struct DXGALLOCATION *v21; // rdx
  VIDMM_EXPORT *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rdx
  unsigned int v27; // esi
  unsigned int v28; // eax
  int v29; // r8d
  __int64 v30; // rcx
  struct DXGALLOCATION *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rdx
  int v37; // esi
  __int64 v38; // rax
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int64 v42; // rdi
  __int64 v43; // rax
  int HwQueueForUserModeSubmission; // eax
  __int64 v45; // rdi
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  struct DXGPROCESS *Current; // rax
  unsigned int v51; // eax
  unsigned int v52; // edx
  unsigned int v53; // eax
  __int64 v54; // r9
  __int64 v55; // r9
  int v56; // ecx
  __int64 *v57; // rsi
  int HwQueue; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  struct DXGGLOBAL *v60; // rax
  __int64 v61; // r9
  VIDMM_EXPORT *v62; // r10
  __int64 v63; // rax
  int FenceStorageSlot; // eax
  __int64 v65; // r15
  const wchar_t *v66; // r9
  VIDMM_EXPORT *v67; // r15
  __int64 v68; // rcx
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // r8
  struct VIDSCH_HW_QUEUE **v72; // [rsp+20h] [rbp-E0h]
  struct VIDSCH_HW_QUEUE **v73; // [rsp+20h] [rbp-E0h]
  struct VIDSCH_HW_QUEUE **v74; // [rsp+20h] [rbp-E0h]
  __int64 v75; // [rsp+28h] [rbp-D8h]
  __int64 v76; // [rsp+28h] [rbp-D8h]
  bool v77; // [rsp+28h] [rbp-D8h]
  __int64 v78; // [rsp+70h] [rbp-90h] BYREF
  __int64 v79; // [rsp+78h] [rbp-88h] BYREF
  VIDMM_EXPORT *v80[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v81; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v82[24]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v83[24]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) + 16LL) + 209LL) )
  {
    *((_BYTE *)this + 148) = 1;
    if ( (*((_DWORD *)a2 + 1) & 8) != 0 || (v6 = 0, (*(_DWORD *)(v4 + 392) & 0x20) != 0) )
      v6 = 1;
    *((_BYTE *)this + 149) = v6;
    LODWORD(v78) = 0;
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v80, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v80);
    memset(v83, 0, 0x70uLL);
    v8 = DXGGLOBAL::GetGlobal();
    v9 = DXGGLOBAL::CreateSyncObject(
           v8,
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           (unsigned int)(1 << *(_DWORD *)(*((_QWORD *)this + 2) + 388LL)),
           0LL,
           3,
           0,
           0LL,
           0LL,
           (char *)this + 56,
           &v78,
           0LL,
           v83,
           0LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry2(3LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), v9);
      WdLogGlobalForLineNumber = 325;
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v80);
      return v10;
    }
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v80);
    v12 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 8) = *(_QWORD *)(*((_QWORD *)this + 7) + 64LL);
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v13 + 248));
    v14 = ((unsigned int)v78 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v14 < *(_DWORD *)(v13 + 296) )
    {
      v15 = *(_QWORD *)(v13 + 280);
      if ( (((unsigned int)v78 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60)
        && (*(_DWORD *)(v15 + 16 * v14 + 8) & 0x1F) != 0 )
      {
        v16 = 16 * (((unsigned __int64)(unsigned int)v78 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v15 + v16 + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(*(_QWORD *)(v13 + 280) + v16 + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v13 + 256) = 0LL;
    ExReleasePushLockExclusiveEx(v13 + 248, 0LL);
    KeLeaveCriticalRegion();
    v17 = *((_DWORD *)a2 + 2);
    v78 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL);
    v80[0] = (VIDMM_EXPORT *)(v78 + 248);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v78 + 248));
    v18 = (v17 >> 6) & 0xFFFFFF;
    if ( v18 < *(_DWORD *)(v78 + 296) )
    {
      v19 = *(_DWORD *)(*(_QWORD *)(v78 + 280) + 16LL * v18 + 8);
      if ( ((v17 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v78 + 280) + 16LL * v18 + 8) & 0x60)
        && (v19 & 0x2000) == 0
        && (v19 & 0x1F) != 0 )
      {
        v20 = *(_QWORD *)(v78 + 280);
        if ( (*(_BYTE *)(v20 + 16LL * v18 + 8) & 0x1F) == 5 )
        {
          v21 = *(struct DXGALLOCATION **)(v20 + 16LL * v18);
          goto LABEL_22;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v21 = 0LL;
LABEL_22:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79, v21);
    v22 = v80[0];
    _InterlockedDecrement((volatile signed __int32 *)v80[0] + 4);
    ExReleasePushLockSharedEx(v22, 0LL);
    KeLeaveCriticalRegion();
    if ( !v79 )
    {
      v5 = -1073741811;
      WdLogSingleEntry3(2LL, *((_QWORD *)this + 6), *((unsigned int *)a2 + 2), -1073741811LL);
      v75 = *((unsigned int *)a2 + 2);
      v73 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)this + 6);
      WdLogGlobalForLineNumber = 344;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGHWQUEUE 0x%I64x: Invalid hRingBuffer 0x%I64x specified, returning 0x%I64x",
        (__int64)v73,
        v75,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_71;
    }
    v23 = *((_QWORD *)this + 2);
    v24 = *(_QWORD *)(v79 + 8);
    v25 = *(_QWORD *)(v23 + 16);
    if ( v24 != v25 )
    {
      v5 = -1073741811;
      WdLogSingleEntry4(2LL, *((_QWORD *)this + 6), v25, v24, -1073741811LL);
      v26 = *((_QWORD *)this + 2);
      WdLogGlobalForLineNumber = 354;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGHWQUEUE 0x%I64x owner Device 0x%p does not match Ring Buffer Alloc owner 0x%I64x, returning 0x%I64x",
        *((_QWORD *)this + 6),
        *(_QWORD *)(v26 + 16),
        *(_QWORD *)(v79 + 8),
        -1073741811LL,
        0LL);
LABEL_71:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79);
      return (unsigned int)v5;
    }
    *((_DWORD *)this + 40) = *((_DWORD *)a2 + 2);
    v27 = *((_DWORD *)a2 + 3);
    v78 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v78 + 248));
    v28 = (v27 >> 6) & 0xFFFFFF;
    if ( v28 < *(_DWORD *)(v78 + 296) )
    {
      v29 = *(_DWORD *)(*(_QWORD *)(v78 + 280) + 16LL * v28 + 8);
      if ( ((v27 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v78 + 280) + 16LL * v28 + 8) & 0x60)
        && (v29 & 0x2000) == 0
        && (v29 & 0x1F) != 0 )
      {
        v30 = *(_QWORD *)(v78 + 280);
        if ( (*(_BYTE *)(v30 + 16LL * v28 + 8) & 0x1F) == 5 )
        {
          v31 = *(struct DXGALLOCATION **)(v30 + 16LL * v28);
          goto LABEL_35;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v31 = 0LL;
LABEL_35:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v81, v31);
    v32 = v78;
    _InterlockedDecrement((volatile signed __int32 *)(v78 + 264));
    ExReleasePushLockSharedEx(v32 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v81 )
    {
      v5 = -1073741811;
      WdLogSingleEntry3(2LL, *((_QWORD *)this + 6), *((unsigned int *)a2 + 3), -1073741811LL);
      v76 = *((unsigned int *)a2 + 3);
      v74 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)this + 6);
      WdLogGlobalForLineNumber = 366;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGHWQUEUE 0x%I64x: Invalid hRingBufferControl 0x%I64x specified, returning 0x%I64x",
        (__int64)v74,
        v76,
        -1073741811LL,
        0LL,
        0LL);
LABEL_70:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v81);
      goto LABEL_71;
    }
    v33 = *((_QWORD *)this + 2);
    v34 = *(_QWORD *)(v81 + 8);
    v80[0] = (VIDMM_EXPORT *)v33;
    v35 = *(_QWORD *)(v33 + 16);
    if ( v34 != v35 )
    {
      v5 = -1073741811;
      WdLogSingleEntry4(2LL, *((_QWORD *)this + 6), v35, v34, -1073741811LL);
      v36 = *((_QWORD *)this + 2);
      WdLogGlobalForLineNumber = 376;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGHWQUEUE 0x%I64x owner Device 0x%p does not match Ring Buffer Alloc owner 0x%I64x, returning 0x%I64x",
        *((_QWORD *)this + 6),
        *(_QWORD *)(v36 + 16),
        *(_QWORD *)(v81 + 8),
        -1073741811LL,
        0LL);
      goto LABEL_70;
    }
    *((_DWORD *)this + 41) = *((_DWORD *)a2 + 3);
    v37 = *((_DWORD *)a2 + 1);
    if ( (v37 & 8) != 0 )
    {
      if ( (*(_DWORD *)(v33 + 392) & 0x20) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 427;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The HW queue must not specify NoKmdAccess flag",
          427LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v5 = -1073741811;
        goto LABEL_70;
      }
    }
    else
    {
      memset(v83, 0, 0xB8uLL);
      v83[0] = *((_QWORD *)v80[0] + 23);
      v83[1] = this;
      LODWORD(v83[2]) = v37;
      if ( (*((_DWORD *)v80[0] + 98) & 4) != 0 || *(_BYTE *)(*((_QWORD *)v80[0] + 2) + 1914LL) )
        LODWORD(v83[2]) = v37 | 1;
      v38 = *((_QWORD *)this + 7);
      v39 = *((_OWORD *)a2 + 2);
      *(_OWORD *)&v83[5] = *((_OWORD *)a2 + 1);
      v40 = *((_OWORD *)a2 + 3);
      *(_OWORD *)&v83[7] = v39;
      v41 = *((_OWORD *)a2 + 4);
      *(_OWORD *)&v83[9] = v40;
      *(_OWORD *)&v83[11] = v41;
      v42 = *(_QWORD *)(v38 + 32);
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v42 + 32));
      v83[13] = DXGSYNCOBJECT::GetNativeFenceDriverHandle(
                  (DXGSYNCOBJECT *)v42,
                  *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL));
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v42 + 32));
      v83[14] = *(_QWORD *)(*((_QWORD *)this + 7) + 64LL);
      v83[3] = *(_QWORD *)(v79 + 32);
      v43 = *((_QWORD *)this + 2);
      v83[4] = *(_QWORD *)(v81 + 32);
      HwQueueForUserModeSubmission = ADAPTER_RENDER::DdiCreateHwQueueForUserModeSubmission(
                                       *(ADAPTER_RENDER **)(*(_QWORD *)(v43 + 16) + 16LL),
                                       (struct _DXGKARG_CREATEHWQUEUEFORUSERMODESUBMISSION *)v83);
      v45 = HwQueueForUserModeSubmission;
      if ( HwQueueForUserModeSubmission < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 419;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DdiCreateHwQueueForUserModeSubmission() failed with status 0x%I64d",
          v45,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_46:
        v5 = v45;
        goto LABEL_70;
      }
      v46 = *(_OWORD *)&v83[5];
      v47 = *(_OWORD *)&v83[7];
      *((_QWORD *)this + 4) = v83[1];
      *((_OWORD *)a2 + 1) = v46;
      v48 = *(_OWORD *)&v83[9];
      *((_OWORD *)a2 + 2) = v47;
      v49 = *(_OWORD *)&v83[11];
      *((_OWORD *)a2 + 3) = v48;
      *((_OWORD *)a2 + 4) = v49;
    }
    Current = DXGPROCESS::GetCurrent();
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v82, Current);
    v51 = HMGRTABLE::AllocHandle(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL) + 280LL, this, 15LL);
    *((_DWORD *)this + 6) = v51;
    v52 = v51;
    if ( !v51 )
    {
      LODWORD(v45) = -1073741801;
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 441;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v82);
      goto LABEL_46;
    }
    v53 = (v51 >> 6) & 0xFFFFFF;
    v54 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL);
    if ( v53 < *(_DWORD *)(v54 + 296) )
    {
      v55 = *(_QWORD *)(v54 + 280);
      v56 = *(_DWORD *)(v55 + 16LL * v53 + 8);
      if ( ((v52 >> 25) & 0x60) == (*(_BYTE *)(v55 + 16LL * v53 + 8) & 0x60) && (v56 & 0x2000) == 0 && (v56 & 0x1F) != 0 )
        *(_DWORD *)(v55 + 16LL * v53 + 8) = v56 | 0x2000;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v82);
    v57 = (__int64 *)((char *)this + 48);
    HwQueue = VIDSCH_EXPORT::VidSchCreateHwQueue(
                *(VIDSCH_EXPORT **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL),
                this,
                *(struct VIDSCH_HW_CONTEXT **)(*((_QWORD *)this + 2) + 280LL),
                0LL,
                (struct VIDSCH_HW_QUEUE **)this + 6,
                a2);
    LODWORD(v78) = HwQueue;
    if ( HwQueue < 0 )
    {
      WdLogSingleEntry2(3LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), HwQueue);
      WdLogGlobalForLineNumber = 464;
LABEL_69:
      v5 = v78;
      goto LABEL_70;
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v80,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 7) + 32LL) + 32LL),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v80);
    VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(*((DXGDEVICESYNCOBJECT **)this + 7));
    VIDSCH_EXPORT::VidSchSetHwQueueProgressFenceObject(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL),
      *v57,
      (__int64)VidSchSyncObject,
      1u);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v80);
    DXGHWQUEUE::CreateDoorbell(this, *((_DWORD *)a2 + 1));
    *((_DWORD *)this + 55) |= 0x11u;
    v60 = DXGGLOBAL::GetGlobal();
    LOBYTE(v61) = 1;
    v62 = (VIDMM_EXPORT *)*((_QWORD *)v60 + 34);
    v63 = *((_QWORD *)this + 2);
    v80[0] = v62;
    FenceStorageSlot = VIDMM_EXPORT::VidMmAllocateFenceStorageSlot(
                         v62,
                         (DXGHWQUEUE *)((char *)this + 168),
                         0LL,
                         v61,
                         0,
                         v77,
                         0LL,
                         0,
                         *(struct VIDMM_DEVICE **)(*(_QWORD *)(v63 + 16) + 792LL));
    v65 = FenceStorageSlot;
    if ( FenceStorageSlot >= 0 )
    {
      v67 = v80[0];
      *((_QWORD *)this + 30) = *((_QWORD *)this + 22);
      v5 = VIDMM_EXPORT::VidMmOpenFenceStorageSlot(
             v67,
             (DXGHWQUEUE *)((char *)this + 168),
             *(struct VIDMM_DEVICE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 792LL));
      if ( v5 < 0 )
      {
        WdLogSingleEntry1(2LL);
        v68 = *v57;
        WdLogGlobalForLineNumber = 512;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DXGHWQUEUE 0x%I64x: Failed to open ProgressFenceLastQueuedValue fence storage",
          v68,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_70;
      }
      v69 = *((_QWORD *)this + 2);
      *((_BYTE *)this + 232) = 1;
      v70 = VIDMM_EXPORT::VidMmMapCpuVA(
              v67,
              *(struct VIDMM_DEVICE **)(*(_QWORD *)(v69 + 16) + 792LL),
              (DXGHWQUEUE *)((char *)this + 168),
              (void **)this + 31,
              4u);
      v65 = v70;
      if ( v70 >= 0 )
      {
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
            McTemplateK0ppp_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              &EventCreateHwQueue,
              v71,
              *((_QWORD *)this + 2),
              *((unsigned int *)this + 6),
              this);
        }
        goto LABEL_69;
      }
      WdLogSingleEntry2(2LL, *v57, v70);
      v66 = L"DXGHWQUEUE 0x%I64x: Failed to map ProgressFenceLastQueuedValueCpuVa, returning 0x%I64x";
      WdLogGlobalForLineNumber = 526;
    }
    else
    {
      WdLogSingleEntry2(2LL, *v57, FenceStorageSlot);
      v66 = L"DXGHWQUEUE 0x%I64x: Failed to allocate ProgressFenceLastQueuedValue page, returning 0x%I64x";
      WdLogGlobalForLineNumber = 501;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v66, *v57, v65, 0LL, 0LL, 0LL);
    v5 = v65;
    goto LABEL_70;
  }
  v5 = -1073741637;
  WdLogSingleEntry2(2LL, v4, -1073741637LL);
  v72 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)this + 2);
  WdLogGlobalForLineNumber = 285;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DXGCONTEXT 0x%I64x: User mode queues not yet supported on para-v, returning 0x%I64x",
    (__int64)v72,
    -1073741637LL,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v5;
}
