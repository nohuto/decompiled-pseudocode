/*
 * XREFs of ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x14034F800
 * Callers:
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x14034F208 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 * Callees:
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x140009150 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetProcessRenderAdapterInfo@DXGDEVICE@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@XZ @ 0x14003797C (-GetProcessRenderAdapterInfo@DXGDEVICE@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003EC14 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x140052B98 (-GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?VidSchSetHwQueueProgressFenceObject@VIDSCH_EXPORT@@QEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@W4VIDSCH_HW_QUEUE_PROGRESS_FENCE_TYPE@@@Z @ 0x14005CD5C (-VidSchSetHwQueueProgressFenceObject@VIDSCH_EXPORT@@QEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_SYNC_O.c)
 *     ?VidSchCreateHwQueue@VIDSCH_EXPORT@@QEAAJPEAVDXGHWQUEUE@@PEAUVIDSCH_HW_CONTEXT@@PEAU_D3DKMT_CREATEHWQUEUE@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@@Z @ 0x14005FC80 (-VidSchCreateHwQueue@VIDSCH_EXPORT@@QEAAJPEAVDXGHWQUEUE@@PEAUVIDSCH_HW_CONTEXT@@PEAU_D3DKMT_CREA.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x140192CDC (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?GetNativeFenceDriverHandle@DXGSYNCOBJECT@@QEAAPEAXPEAVADAPTER_RENDER@@@Z @ 0x140194ED4 (-GetNativeFenceDriverHandle@DXGSYNCOBJECT@@QEAAPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1401E3B80 (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1402E5CE4 (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z @ 0x14034F53C (-DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1403511A0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 */

__int64 __fastcall DXGHWQUEUE::Initialize(DXGHWQUEUE *this, struct _D3DKMT_CREATEHWQUEUE *a2, void *a3)
{
  struct _D3DDDI_CREATEHWQUEUEFLAGS::$A253BDBBB239395E9D9C573E92799421::$8C19F7357F70E64AC3CA26DE294FEA6E Value; // eax
  char *v7; // rdi
  char v8; // al
  __int64 v9; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v11; // rax
  int v12; // eax
  int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rax
  struct DXGGLOBAL *v16; // rax
  int SyncObject; // eax
  __int64 v18; // rsi
  D3DKMT_HANDLE v19; // r13d
  __int64 v20; // rax
  __int64 v21; // r9
  unsigned __int64 v22; // rdi
  UINT v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  void *v26; // rcx
  D3DGPU_VIRTUAL_ADDRESS v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdi
  __int64 *v31; // rsi
  int HwQueue; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  struct _VIDSCH_SYNC_OBJECT *v36; // rax
  unsigned int v37; // eax
  __int64 v38; // r8
  __int64 result; // rax
  struct DXGGLOBAL *v40; // rax
  __int64 v41; // rdi
  unsigned __int64 v42; // rbx
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // rbx
  int v47; // [rsp+30h] [rbp-D0h]
  _BYTE v48[16]; // [rsp+70h] [rbp-90h] BYREF
  _DXGKARG_CREATEHWQUEUE v49; // [rsp+80h] [rbp-80h] BYREF
  void *NativeFenceDriverHandle; // [rsp+B0h] [rbp-50h]
  _QWORD v51[14]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v52[16]; // [rsp+130h] [rbp+30h] BYREF
  D3DKMT_HANDLE v53; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v54; // [rsp+1D0h] [rbp+D0h]

  v54 = a3;
  memset(v52, 0, 0x50uLL);
  Value = (struct _D3DDDI_CREATEHWQUEUEFLAGS::$A253BDBBB239395E9D9C573E92799421::$8C19F7357F70E64AC3CA26DE294FEA6E)a2->Flags.Value;
  v7 = (char *)this + 16;
  LODWORD(v52[0]) = 5;
  if ( (*(_BYTE *)&Value & 8) != 0 || (v8 = 0, (*(_DWORD *)(*(_QWORD *)v7 + 392LL) & 0x20) != 0) )
    v8 = 1;
  *((_BYTE *)this + 149) = v8;
  v9 = *(_QWORD *)v7;
  v53 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL) + 16LL) + 209LL) )
  {
    result = DXGHWQUEUE::InitializeOnHost(this, a2, a3);
    if ( (int)result < 0 )
      return result;
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v48, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v48);
  if ( (a2->Flags.Value & 0x20) != 0 )
  {
    memset(v51, 0, sizeof(v51));
    v40 = DXGGLOBAL::GetGlobal();
    v12 = DXGGLOBAL::CreateSyncObject(
            v40,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 16LL) + 16LL),
            *(_QWORD *)(*(_QWORD *)v7 + 16LL),
            (unsigned int)(1 << *(_DWORD *)(*(_QWORD *)v7 + 388LL)),
            0LL,
            3,
            0,
            0LL,
            0LL,
            (char *)this + 56,
            &v53,
            0LL,
            v51,
            0LL);
  }
  else
  {
    v11 = DXGGLOBAL::GetGlobal();
    v12 = DXGGLOBAL::CreateSyncObject(
            v11,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 16LL) + 16LL),
            *(_QWORD *)(*(_QWORD *)v7 + 16LL),
            (unsigned int)(1 << *(_DWORD *)(*(_QWORD *)v7 + 388LL)),
            v52,
            3,
            0,
            0LL,
            0LL,
            (char *)this + 56,
            &v53,
            0LL,
            0LL,
            0LL);
  }
  v13 = v12;
  v14 = *(_QWORD *)v7;
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(3LL, *(_QWORD *)(v14 + 16), v13);
    WdLogGlobalForLineNumber = 612;
LABEL_55:
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v48);
    return (unsigned int)v13;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 16LL) + 209LL) )
  {
    v42 = v53;
    *(_DWORD *)(*((_QWORD *)this + 7) + 44LL) = a2->hHwQueueProgressFence;
    a2->hHwQueueProgressFence = v42;
    v43 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 16LL) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v43 + 248));
    v44 = ((unsigned int)v42 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v44 < *(_DWORD *)(v43 + 296) )
    {
      v45 = *(_QWORD *)(v43 + 280);
      if ( (((unsigned int)v42 >> 25) & 0x60) == (*(_BYTE *)(v45 + 16 * v44 + 8) & 0x60)
        && (*(_DWORD *)(v45 + 16 * v44 + 8) & 0x1F) != 0 )
      {
        v46 = 16 * ((v42 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v46 + v45 + 8) & 0x2000) == 0 )
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
        *(_DWORD *)(*(_QWORD *)(v43 + 280) + v46 + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v43 + 256) = 0LL;
    ExReleasePushLockExclusiveEx(v43 + 248, 0LL);
    KeLeaveCriticalRegion();
    v13 = 0;
    goto LABEL_55;
  }
  memset(v51, 0, 0x50uLL);
  v15 = *((_QWORD *)this + 11);
  HIDWORD(v51[0]) |= 0x80u;
  v51[1] = v15;
  LODWORD(v51[0]) = 5;
  v16 = DXGGLOBAL::GetGlobal();
  LOBYTE(v47) = 0;
  SyncObject = DXGGLOBAL::CreateSyncObject(
                 v16,
                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 16LL) + 16LL),
                 *(_QWORD *)(*(_QWORD *)v7 + 16LL),
                 (unsigned int)(1 << *(_DWORD *)(*(_QWORD *)v7 + 388LL)),
                 v51,
                 16,
                 v47,
                 0LL,
                 0LL,
                 (char *)this + 80,
                 0LL,
                 0LL,
                 0LL,
                 0LL);
  v13 = SyncObject;
  if ( SyncObject < 0 )
  {
    WdLogSingleEntry2(3LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), SyncObject);
    WdLogGlobalForLineNumber = 650;
    goto LABEL_55;
  }
  if ( v48[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v48);
  v18 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v18 + 248));
  v19 = v53;
  v20 = (v53 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v20 < *(_DWORD *)(v18 + 296) )
  {
    v21 = *(_QWORD *)(v18 + 280);
    if ( ((v53 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60)
      && (*(_DWORD *)(v21 + 16 * v20 + 8) & 0x1F) != 0 )
    {
      v22 = 16 * (((unsigned __int64)v53 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v22 + v21 + 8) & 0x2000) == 0 )
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
      *(_DWORD *)(v22 + *(_QWORD *)(v18 + 280) + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v18 + 256) = 0LL;
  ExReleasePushLockExclusiveEx(v18 + 248, 0LL);
  KeLeaveCriticalRegion();
  v23 = a2->Flags.Value;
  v49.pPrivateDriverData = v54;
  v49.PrivateDriverDataSize = a2->PrivateDriverDataSize;
  NativeFenceDriverHandle = 0LL;
  v49.hHwQueue = this;
  v49.Flags.Value = v23;
  memset(&v49.hHwQueueProgressFence, 0, 24);
  if ( (v23 & 0x20) != 0 )
  {
    v41 = *(_QWORD *)(*((_QWORD *)this + 7) + 32LL);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v41 + 32));
    NativeFenceDriverHandle = DXGSYNCOBJECT::GetNativeFenceDriverHandle(
                                (DXGSYNCOBJECT *)v41,
                                *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v41 + 32));
    v23 = v49.Flags.Value;
  }
  else
  {
    v49.hHwQueueProgressFence = v19;
  }
  v24 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(v24 + 392) & 4) != 0 || *(_BYTE *)(*(_QWORD *)(v24 + 16) + 1914LL) )
    v49.Flags.Value = v23 | 1;
  v25 = *((_QWORD *)this + 7);
  if ( *(_DWORD *)(*(_QWORD *)(v25 + 32) + 420LL) == 7 )
  {
    v49.HwQueueProgressFenceCPUVirtualAddress = *(void **)(v25 + 64);
    *((_QWORD *)this + 8) = v49.HwQueueProgressFenceCPUVirtualAddress;
    v27 = *(_QWORD *)(v25 + 48);
  }
  else
  {
    v26 = (void *)*((_QWORD *)DXGSYNCOBJECT::GetCurrentValueStorage(*(DXGSYNCOBJECT **)(v25 + 32)) + 1);
    v27 = v52[3];
    v49.HwQueueProgressFenceCPUVirtualAddress = v26;
    *((_QWORD *)this + 8) = v26;
  }
  v28 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 9) = v27;
  v49.HwQueueProgressFenceGPUVirtualAddress = v27;
  if ( (a2->Flags.Value & 8) == 0 )
  {
    v29 = ADAPTER_RENDER::DdiCreateHwQueue(
            *(ADAPTER_RENDER **)(*(_QWORD *)(v28 + 16) + 16LL),
            *(void **)(v28 + 184),
            &v49);
    v30 = v29;
    if ( v29 < 0 )
    {
      if ( v29 != -1073741822 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 725;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DdiCreateHwQueue() failed with status 0x%I64d",
          v30,
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v30;
      }
      *((_QWORD *)this + 4) = 153LL;
    }
    else
    {
      *((_QWORD *)this + 4) = v49.hHwQueue;
    }
LABEL_26:
    v31 = (__int64 *)((char *)this + 48);
    HwQueue = VIDSCH_EXPORT::VidSchCreateHwQueue(
                *(VIDSCH_EXPORT **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL),
                this,
                *(struct VIDSCH_HW_CONTEXT **)(*((_QWORD *)this + 2) + 280LL),
                a2,
                (struct VIDSCH_HW_QUEUE **)this + 6,
                0LL);
    LODWORD(v30) = HwQueue;
    if ( HwQueue < 0 )
    {
      WdLogSingleEntry2(3LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), HwQueue);
      WdLogGlobalForLineNumber = 757;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX(
        (DXGAUTOMUTEX *)v48,
        (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 7) + 32LL) + 32LL),
        0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v48);
      VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(*((DXGDEVICESYNCOBJECT **)this + 7));
      VIDSCH_EXPORT::VidSchSetHwQueueProgressFenceObject(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL),
        *v31,
        (__int64)VidSchSyncObject,
        1u);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v48);
      v34 = *((_QWORD *)DXGDEVICE::GetProcessRenderAdapterInfo(*(DXGPROCESS ***)(*((_QWORD *)this + 2) + 16LL)) + 6);
      v35 = *((_QWORD *)this + 10);
      *((_QWORD *)this + 5) = v34;
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v48, (struct DXGFASTMUTEX *const)(*(_QWORD *)(v35 + 32) + 32LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v48);
      v36 = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(*((DXGDEVICESYNCOBJECT **)this + 10));
      VIDSCH_EXPORT::VidSchSetHwQueueProgressFenceObject(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL),
        *v31,
        (__int64)v36,
        2u);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v48);
      v37 = DXGPROCESS::AllocHandleSafe(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL),
              (__int64)this,
              0xFu);
      *((_DWORD *)this + 6) = v37;
      if ( v37 )
      {
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
            McTemplateK0ppp_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              &EventCreateHwQueue,
              v38,
              *((_QWORD *)this + 2),
              v37,
              this);
        }
      }
      else
      {
        LODWORD(v30) = -1073741801;
        WdLogSingleEntry2(3LL, this, -1073741801LL);
        WdLogGlobalForLineNumber = 794;
      }
    }
    return (unsigned int)v30;
  }
  if ( (*(_DWORD *)(v28 + 392) & 0x20) == 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 733;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The HW queue must specify NoKmdAccess flag",
      733LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  result = CheckNoKmdAccessPrivateData(v49.PrivateDriverDataSize, (_DWORD *)v49.pPrivateDriverData, 0xFF000005);
  if ( (int)result >= 0 )
    goto LABEL_26;
  return result;
}
