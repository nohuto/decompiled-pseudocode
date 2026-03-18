/*
 * XREFs of ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z @ 0x14028AB0C
 * Callers:
 *     ?VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14028A8F0 (-VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkEvict @ 0x14028AAF0 (DxgkEvict.c)
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEBD@Z @ 0x140432E30 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEBD@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF00 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14003BB64 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x14004240C (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x140045DFC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidSchMarkDeviceAsError@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_DEVICE@@W4_VIDSCH_ERROR_CODE@@PEAU_D3DKMT_DEVICEPAGEFAULT_STATE@@@Z @ 0x14005C164 (-VidSchMarkDeviceAsError@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_DEVICE@@W4_VIDSCH_ERROR_CODE@@PEAU_D3DK.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z @ 0x14022ED2C (-VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERE.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x14028C21C (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkEvictInternal(struct _D3DKMT_EVICT *Src, int a2, const char *a3)
{
  DXGPROCESS *Current; // r13
  struct _D3DKMT_EVICT *v7; // r12
  DXGDEVICE *v8; // r13
  ADAPTER_RENDER **v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // r9
  int v13; // edi
  __int64 NumAllocations; // rdx
  unsigned int *AllocationList; // rsi
  unsigned int *v16; // r8
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  ADAPTER_RENDER **v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGALLOCATIONREFERENCE *v22; // rdi
  unsigned int ULongFromUser; // eax
  __int64 v24; // rax
  DXGDEVICE *v25; // r8
  __int64 v26; // rdi
  char v27; // r8
  __int64 v28; // r9
  int v29; // ecx
  __int64 v30; // rdi
  __int64 v31; // rbx
  int v32; // r12d
  unsigned int i; // ebx
  unsigned int j; // ebx
  ADAPTER_RENDER **v35; // rcx
  const wchar_t *v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rsi
  struct D3DDDI_EVICT_FLAGS v39; // ebx
  int v40; // edi
  int HostProcess; // eax
  char v42; // [rsp+50h] [rbp-258h]
  int v43; // [rsp+58h] [rbp-250h] BYREF
  __int64 v44; // [rsp+60h] [rbp-248h]
  char v45; // [rsp+68h] [rbp-240h]
  unsigned int v46; // [rsp+70h] [rbp-238h]
  __int64 v47; // [rsp+78h] [rbp-230h] BYREF
  struct DXGDEVICE *v48; // [rsp+80h] [rbp-228h] BYREF
  int v49; // [rsp+88h] [rbp-220h]
  unsigned int v50[2]; // [rsp+90h] [rbp-218h]
  unsigned __int64 Srca; // [rsp+98h] [rbp-210h] BYREF
  struct _D3DKMT_EVICT *v52; // [rsp+A0h] [rbp-208h]
  int v53; // [rsp+A8h] [rbp-200h]
  DXGDEVICE *v54; // [rsp+B0h] [rbp-1F8h] BYREF
  struct DXGALLOCATIONREFERENCE *v55; // [rsp+B8h] [rbp-1F0h]
  __int64 v56; // [rsp+C0h] [rbp-1E8h] BYREF
  int v57; // [rsp+C8h] [rbp-1E0h]
  struct _D3DKMT_EVICT *v58; // [rsp+D0h] [rbp-1D8h]
  unsigned int *v59; // [rsp+D8h] [rbp-1D0h]
  __int64 v60; // [rsp+E0h] [rbp-1C8h]
  unsigned int v61; // [rsp+E8h] [rbp-1C0h]
  unsigned int *v62; // [rsp+F0h] [rbp-1B8h]
  __int64 v63; // [rsp+F8h] [rbp-1B0h] BYREF
  DXGPROCESS *v64; // [rsp+100h] [rbp-1A8h]
  unsigned int *v65; // [rsp+108h] [rbp-1A0h]
  _BYTE v66[24]; // [rsp+110h] [rbp-198h] BYREF
  _OWORD *v67; // [rsp+128h] [rbp-180h]
  _OWORD v68[2]; // [rsp+130h] [rbp-178h] BYREF
  DXGALLOCATIONREFERENCE *v69; // [rsp+150h] [rbp-158h] BYREF
  _BYTE v70[128]; // [rsp+158h] [rbp-150h] BYREF
  unsigned int v71; // [rsp+1D8h] [rbp-D0h]
  _BYTE v72[160]; // [rsp+1E0h] [rbp-C8h] BYREF

  v49 = a2;
  v52 = Src;
  v43 = -1;
  v44 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2116;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 2116);
  Current = DXGPROCESS::GetCurrent();
  v64 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 746;
    v36 = L"Invalid process context, returning 0x%I64x";
LABEL_82:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v36, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_18;
  }
  memset(v68, 0, sizeof(v68));
  if ( a2 )
  {
    RtlCopyFromUser(v68, Src, 0x20uLL);
    v7 = (struct _D3DKMT_EVICT *)v68;
    v58 = (struct _D3DKMT_EVICT *)v68;
    v67 = v68;
  }
  else
  {
    v7 = Src;
    v58 = Src;
  }
  if ( !v7->NumAllocations )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 776;
    v36 = L"Call to DxgkEvict contained no allocations, returning 0x%I64x";
    goto LABEL_82;
  }
  if ( !v7->AllocationList )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 783;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"AllocationList passed to DxgkEvict cannot be NULL.",
      783LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_18:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( v45 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  if ( v7->Flags.Value >= 4 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 790;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Reserved flags passed to DxgkEvict should be all zeros.",
      790LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_18;
  }
  v69 = (DXGALLOCATIONREFERENCE *)v70;
  memset(v70, 0, sizeof(v70));
  v71 = 16;
  v55 = (struct DXGALLOCATIONREFERENCE *)v70;
  v54 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v48, v7->hDevice, (struct _KTHREAD **)Current, &v54);
  v8 = v54;
  if ( !v54 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 819;
    v9 = (ADAPTER_RENDER **)v48;
    if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v9[2], (struct DXGDEVICE *)v9);
    if ( v69 == (DXGALLOCATIONREFERENCE *)v70 )
    {
      for ( i = 0; i < v71; ++i )
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)((char *)v69 + 8 * i));
    }
    else if ( v69 )
    {
      DXGALLOCATIONREFERENCE::`vector deleting destructor'(v69);
    }
    goto LABEL_18;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v56,
    v54);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v72, (__int64)v8, 0, v12, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v72, a3);
  if ( v13 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v72);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v56);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v48);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v69);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v37, (__int64)&EventProfilerExit);
    return (unsigned int)v13;
  }
  else
  {
    NumAllocations = v7->NumAllocations;
    v60 = NumAllocations;
    AllocationList = (unsigned int *)v7->AllocationList;
    v59 = AllocationList;
    v16 = &AllocationList[NumAllocations];
    v65 = v16;
    if ( v16 < AllocationList )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 845;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v72);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v56);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v48);
LABEL_75:
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v69);
      goto LABEL_18;
    }
    v42 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 209LL);
    v17 = 0LL;
    Srca = 0LL;
    while ( AllocationList != v16 )
    {
      v21 = 16LL;
      if ( (unsigned int)NumAllocations < 0x10 )
        v21 = (unsigned int)NumAllocations;
      v53 = v21;
      v62 = &AllocationList[v21];
      v22 = v55;
      *(_QWORD *)v50 = DXGPROCESS::GetCurrent();
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v66, *(struct _KTHREAD ***)v50);
      while ( AllocationList != v62 )
      {
        if ( v49 )
        {
          ULongFromUser = RtlReadULongFromUser(AllocationList);
          v46 = ULongFromUser;
          v61 = ULongFromUser;
        }
        else
        {
          ULongFromUser = *AllocationList;
          v46 = *AllocationList;
        }
        DXGPROCESS::GetAllocationUnsafe(*(__int64 *)v50, (DXGALLOCATIONREFERENCE *)&v47, ULongFromUser);
        v24 = v47;
        if ( !v47 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 903;
          goto LABEL_72;
        }
        v25 = *(DXGDEVICE **)(v47 + 8);
        if ( v25 != v8 )
        {
          WdLogSingleEntry2(3LL, v8, v25);
          WdLogGlobalForLineNumber = 910;
LABEL_72:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v47);
          DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v66);
          VIDSCH_EXPORT::VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v8 + 2) + 736LL), *((_QWORD *)v8 + 100), 0xBu);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v72);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v56);
          v35 = (ADAPTER_RENDER **)v48;
          if ( v48 && !_InterlockedDecrement64((volatile signed __int64 *)v48 + 8) )
            ADAPTER_RENDER::DestroyDeviceNoLocks(v35[2], (struct DXGDEVICE *)v35);
          goto LABEL_75;
        }
        if ( *(_QWORD *)v22 )
        {
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v22 + 88LL));
          v24 = v47;
        }
        *(_QWORD *)v22 = v24;
        v47 = 0LL;
        v22 = (struct DXGALLOCATIONREFERENCE *)((char *)v22 + 8);
        v59 = ++AllocationList;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v47);
      }
      v26 = (v22 - v55) >> 3;
      *(_QWORD *)v50 = v26;
      if ( v42 )
      {
        v38 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL);
        v39.0 = (struct D3DDDI_EVICT_FLAGS::$E7212E13AE7D8E335D08FC594CA6B628::$D06293F7ED6D7321B9AED12FAD2D769E)v7->Flags.Value;
        v40 = *((_DWORD *)v8 + 118);
        HostProcess = DXGPROCESS::GetHostProcess(v64);
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEvict(
          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v38 + 4712),
          HostProcess,
          v40,
          v39,
          v50[0],
          v55,
          &Srca);
        AllocationList = v59;
      }
      else if ( DXGDEVICE::UmdManagesResidency(v8) )
      {
        v29 = v27 & 1 | 2;
        if ( (v27 & 2) != 0 )
          v29 = v27 & 1;
        v30 = v28 + 8LL * (unsigned int)v26;
        if ( v28 != v30 )
        {
          v31 = v28;
          v32 = v29;
          do
          {
            v63 = *(_QWORD *)(*(_QWORD *)v31 + 24LL);
            if ( v63 )
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64, int, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 760LL) + 8LL)
                                                                                                  + 736LL))(
                *(_QWORD *)(*((_QWORD *)v8 + 2) + 768LL),
                *((_QWORD *)v8 + 99),
                &v63,
                1LL,
                v32,
                &Srca);
            v31 += 8LL;
          }
          while ( v31 != v30 );
          v7 = v58;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 8397;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Calling Evict on a device that was not created with the UMD residency flag. Device=0x%p",
          (__int64)v8,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v66);
      LODWORD(NumAllocations) = v60 - v53;
      v60 = (unsigned int)(v60 - v53);
      v17 = Srca;
      v16 = v65;
    }
    if ( v49 )
      RtlCopyToUser(&v52->NumBytesToTrim, &Srca, 8uLL);
    else
      v7->NumBytesToTrim = v17;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v72);
    if ( v57 )
    {
      v18 = v56 + 144;
      _InterlockedAdd((volatile signed __int32 *)(v56 + 160), 0xFFFFFFFF);
      ExReleasePushLockSharedEx(v18, 0LL);
    }
    else
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v56 + 136));
    }
    KeLeaveCriticalRegion();
    v19 = (ADAPTER_RENDER **)v48;
    if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v19[2], (struct DXGDEVICE *)v19);
    if ( v69 == (DXGALLOCATIONREFERENCE *)v70 )
    {
      for ( j = 0; j < v71; ++j )
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)((char *)v69 + 8 * j));
    }
    else if ( v69 )
    {
      DXGALLOCATIONREFERENCE::`vector deleting destructor'(v69);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
    return 0LL;
  }
}
