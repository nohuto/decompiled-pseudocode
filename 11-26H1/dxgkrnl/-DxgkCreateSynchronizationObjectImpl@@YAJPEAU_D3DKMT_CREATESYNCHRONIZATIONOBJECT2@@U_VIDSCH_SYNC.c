/*
 * XREFs of ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403C442C
 * Callers:
 *     DxgkCreateSynchronizationObjectInternal @ 0x1401FF648 (DxgkCreateSynchronizationObjectInternal.c)
 *     ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140224C20 (-VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1403C43C0 (-DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkCreateSynchronizationObject @ 0x1403C4400 (DxgkCreateSynchronizationObject.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140030B80 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140038160 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140053148 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     Feature_MSRC98117_57713533__private_IsEnabledNoReportingNoInline @ 0x140081F58 (Feature_MSRC98117_57713533__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1401FDB60 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1402BDBF8 (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1403C698C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObjectImpl(
        __int64 a1,
        unsigned int a2,
        D3DKMT_HANDLE a3,
        struct DXGADAPTER *a4)
{
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v10; // r15
  int v11; // ebx
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E Value; // ecx
  __int64 v13; // r9
  struct DXGADAPTER *v14; // r13
  struct DXGDEVICE *v15; // r13
  int v16; // r12d
  struct DXGDEVICE *v17; // r12
  __int64 v18; // rcx
  __int64 v20; // rcx
  __int64 Type; // rcx
  __int64 hSyncObject; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r9
  struct _KTHREAD **v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // r14
  unsigned __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // r14
  __int64 v37; // rcx
  int v38; // [rsp+50h] [rbp-258h] BYREF
  __int64 v39; // [rsp+58h] [rbp-250h]
  char v40; // [rsp+60h] [rbp-248h]
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v41; // [rsp+68h] [rbp-240h] BYREF
  _BYTE v42[8]; // [rsp+70h] [rbp-238h] BYREF
  struct DXGDEVICE *v43; // [rsp+78h] [rbp-230h] BYREF
  int v44; // [rsp+80h] [rbp-228h]
  struct DXGADAPTER *v45; // [rsp+88h] [rbp-220h] BYREF
  struct DXGDEVICE *v46; // [rsp+90h] [rbp-218h] BYREF
  int v47; // [rsp+98h] [rbp-210h]
  struct DXGADAPTER *v48[2]; // [rsp+A0h] [rbp-208h] BYREF
  struct DXGSYNCOBJECT *v49; // [rsp+B0h] [rbp-1F8h] BYREF
  struct DXGADAPTER *v50; // [rsp+B8h] [rbp-1F0h] BYREF
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 Src; // [rsp+C0h] [rbp-1E8h] BYREF
  DXGADAPTER *v52[2]; // [rsp+120h] [rbp-188h] BYREF
  _BYTE v53[144]; // [rsp+130h] [rbp-178h] BYREF
  _BYTE v54[160]; // [rsp+1C0h] [rbp-E8h] BYREF

  v50 = a4;
  v41.hSyncObject = a3;
  v38 = -1;
  v39 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 2041);
  Current = DXGPROCESS::GetCurrent(v8);
  v10 = Current;
  v52[0] = Current;
  if ( !Current )
  {
    v11 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 370;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_111;
  }
  v44 = *((_DWORD *)Current + 102) & 0x180;
  memset(&Src, 0, sizeof(Src));
  if ( a3 )
  {
    RtlCopyFromUser(&Src, (void *)a1, 0x60uLL);
    Value = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)Src.Info.Flags.Value;
    if ( (a2 & 0x7FFFFFFF) == 1 && (Src.Info.Flags.Value & 0x80000000) != 0 )
      a2 = a2 & 0x80000000 | 5;
  }
  else
  {
    Src = *(struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)a1;
    Value = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Src.hDevice, 12));
  }
  Src.hSyncObject = 0;
  if ( (Src.Info.Flags.Value & 0x7FFFF800) != 0 )
  {
    v11 = -1073741811;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 412;
    goto LABEL_111;
  }
  if ( ((*(unsigned int *)&Value >> 1) & 1) != 0 && (*(_BYTE *)&Value & 1) == 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)&gDxgkrnlCounterAccumulated, 1u);
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 420;
    goto LABEL_45;
  }
  if ( (unsigned int)(Src.Info.Type - 5) <= 1 )
  {
    if ( a4 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 429;
      goto LABEL_45;
    }
    if ( (*(_BYTE *)&Value & 1) != 0 && ((*(unsigned int *)&Value >> 1) & 1) == 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 434;
      goto LABEL_45;
    }
    if ( (*(_BYTE *)&Value & 0x10) != 0 && (*(_BYTE *)&Value & 0x20) != 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 440;
      goto LABEL_45;
    }
  }
  else if ( *(_BYTE *)&Value < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 446;
    goto LABEL_45;
  }
  v43 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v42, Src.hDevice, (struct _KTHREAD **)v10, &v43);
  if ( !v43 && (a3 || Src.hDevice) )
  {
    v11 = -1073741811;
    WdLogSingleEntry2(2LL, Src.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 466;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      Src.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_110:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v42);
LABEL_111:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v37, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v11;
  }
  v49 = 0LL;
  v14 = 0LL;
  v45 = 0LL;
  v48[0] = 0LL;
  v46 = v43;
  v47 = 0;
  if ( !a4 )
  {
    v15 = v43;
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, (__int64)v43, 0, v13, 0);
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v53,
      *(struct DXGADAPTER *const *)(*((_QWORD *)v15 + 2) + 16LL),
      0LL);
    if ( (unsigned int)(Src.Info.Type - 5) > 1 )
    {
      v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v53, 0LL);
      if ( v16 >= 0 )
      {
LABEL_36:
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v48, *(struct DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
        v50 = 0LL;
        v11 = CreateSynchronizationObjectInternal(
                (__int64)v15,
                1,
                *((ADAPTER_RENDER **)v15 + 2),
                (__int64)&Src,
                a2,
                0,
                &v49,
                (__int64 *)&v50,
                (__int64)&v45);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v54);
        v14 = v45;
        v17 = v43;
LABEL_52:
        if ( v11 < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 615;
        }
        else
        {
          if ( v41.hSyncObject )
          {
            RtlWriteULongToUser((_DWORD *)(a1 + 88), Src.hSyncObject);
            if ( (*(_BYTE *)&Src.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&Src.Info.Flags.0 & 2) == 0 || v44) )
              RtlWriteULongToUser((_DWORD *)(a1 + 80), Src.Info.SharedHandle);
            Type = (unsigned int)Src.Info.Type;
            if ( Src.Info.Type == D3DDDI_MONITORED_FENCE )
            {
              RtlCopyToUser((void *)(a1 + 16), &Src.Info.SynchronizationMutex, 0x20uLL);
              Type = (unsigned int)Src.Info.Type;
            }
            if ( (_DWORD)Type == 6 )
            {
              RtlCopyToUser((void *)(a1 + 16), &Src.Info.SynchronizationMutex, 0x28uLL);
              Type = (unsigned int)Src.Info.Type;
            }
            hSyncObject = Src.hSyncObject;
          }
          else
          {
            hSyncObject = Src.hSyncObject;
            *(_DWORD *)(a1 + 88) = Src.hSyncObject;
            if ( (*(_BYTE *)&Src.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&Src.Info.Flags.0 & 2) == 0 || v44) )
              *(_DWORD *)(a1 + 80) = Src.Info.SharedHandle;
            Type = (unsigned int)Src.Info.Type;
            if ( Src.Info.Type == D3DDDI_MONITORED_FENCE )
            {
              *(_OWORD *)(a1 + 16) = *(_OWORD *)&Src.Info.SynchronizationMutex.InitialState;
              *(_OWORD *)(a1 + 32) = *(_OWORD *)&Src.Info.Reserved.Reserved[2];
            }
            if ( (_DWORD)Type == 6 )
            {
              *(_OWORD *)(a1 + 16) = *(_OWORD *)&Src.Info.SynchronizationMutex.InitialState;
              *(_OWORD *)(a1 + 32) = *(_OWORD *)&Src.Info.Reserved.Reserved[2];
              *(_QWORD *)(a1 + 48) = Src.Info.Reserved.Reserved[4];
            }
          }
          if ( bTracingEnabled )
          {
            if ( v14 ? *((_QWORD *)v14 + 4) : 0LL )
            {
              v25 = v14 ? *((_QWORD *)v14 + 4) : 0LL;
              v24 = *(_QWORD *)(v25 + 16);
            }
            else
            {
              v24 = 0LL;
            }
            v26 = v14 ? *((_QWORD *)v14 + 4) : 0LL;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              McTemplateK0pppp_EtwWriteTransfer(
                Type,
                &EventOpenSyncObject,
                hSyncObject,
                v26,
                (unsigned int)hSyncObject,
                v17,
                v24);
              Type = (unsigned int)Src.Info.Type;
            }
          }
          if ( (_DWORD)Type == 6 )
          {
            v45 = 0LL;
            v27 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(Type);
            DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v52, Src.Info.Semaphore.MaxCount, v27, &v45, 1);
            if ( v45 )
            {
              v11 = CreatePeriodicMonitoredFenceNotificationInternal(v45, v48[0], v49, &Src, 0);
            }
            else
            {
              v11 = -1073741811;
              WdLogSingleEntry2(3LL, Src.Info.Semaphore.MaxCount, -1073741811LL);
              WdLogGlobalForLineNumber = 629;
            }
            DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v52, v28);
          }
          if ( (unsigned int)Feature_MSRC98117_57713533__private_IsEnabledNoReportingNoInline() )
          {
            v29 = Src.hSyncObject;
            DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v10 + 248));
            v30 = ((unsigned int)v29 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v30 < *((_DWORD *)v10 + 74) )
            {
              v31 = *((_QWORD *)v10 + 35);
              if ( (((unsigned int)v29 >> 25) & 0x60) == (*(_BYTE *)(v31 + 16 * v30 + 8) & 0x60)
                && (*(_DWORD *)(v31 + 16 * v30 + 8) & 0x1F) != 0 )
              {
                v32 = 16 * ((v29 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v31 + v32 + 8) & 0x2000) == 0 )
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
                *(_DWORD *)(v32 + *((_QWORD *)v10 + 35) + 8) &= ~0x2000u;
              }
            }
            *((_QWORD *)v10 + 32) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v10 + 248, 0LL);
            KeLeaveCriticalRegion();
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v46);
          }
          else
          {
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v46);
            v33 = Src.hSyncObject;
            DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v10 + 248));
            v34 = ((unsigned int)v33 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v34 < *((_DWORD *)v10 + 74) )
            {
              v35 = *((_QWORD *)v10 + 35);
              if ( (((unsigned int)v33 >> 25) & 0x60) == (*(_BYTE *)(v35 + 16 * v34 + 8) & 0x60)
                && (*(_DWORD *)(v35 + 16 * v34 + 8) & 0x1F) != 0 )
              {
                v36 = 16 * ((v33 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v36 + v35 + 8) & 0x2000) == 0 )
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
                *(_DWORD *)(v36 + *((_QWORD *)v10 + 35) + 8) &= ~0x2000u;
              }
            }
            *((_QWORD *)v10 + 32) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v10 + 248, 0LL);
            KeLeaveCriticalRegion();
          }
          if ( v11 < 0 )
          {
            v41.hSyncObject = Src.hSyncObject;
            DxgkDestroySynchronizationObjectImpl(&v41, 0);
          }
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v46);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v48, 0LL);
        goto LABEL_110;
      }
      goto LABEL_38;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v46);
    v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v54, 0LL);
    if ( v16 < 0 )
    {
LABEL_38:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v54);
      goto LABEL_39;
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL)) )
      goto LABEL_36;
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 500;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v54);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v46);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v48, 0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v42);
LABEL_45:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
    return (unsigned int)-1073741811;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v53, a4, 0LL);
  v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v53, 0LL);
  if ( v16 >= 0 )
  {
    v17 = v43;
    v11 = CreateSynchronizationObjectInternal(
            (__int64)v43,
            1,
            *((ADAPTER_RENDER **)v50 + 396),
            (__int64)&Src,
            a2,
            0,
            &v49,
            0LL,
            0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
    goto LABEL_52;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
LABEL_39:
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v46);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v48, 0LL);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
  return (unsigned int)v16;
}
