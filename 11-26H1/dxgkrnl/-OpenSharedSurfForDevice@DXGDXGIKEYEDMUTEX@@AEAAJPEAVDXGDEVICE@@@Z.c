/*
 * XREFs of ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1401EE398
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1401EDEC0 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x140045DFC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x140045E34 (-VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDM.c)
 *     ?VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K3@Z @ 0x140046468 (-VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MUL.c)
 *     ?VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x14005C4E4 (-VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAP.c)
 *     ?VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x140060570 (-VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1402BF7C4 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1403126F0 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1403561E4 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x140396E10 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x14042B398 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x14042BC04 (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int Resident; // edi
  __int64 hAsyncEvent_high; // r14
  struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS::$F7AD40C7F43293C52D6341E48450DADD::$5E26B6FB14B4CB4C08E82C1CB39B605A Value; // r12d
  UINT v10; // r15d
  int hAsyncEvent; // r13d
  UINT v12; // eax
  __int64 v13; // rdi
  int v14; // edi
  _BYTE *Pool2; // rcx
  void *v16; // rax
  char v17; // r12
  __int64 v18; // rcx
  unsigned int v19; // r14d
  __int64 v20; // r13
  unsigned int v21; // eax
  int v22; // r8d
  __int64 v23; // rcx
  struct DXGRESOURCE *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // r13
  struct DXGPROCESS *Current; // rax
  char v29; // r15
  char v30; // r15
  __int64 v31; // rcx
  int v32; // eax
  D3DKMT_HANDLE v33; // r8d
  __int64 v34; // rax
  __int64 v35; // [rsp+28h] [rbp-D8h]
  unsigned __int64 PagingFenceValue; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  struct VIDMM_PAGING_QUEUE *v38; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+68h] [rbp-98h]
  struct DXGPROCESS *v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v42[8]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v43; // [rsp+88h] [rbp-78h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v44; // [rsp+90h] [rbp-70h] BYREF
  void *v45; // [rsp+98h] [rbp-68h]
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v46; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v47[17]; // [rsp+C8h] [rbp-38h] BYREF
  D3DDDI_MAPGPUVIRTUALADDRESS v48; // [rsp+150h] [rbp+50h] BYREF
  PVOID P; // [rsp+1C0h] [rbp+C0h]
  _BYTE v50[320]; // [rsp+1C8h] [rbp+C8h] BYREF
  int v51; // [rsp+308h] [rbp+208h]

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)a2 + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 233;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      233LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = *(_QWORD *)this;
  memset(&v46, 0, sizeof(v46));
  Resident = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(a2, &v46, v4, v5);
  if ( Resident < 0 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 240;
    return (unsigned int)Resident;
  }
  hAsyncEvent_high = HIDWORD(v46.hAsyncEvent);
  Value = (struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS::$F7AD40C7F43293C52D6341E48450DADD::$5E26B6FB14B4CB4C08E82C1CB39B605A)v46.Flags.Value;
  v10 = HIDWORD(v46.hAsyncEvent) + v46.Flags.Value;
  if ( HIDWORD(v46.hAsyncEvent) + v46.Flags.Value < HIDWORD(v46.hAsyncEvent) )
  {
    WdLogSingleEntry0(2LL);
    v34 = 249LL;
  }
  else
  {
    hAsyncEvent = (int)v46.hAsyncEvent;
    v12 = v10 + LODWORD(v46.hAsyncEvent);
    if ( v10 + LODWORD(v46.hAsyncEvent) >= v10 )
    {
      v13 = v12;
      v45 = (void *)operator new[](v12, 0x674D444Fu, 256LL);
      if ( !v45 )
      {
        WdLogSingleEntry2(6LL, this, (unsigned int)v13);
        WdLogGlobalForLineNumber = 264;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"KeyedMutex 0x%I64x failed to allocate PrivateDriverData buffer of 0x%I64d bytes",
          (__int64)this,
          v13,
          0LL,
          0LL,
          0LL);
        return 3221225495LL;
      }
      memset(&v47[3], 0, 0x68uLL);
      v14 = *((_DWORD *)&v46.Flags + 1);
      P = 0LL;
      v51 = 0;
      if ( *((_DWORD *)&v46.Flags + 1) <= 4u )
      {
        Pool2 = v50;
        P = v50;
        if ( *((_DWORD *)&v46.Flags + 1) )
        {
          memset(v50, 0, 80LL * *((unsigned int *)&v46.Flags + 1));
          Pool2 = P;
        }
      }
      else
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / *((unsigned int *)&v46.Flags + 1) < 0x50 )
          goto LABEL_17;
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, 80LL * *((unsigned int *)&v46.Flags + 1), 1265072196LL);
        P = Pool2;
      }
      v51 = v14;
      if ( !Pool2 )
      {
LABEL_17:
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 276;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate memory for D3DDDI_OPENALLOCATIONINFO2",
          276LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( P != v50 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        return 3221225495LL;
      }
      LODWORD(v47[3]) = *((_DWORD *)a2 + 117);
      v16 = (void *)v47[12];
      v47[6] = Pool2;
      if ( (_DWORD)hAsyncEvent_high )
        v16 = v45;
      LODWORD(v47[5]) = v14;
      v47[12] = v16;
      LODWORD(v47[11]) = hAsyncEvent_high;
      if ( Value )
        v47[10] = (char *)v45 + hAsyncEvent_high;
      LODWORD(v47[9]) = Value;
      v17 = 0;
      if ( hAsyncEvent )
        v47[8] = (char *)v45 + v10;
      LODWORD(v47[7]) = hAsyncEvent;
      Resident = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(a2, 0, 0LL, 0, 0LL, 0LL, 0LL);
      if ( Resident < 0 )
      {
        WdLogSingleEntry2(4LL, this, *(_QWORD *)this);
        WdLogGlobalForLineNumber = 463;
        goto LABEL_66;
      }
      v18 = *((_QWORD *)this + 1);
      v19 = v47[13];
      *((_DWORD *)this + 22) = v47[13];
      v20 = *(_QWORD *)(v18 + 40);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v20 + 248));
      v21 = (v19 >> 6) & 0xFFFFFF;
      if ( v21 < *(_DWORD *)(v20 + 296) )
      {
        v22 = *(_DWORD *)(*(_QWORD *)(v20 + 280) + 16LL * v21 + 8);
        if ( ((v19 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v20 + 280) + 16LL * v21 + 8) & 0x60)
          && (v22 & 0x2000) == 0
          && (v22 & 0x1F) != 0 )
        {
          v23 = *(_QWORD *)(v20 + 280);
          if ( (*(_BYTE *)(v23 + 16LL * v21 + 8) & 0x1F) == 4 )
          {
            v24 = *(struct DXGRESOURCE **)(v23 + 16LL * v21);
LABEL_34:
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v41, v24);
            _InterlockedDecrement((volatile signed __int32 *)(v20 + 264));
            ExReleasePushLockSharedEx(v20 + 248, 0LL);
            KeLeaveCriticalRegion();
            if ( !v41 )
            {
              WdLogSingleEntry2(2LL, this, *((unsigned int *)this + 22));
              v35 = *((unsigned int *)this + 22);
              WdLogGlobalForLineNumber = 457;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"KeyedMutex 0x%I64x failed to find resource for handle 0x%I64x",
                (__int64)this,
                v35,
                0LL,
                0LL,
                0LL);
              Resident = -1073741811;
              goto LABEL_64;
            }
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v47, (struct DXGFASTMUTEX *const)(v41 + 80), 0);
            if ( (unsigned int)Feature_3472570682__private_IsEnabledDeviceUsageNoInline() )
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
            v25 = v41;
            *((_DWORD *)this + 23) = *(_DWORD *)(*(_QWORD *)(v41 + 24) + 16LL);
            v26 = *((_QWORD *)a2 + 2);
            PagingFenceValue = 0LL;
            v38 = 0LL;
            v44 = 0LL;
            v27 = *(_QWORD *)(v25 + 24);
            Current = DXGPROCESS::GetCurrent();
            v29 = *((_BYTE *)a2 + 1917);
            v40 = Current;
            v39 = *(_QWORD *)(v26 + 16);
            v30 = v29 & 1;
            if ( !v30
              && (DXGDEVICE::UmdManagesResidency(a2)
               || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2508LL) & 0x40) != 0) )
            {
              VIDMM_EXPORT::VidMmGetDevicePagingQueue(
                *(VIDMM_EXPORT **)(v26 + 760),
                *((struct VIDMM_DEVICE **)a2 + 99),
                (*(_DWORD *)(v27 + 72) >> 12) & 0x3F,
                &v38,
                &v44);
            }
            if ( DXGDEVICE::UmdManagesResidency(a2) )
            {
              v37 = 0LL;
              v43 = 0LL;
              if ( v30 )
              {
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
                  (DXGALLOCATIONREFERENCE *)v42,
                  (struct DXGALLOCATION *)v27);
                Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(v39 + 4712),
                             *((_DWORD *)v40 + 122),
                             *((_DWORD *)a2 + 118),
                             0,
                             (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                             1u,
                             (const struct DXGALLOCATIONREFERENCE *)v42,
                             &v37,
                             &v43);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v42);
              }
              else
              {
                Resident = VIDMM_EXPORT::VidMmMakeResident(
                             *(VIDMM_EXPORT **)(v26 + 760),
                             *(struct VIDMM_GLOBAL **)(v26 + 768),
                             v38,
                             (struct VIDMM_MULTI_ALLOC **)(v27 + 24),
                             1u,
                             3u,
                             &v37,
                             &v43);
              }
              if ( Resident < 0 )
              {
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 381;
LABEL_62:
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v47);
LABEL_64:
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v41);
LABEL_66:
                DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v45);
                if ( P != v50 && P )
                  ExFreePoolWithTag(P, 0);
                return (unsigned int)Resident;
              }
              if ( Resident == 259 )
              {
                v17 = 1;
                PagingFenceValue = v37;
                Resident = 0;
              }
            }
            if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2508LL) & 0x40) != 0 )
            {
              memset(&v48, 0, sizeof(v48));
              v31 = *(_QWORD *)(v26 + 16);
              v48.Protection.Value = 1LL;
              v48.MinimumAddress = *(_QWORD *)(v31 + 2992);
              v48.MaximumAddress = *(_QWORD *)(v31 + 3000);
              if ( v30 )
                v32 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                        (DXG_GUEST_VIRTUALGPU_VMBUS *)(v39 + 4712),
                        *((_DWORD *)v40 + 122),
                        a2,
                        0,
                        *(_DWORD *)(v27 + 16),
                        &v48);
              else
                v32 = VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
                        *(VIDMM_EXPORT **)(v26 + 760),
                        *(struct VIDMM_GLOBAL **)(v26 + 768),
                        v38,
                        *(struct VIDMM_MULTI_ALLOC **)(v27 + 24),
                        &v48,
                        1,
                        0xFFFFFFFE);
              Resident = v32;
              if ( v32 >= 0 )
              {
                if ( v32 == 259 )
                {
                  PagingFenceValue = v48.PagingFenceValue;
                  Resident = 0;
                  goto LABEL_57;
                }
              }
              else
              {
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 424;
              }
            }
            if ( !v17 )
              goto LABEL_62;
LABEL_57:
            if ( v30 )
            {
              v33 = *((_DWORD *)a2 + 118);
              v46.ObjectHandleArray = 0LL;
              *(_OWORD *)&v46.hAsyncEvent = 0LL;
              v46.hDevice = v33;
              v46.ObjectCount = 1;
              v46.FenceValueArray = &PagingFenceValue;
              Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)(v39 + 4712),
                           v40,
                           v33,
                           &v46,
                           1u);
            }
            else
            {
              VIDMM_EXPORT::VidMmWaitForFences(
                *(VIDMM_EXPORT **)(v26 + 760),
                *(struct VIDMM_GLOBAL **)(v26 + 768),
                &v44,
                &PagingFenceValue);
            }
            goto LABEL_62;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v24 = 0LL;
      goto LABEL_34;
    }
    WdLogSingleEntry0(2LL);
    v34 = 255LL;
  }
  WdLogGlobalForLineNumber = v34;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Overflow while calculating buffer size",
    v34,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225621LL;
}
