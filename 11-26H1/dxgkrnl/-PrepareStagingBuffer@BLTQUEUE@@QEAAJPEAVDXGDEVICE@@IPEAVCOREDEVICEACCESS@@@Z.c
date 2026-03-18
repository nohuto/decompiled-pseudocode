/*
 * XREFs of ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x140423030
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403C5B84 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1401FDB60 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x140282CC8 (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1402B9EF8 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x14039763C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x14042B398 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 */

__int64 __fastcall BLTQUEUE::PrepareStagingBuffer(
        BLTQUEUE *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4)
{
  struct COREDEVICEACCESS *v5; // r13
  __int64 v6; // rsi
  __int64 v8; // r14
  __int64 v9; // rbx
  unsigned int v10; // eax
  int v11; // r8d
  __int64 v12; // rcx
  struct _EX_RUNDOWN_REF *v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rsi
  int v16; // eax
  int v17; // eax
  ADAPTER_RENDER *v18; // r8
  int v19; // eax
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v26; // r12d
  struct DXGPROCESS *v27; // rsi
  volatile signed __int32 *v28; // r14
  unsigned int v29; // eax
  int v30; // r8d
  __int64 v31; // rcx
  struct _EX_RUNDOWN_REF *v32; // rdx
  struct COREDEVICEACCESS *v33; // rax
  int Resident; // eax
  D3DKMT_HANDLE v35; // eax
  int v36; // eax
  UINT Width; // ecx
  UINT Height; // eax
  unsigned int v40[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v41; // [rsp+58h] [rbp-A8h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v42; // [rsp+60h] [rbp-A0h] BYREF
  struct _D3DKMT_LOCK2 v43; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v44[12]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v45[54]; // [rsp+110h] [rbp+10h] BYREF
  DXGSYNCOBJECT *v46; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v47; // [rsp+2C8h] [rbp+1C8h]

  *(_QWORD *)v40 = a4;
  v5 = a4;
  v6 = a3;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)a2 + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5320;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      5320LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LODWORD(v8) = 0;
  v9 = *((_QWORD *)a2 + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v9 + 248));
  v10 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( v10 < *(_DWORD *)(v9 + 296)
    && (v11 = *(_DWORD *)(*(_QWORD *)(v9 + 280) + 16LL * v10 + 8),
        (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v9 + 280) + 16LL * v10 + 8) & 0x60))
    && (v11 & 0x2000) == 0
    && (v11 & 0x1F) != 0 )
  {
    v12 = *(_QWORD *)(v9 + 280);
    if ( (*(_BYTE *)(v12 + 16LL * v10 + 8) & 0x1F) == 5 )
    {
      v13 = *(struct _EX_RUNDOWN_REF **)(v12 + 16LL * v10);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      v13 = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v41, v13);
  _InterlockedDecrement((volatile signed __int32 *)(v9 + 264));
  ExReleasePushLockSharedEx(v9 + 248, 0LL);
  KeLeaveCriticalRegion();
  memset(&v42, 0, sizeof(v42));
  if ( !v41 )
  {
    WdLogSingleEntry3(3LL, -1073741811LL, this, v6);
    WdLogGlobalForLineNumber = 5353;
    goto LABEL_18;
  }
  v14 = *((_QWORD *)a2 + 2);
  if ( *(_QWORD *)(*(_QWORD *)(v41[1].Count + 16) + 16LL) == *(_QWORD *)(v14 + 16) )
  {
    v42.hAllocation = *(HANDLE *)(v41[6].Count + 16);
    v16 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v14 + 16) + 3168LL), &v42);
    v15 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 5346;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DdiDescribeAllocation failed: 0x%I64x",
        v15,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_54;
    }
LABEL_18:
    if ( !*((_DWORD *)this + 734) )
    {
      *((_QWORD *)this + 369) = 0LL;
      memset(v44, 0, sizeof(v44));
      v17 = *((_DWORD *)a2 + 117);
      v18 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
      HIDWORD(v44[1]) |= 0x80u;
      LODWORD(v44[0]) = v17;
      LODWORD(v44[1]) = 5;
      v19 = CreateSynchronizationObjectInternal(
              (__int64)a2,
              0,
              v18,
              (__int64)v44,
              12,
              0,
              &v46,
              (__int64 *)this + 368,
              0LL);
      v8 = v19;
      if ( v19 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 5379;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DxgkCreateSynchronizationObjectInternal failed: 0x%I64x",
          v8,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_53:
        LODWORD(v15) = v8;
        goto LABEL_54;
      }
      v20 = *((_QWORD *)a2 + 5);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v20 + 248));
      v21 = (LODWORD(v44[11]) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v21 < *(_DWORD *)(v20 + 296) )
      {
        v22 = *(_QWORD *)(v20 + 280);
        if ( ((LODWORD(v44[11]) >> 25) & 0x60) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60)
          && (*(_DWORD *)(v22 + 16 * v21 + 8) & 0x1F) != 0 )
        {
          v23 = 16 * ((v44[11] >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v22 + v23 + 8) & 0x2000) == 0 )
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
          *(_DWORD *)(v23 + *(_QWORD *)(v20 + 280) + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v20 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v20 + 248, 0LL);
      KeLeaveCriticalRegion();
      v5 = *(struct COREDEVICEACCESS **)v40;
      *((_DWORD *)this + 734) = v44[11];
    }
    if ( *((_DWORD *)this + 728) )
    {
      if ( v42.Width != *((_DWORD *)this + 730) || v42.Height != *((_DWORD *)this + 731) )
        BLTQUEUE::DestroyStagingBuffer(this);
      if ( *((_DWORD *)this + 728) )
        goto LABEL_53;
    }
    memset(v45, 0, 424);
    v46 = *(DXGSYNCOBJECT **)&v42.Width;
    v47 = 0;
    v45[3] = &v46;
    HIDWORD(v45[0]) = 0;
    LODWORD(v45[2]) = 3;
    LODWORD(v8) = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v45, v5);
    if ( (int)v8 < 0 )
      goto LABEL_53;
    *((_DWORD *)this + 726) = HIDWORD(v45[6]);
    *((_DWORD *)this + 728) = v45[1];
    Current = DXGPROCESS::GetCurrent(v24);
    v26 = HIDWORD(v45[6]);
    v27 = Current;
    v28 = (volatile signed __int32 *)((char *)Current + 248);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
    v29 = (v26 >> 6) & 0xFFFFFF;
    if ( v29 < *((_DWORD *)v27 + 74) )
    {
      v30 = *(_DWORD *)(*((_QWORD *)v27 + 35) + 16LL * v29 + 8);
      if ( ((v26 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v27 + 35) + 16LL * v29 + 8) & 0x60)
        && (v30 & 0x2000) == 0
        && (v30 & 0x1F) != 0 )
      {
        v31 = *((_QWORD *)v27 + 35);
        if ( (*(_BYTE *)(v31 + 16LL * v29 + 8) & 0x1F) == 5 )
        {
          v32 = *(struct _EX_RUNDOWN_REF **)(v31 + 16LL * v29);
          goto LABEL_41;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v32 = 0LL;
LABEL_41:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v40, v32);
    _InterlockedDecrement(v28 + 4);
    ExReleasePushLockSharedEx(v28, 0LL);
    KeLeaveCriticalRegion();
    v33 = *(struct COREDEVICEACCESS **)v40;
    if ( !*(_QWORD *)v40 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5424;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"AllocRef.m_pAllocation != NULL",
        5424LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v33 = *(struct COREDEVICEACCESS **)v40;
    }
    *((_DWORD *)this + 727) = *((_DWORD *)v33 + 5);
    Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 4712LL),
                 *((_DWORD *)v27 + 122),
                 *((_DWORD *)a2 + 118),
                 0,
                 (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                 1u,
                 (const struct DXGALLOCATIONREFERENCE *)v40,
                 0LL,
                 0LL);
    v8 = Resident;
    if ( Resident >= 0 )
    {
      v35 = *((_DWORD *)this + 726);
      memset(&v43, 0, sizeof(v43));
      v43.hAllocation = v35;
      LODWORD(v8) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                      (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 4712LL),
                      v27,
                      a2,
                      &v43,
                      0);
      if ( (int)v8 < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 5450;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"VmBusSendLock2 failed", 5450LL, 0LL, 0LL, 0LL, 0LL);
      }
      *((_QWORD *)this + 366) = v43.pData;
      if ( (int)v8 >= 0 )
      {
        v36 = v47;
        if ( !v47 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5456;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"0 != StagingSurfaceData.Pitch",
            5456LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v36 = v47;
        }
        Width = v42.Width;
        *((_DWORD *)this + 729) = v36;
        Height = v42.Height;
        *((_DWORD *)this + 731) = v42.Height;
        *((_DWORD *)this + 743) = Height;
        *((_DWORD *)this + 730) = Width;
        *((_QWORD *)this + 370) = 0LL;
        *((_DWORD *)this + 742) = Width;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 5441;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendMakeResident failed: 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v40);
    goto LABEL_53;
  }
  LODWORD(v15) = -1073741811;
  WdLogSingleEntry3(2LL, a2, v41, -1073741811LL);
  WdLogGlobalForLineNumber = 5337;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
    (__int64)a2,
    (__int64)v41,
    -1073741811LL,
    0LL,
    0LL);
LABEL_54:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v41);
  return (unsigned int)v15;
}
