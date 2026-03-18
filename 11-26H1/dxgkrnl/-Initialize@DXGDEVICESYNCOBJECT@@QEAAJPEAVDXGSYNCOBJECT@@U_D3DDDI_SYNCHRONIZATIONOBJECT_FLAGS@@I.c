/*
 * XREFs of ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@IPEAE@Z @ 0x140200460
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77I@Z @ 0x140352B34 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x140052B98 (-GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?VidMmMapCpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@Z @ 0x140055F84 (-VidMmMapCpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@.c)
 *     ?VidMmMapGpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI@Z @ 0x1400599D8 (-VidMmMapGpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x140067CAC (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?VidMmOpenFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_DEVICE@@_N@Z @ 0x14007C788 (-VidMmOpenFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_DEVIC.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetNativeFenceDriverHandle@DXGSYNCOBJECT@@QEAAPEAXPEAVADAPTER_RENDER@@@Z @ 0x140194ED4 (-GetNativeFenceDriverHandle@DXGSYNCOBJECT@@QEAAPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?IsNativeFenceOpenedAsMonitoredFence@DXGSYNCOBJECT@@QEAA_NPEAVADAPTER_RENDER@@@Z @ 0x140194F04 (-IsNativeFenceOpenedAsMonitoredFence@DXGSYNCOBJECT@@QEAA_NPEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiOpenNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_OPENNATIVEFENCE@@@Z @ 0x1401B0078 (-DdiOpenNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_OPENNATIVEFENCE@@@Z.c)
 *     ?GetNativeFenceMonitoredValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVADAPTER_RENDER@@@Z @ 0x1401FE3A4 (-GetNativeFenceMonitoredValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVA.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402AF684 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1402E5CE4 (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsMonitoredFenceOpenedAsNativeFence@DXGSYNCOBJECT@@QEAA_NPEAVADAPTER_RENDER@@@Z @ 0x1403DA678 (-IsMonitoredFenceOpenedAsNativeFence@DXGSYNCOBJECT@@QEAA_NPEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::Initialize(
        DXGDEVICESYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  int v8; // eax
  VIDMM_EXPORT *v9; // rdi
  struct ADAPTER_RENDER *v11; // r13
  VIDMM_EXPORT **v12; // r12
  struct VIDMM_DEVICE *v13; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *CurrentValueStorage; // rax
  DXGSYNCOBJECT *v15; // rcx
  struct VIDMM_MONITORED_FENCE_STORAGE *NativeFenceMonitoredValueStorage; // rax
  VIDMM_EXPORT *v17; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *v18; // rax
  VIDMM_EXPORT *v19; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *v20; // rax
  DXGSYNCOBJECT *v21; // r9
  struct VIDMM_MONITORED_FENCE_STORAGE *v22; // rax
  __int64 v23; // r10
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  int v27; // eax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  VIDMM_EXPORT *v31; // rsi
  struct VIDMM_MONITORED_FENCE_STORAGE *v32; // rax
  struct VIDMM_MONITORED_FENCE_STORAGE *v33; // rax
  VIDMM_EXPORT *v34; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *v35; // rax
  unsigned int v36; // esi
  struct VIDMM_MONITORED_FENCE_STORAGE *v37; // rax
  __int64 v38; // r10
  DXGSYNCOBJECT *v39; // r9
  DXGSYNCOBJECT *v40; // r9
  struct VIDMM_MONITORED_FENCE_STORAGE *v41; // rax
  __int64 v42; // r10
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  int v46; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rbx
  __int64 v48; // rax
  struct DXGPROCESS *Current; // rbx
  unsigned int v50; // eax
  unsigned int v51; // edx
  unsigned int v52; // eax
  __int64 v53; // r9
  int v54; // ecx
  __int64 v55; // r9
  _DWORD *v56; // r10
  struct _VIDSCH_SYNC_OBJECT *v57; // rax
  _BYTE v59[24]; // [rsp+58h] [rbp-A8h] BYREF
  void *NativeFenceDriverHandle; // [rsp+70h] [rbp-90h] BYREF
  DXGDEVICESYNCOBJECT *v61; // [rsp+78h] [rbp-88h]
  __int64 v62; // [rsp+80h] [rbp-80h]
  __int64 v63; // [rsp+88h] [rbp-78h]
  __int64 v64; // [rsp+90h] [rbp-70h]
  _DWORD v65[26]; // [rsp+98h] [rbp-68h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 222;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->GetRenderCore()->IsCoreResourceSharedOwner()",
      222LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)this + 18) = a3;
  *((_QWORD *)this + 4) = a2;
  v8 = DXGSYNCOBJECT::AddReference(a2);
  LODWORD(v9) = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(3LL, this, v8);
    WdLogGlobalForLineNumber = 235;
    return (unsigned int)v9;
  }
  *((_BYTE *)this + 92) |= 1u;
  if ( (*((_DWORD *)a2 + 107) & 2) != 0 )
    goto LABEL_48;
  v11 = *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL);
  v12 = (VIDMM_EXPORT **)((char *)v11 + 760);
  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 420LL) == 7 )
  {
    if ( g_Feature_FenceStorageUsingVidMmAlloc )
    {
      v9 = *v12;
      v13 = *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 792LL);
      CurrentValueStorage = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
      LODWORD(v9) = VIDMM_EXPORT::VidMmOpenFenceStorageSlot(v9, CurrentValueStorage, v13);
      if ( (int)v9 < 0 )
        return (unsigned int)v9;
      v15 = (DXGSYNCOBJECT *)*((_QWORD *)this + 4);
      *((_BYTE *)this + 92) |= 0x10u;
      NativeFenceMonitoredValueStorage = DXGSYNCOBJECT::GetNativeFenceMonitoredValueStorage(v15, v11);
      LODWORD(v9) = VIDMM_EXPORT::VidMmOpenFenceStorageSlot(
                      *v12,
                      NativeFenceMonitoredValueStorage,
                      *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 792LL));
      if ( (int)v9 < 0 )
        return (unsigned int)v9;
      *((_BYTE *)this + 92) |= 8u;
    }
    if ( (*((_DWORD *)DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4)) + 13) & 1) != 0 )
    {
      v17 = *v12;
      v18 = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
      LODWORD(v9) = VIDMM_EXPORT::VidMmMapCpuVA(
                      v17,
                      *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 792LL),
                      v18,
                      (void **)this + 7,
                      0);
      if ( (int)v9 < 0 )
        return (unsigned int)v9;
      *((_QWORD *)this + 8) = *((_QWORD *)DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4)) + 1);
    }
    v19 = *v12;
    v20 = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
    LODWORD(v9) = VIDMM_EXPORT::VidMmMapGpuVA(
                    v19,
                    *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 792LL),
                    v20,
                    (unsigned __int64 *)this + 6,
                    a4);
    if ( (int)v9 < 0 )
      return (unsigned int)v9;
    if ( !DXGSYNCOBJECT::IsNativeFenceOpenedAsMonitoredFence(
            *((DXGSYNCOBJECT **)this + 4),
            *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
    {
      v22 = DXGSYNCOBJECT::GetNativeFenceMonitoredValueStorage(v21, v11);
      LODWORD(v9) = VIDMM_EXPORT::VidMmMapGpuVA(
                      *v12,
                      *(struct VIDMM_DEVICE **)(v23 + 792),
                      v22,
                      (unsigned __int64 *)this + 13,
                      a4);
      if ( (int)v9 < 0 )
        return (unsigned int)v9;
      if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 305952) )
      {
        memset(v65, 0, sizeof(v65));
        v62 = *(_QWORD *)(*((_QWORD *)this + 2) + 616LL);
        NativeFenceDriverHandle = DXGSYNCOBJECT::GetNativeFenceDriverHandle(*((DXGSYNCOBJECT **)this + 4), v11);
        v63 = *((_QWORD *)this + 6);
        v64 = *((_QWORD *)this + 13);
        v61 = this;
        if ( a5 )
        {
          v24 = *((_OWORD *)a5 + 1);
          *(_OWORD *)&v65[1] = *(_OWORD *)a5;
          v25 = *((_OWORD *)a5 + 2);
          *(_OWORD *)&v65[5] = v24;
          v26 = *((_OWORD *)a5 + 3);
          *(_OWORD *)&v65[9] = v25;
          *(_OWORD *)&v65[13] = v26;
        }
        v27 = ADAPTER_RENDER::DdiOpenNativeFence(v11, (struct _DXGKARG_OPENNATIVEFENCE *)&NativeFenceDriverHandle);
        v9 = (VIDMM_EXPORT *)v27;
        if ( v27 < 0 )
        {
          WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), v27);
          WdLogGlobalForLineNumber = 340;
LABEL_23:
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"DXGDEVICE: 0x%I64x | DdiOpenNativeFence failed with Status = 0x%I64x",
            *((_QWORD *)this + 2),
            (__int64)v9,
            0LL,
            0LL,
            0LL);
          return (unsigned int)v9;
        }
LABEL_24:
        if ( a5 )
        {
          v28 = *(_OWORD *)&v65[5];
          *(_OWORD *)a5 = *(_OWORD *)&v65[1];
          v29 = *(_OWORD *)&v65[9];
          *((_OWORD *)a5 + 1) = v28;
          v30 = *(_OWORD *)&v65[13];
          *((_OWORD *)a5 + 2) = v29;
          *((_OWORD *)a5 + 3) = v30;
        }
        *((_QWORD *)this + 12) = v61;
      }
    }
  }
  else
  {
    if ( g_Feature_FenceStorageUsingVidMmAlloc )
    {
      v31 = *v12;
      v9 = *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 792LL);
      v32 = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
      LODWORD(v9) = VIDMM_EXPORT::VidMmOpenFenceStorageSlot(v31, v32, v9);
      if ( (int)v9 < 0 )
        return (unsigned int)v9;
      *((_BYTE *)this + 92) |= 0x10u;
    }
    v9 = *v12;
    v33 = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
    LODWORD(v9) = VIDMM_EXPORT::VidMmMapCpuVA(
                    v9,
                    *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 792LL),
                    v33,
                    (void **)this + 7,
                    0);
    if ( (int)v9 < 0 )
      return (unsigned int)v9;
    if ( *(_BYTE *)&a3.0 < 0 )
    {
      v36 = a4;
    }
    else
    {
      v34 = *v12;
      v35 = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
      v36 = a4;
      LODWORD(v9) = VIDMM_EXPORT::VidMmMapGpuVA(
                      v34,
                      *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 792LL),
                      v35,
                      (unsigned __int64 *)this + 6,
                      a4);
      if ( (int)v9 < 0 )
        return (unsigned int)v9;
    }
    v37 = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
    v38 = *((_QWORD *)this + 2);
    v39 = (DXGSYNCOBJECT *)*((_QWORD *)this + 4);
    *((_QWORD *)this + 8) = *((_QWORD *)v37 + 1);
    if ( DXGSYNCOBJECT::IsMonitoredFenceOpenedAsNativeFence(v39, *(struct ADAPTER_RENDER **)(v38 + 16)) )
    {
      v41 = DXGSYNCOBJECT::GetNativeFenceMonitoredValueStorage(v40, v11);
      LODWORD(v9) = VIDMM_EXPORT::VidMmMapGpuVA(
                      *v12,
                      *(struct VIDMM_DEVICE **)(v42 + 792),
                      v41,
                      (unsigned __int64 *)this + 13,
                      v36);
      if ( (int)v9 < 0 )
        return (unsigned int)v9;
      if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 305952) )
      {
        memset(v65, 0, sizeof(v65));
        v62 = *(_QWORD *)(*((_QWORD *)this + 2) + 616LL);
        NativeFenceDriverHandle = DXGSYNCOBJECT::GetNativeFenceDriverHandle(*((DXGSYNCOBJECT **)this + 4), v11);
        v63 = *((_QWORD *)this + 6);
        v64 = *((_QWORD *)this + 13);
        v61 = this;
        if ( a5 )
        {
          v43 = *((_OWORD *)a5 + 1);
          *(_OWORD *)&v65[1] = *(_OWORD *)a5;
          v44 = *((_OWORD *)a5 + 2);
          *(_OWORD *)&v65[5] = v43;
          v45 = *((_OWORD *)a5 + 3);
          *(_OWORD *)&v65[9] = v44;
          *(_OWORD *)&v65[13] = v45;
        }
        v46 = ADAPTER_RENDER::DdiOpenNativeFence(v11, (struct _DXGKARG_OPENNATIVEFENCE *)&NativeFenceDriverHandle);
        v9 = (VIDMM_EXPORT *)v46;
        if ( v46 < 0 )
        {
          WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), v46);
          WdLogGlobalForLineNumber = 428;
          goto LABEL_23;
        }
        goto LABEL_24;
      }
    }
  }
  if ( (*((_DWORD *)this + 18) & 0x50) == 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v59, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 4) + 32LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v59);
    VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(this);
    if ( VidSchSyncObject )
    {
      v48 = operator new(0x18uLL, 0x4B677844u, 64LL);
      *((_QWORD *)this + 3) = v48;
      if ( !v48 )
      {
        LODWORD(v9) = -1073741801;
LABEL_61:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v59);
        return (unsigned int)v9;
      }
      *(_QWORD *)(v48 + 16) = VidSchSyncObject;
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL)
                                                         + 8LL)
                                             + 704LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
        *((_QWORD *)this + 3));
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v59);
  }
LABEL_48:
  if ( (*((_BYTE *)this + 92) & 4) != 0 )
  {
    Current = DXGPROCESS::GetCurrent();
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v59, Current);
    v50 = HMGRTABLE::AllocHandle((char *)Current + 280, this, 11LL);
    *((_DWORD *)this + 10) = v50;
    v51 = v50;
    if ( !v50 )
    {
      LODWORD(v9) = -1073741801;
      WdLogSingleEntry2(6LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 481;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"pSyncObject 0x%I64x: Fail to allocate per process handle, returning 0x%I64x",
        (__int64)this,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v59);
      return (unsigned int)v9;
    }
    v52 = (v50 >> 6) & 0xFFFFFF;
    if ( v52 < *((_DWORD *)Current + 74) )
    {
      v53 = *((_QWORD *)Current + 35);
      v54 = *(_DWORD *)(v53 + 16LL * v52 + 8);
      if ( ((v51 >> 25) & 0x60) == (*(_BYTE *)(v53 + 16LL * v52 + 8) & 0x60) && (v54 & 0x2000) == 0 && (v54 & 0x1F) != 0 )
        *(_DWORD *)(v53 + 16LL * v52 + 8) = v54 | 0x2000;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v59);
    v55 = *((_QWORD *)this + 2);
    if ( (*(_BYTE *)(v55 + 1917) & 1) == 0 )
    {
      if ( (v56 = (_DWORD *)*((_QWORD *)this + 4), v56[105] == 7)
        && !DXGSYNCOBJECT::IsNativeFenceOpenedAsMonitoredFence(
              *((DXGSYNCOBJECT **)this + 4),
              *(struct ADAPTER_RENDER **)(v55 + 16))
        || DXGSYNCOBJECT::IsMonitoredFenceOpenedAsNativeFence(
             (DXGSYNCOBJECT *)v56,
             *(struct ADAPTER_RENDER **)(v55 + 16)) )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v59, (struct DXGFASTMUTEX *const)(v56 + 8), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v59);
        v57 = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(this);
        LODWORD(v9) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 1128LL))(
                        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 744LL),
                        *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
                        *((unsigned int *)this + 10),
                        (char *)this + 120,
                        v57);
        if ( (int)v9 < 0 )
          goto LABEL_61;
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v59);
      }
    }
  }
  return 0LL;
}
