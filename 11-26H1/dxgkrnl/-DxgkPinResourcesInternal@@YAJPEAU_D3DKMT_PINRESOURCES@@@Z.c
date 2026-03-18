/*
 * XREFs of ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x140387D98
 * Callers:
 *     NtDxgkPinResources @ 0x140387D10 (NtDxgkPinResources.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1400102C4 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14001628C (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14004B1AC (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkpIsDrtEnabled @ 0x14019364C (DxgkpIsDrtEnabled.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z @ 0x1401C34A4 (-PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1403887AC (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 *     ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x140388BD0 (--1-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAAPEAVDXGRESOURCEREFERENCE@@I@Z @ 0x140388C40 (-AllocateElements@-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAAPEAVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140388D10 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DxgkPinResourcesInternal(struct _D3DKMT_PINRESOURCES *Src)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v4; // r15
  bool v5; // r14
  struct DXGPAGINGQUEUE *v6; // rsi
  struct DXGPAGINGQUEUE *v7; // r12
  const struct DXGRESOURCEREFERENCE *v8; // r13
  unsigned int v9; // r15d
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // r15d
  unsigned int v13; // esi
  ADAPTER_RENDER **v14; // rcx
  __int64 v15; // rcx
  DXGRESOURCEREFERENCE *ResourceSafe; // rax
  __int64 v18; // r8
  unsigned int i; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // [rsp+50h] [rbp-178h] BYREF
  __int64 v24; // [rsp+58h] [rbp-170h]
  char v25; // [rsp+60h] [rbp-168h]
  struct DXGDEVICE *v26; // [rsp+68h] [rbp-160h] BYREF
  struct DXGPAGINGQUEUE *v27; // [rsp+70h] [rbp-158h] BYREF
  __int64 v28; // [rsp+78h] [rbp-150h] BYREF
  unsigned int v29[4]; // [rsp+80h] [rbp-148h] BYREF
  unsigned int v30[4]; // [rsp+90h] [rbp-138h]
  unsigned int ULongFromUser; // [rsp+A0h] [rbp-128h]
  struct _D3DKMT_PINRESOURCES *v32; // [rsp+A8h] [rbp-120h]
  struct _EX_RUNDOWN_REF *v33[2]; // [rsp+B0h] [rbp-118h] BYREF
  struct DXGPROCESS *v34; // [rsp+C0h] [rbp-108h]
  struct DXGRESOURCEREFERENCE *v35[5]; // [rsp+C8h] [rbp-100h] BYREF
  int v36; // [rsp+F0h] [rbp-D8h]
  _BYTE v37[160]; // [rsp+100h] [rbp-C8h] BYREF

  v32 = Src;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2079;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2079);
  Current = DXGPROCESS::GetCurrent(v2);
  v4 = (struct _KTHREAD **)Current;
  v34 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6473;
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
    goto LABEL_63;
  }
  v5 = (*((_DWORD *)Current + 102) & 4) == 0;
  *(_OWORD *)v29 = 0LL;
  *(_OWORD *)v30 = 0LL;
  RtlCopyFromUser(v29, Src, 0x20uLL);
  v27 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v26, v29[0], v4, &v27);
  v6 = v27;
  if ( !v27 )
  {
    WdLogSingleEntry2(2LL, v29[0], -1073741811LL);
    WdLogGlobalForLineNumber = 6506;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v29[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_62;
  }
  if ( (v30[0] & 1) != 0 )
  {
    if ( !v30[1] )
      goto LABEL_9;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 6518;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Pinning DirectFlip resources may not specify a paging queue",
      6518LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_62:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v26);
LABEL_63:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 444LL) & 0x200) == 0 && !DxgkpIsDrtEnabled() )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 6529;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Pinning non-DirectFlip resources can only be done on xbox",
      6529LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_62;
  }
LABEL_9:
  if ( !*(_QWORD *)&v29[2] || !v29[1] )
  {
    WdLogSingleEntry2(3LL, v29[0], -1073741811LL);
    WdLogGlobalForLineNumber = 6539;
    goto LABEL_62;
  }
  v7 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( v30[1] )
  {
    DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v28, v30[1], v4, &v27, 1);
    v7 = v27;
    if ( v27 )
    {
      if ( *((struct DXGPAGINGQUEUE **)v27 + 2) == v6 )
        goto LABEL_12;
      WdLogSingleEntry2(2LL, v29[0], v30[1]);
      WdLogGlobalForLineNumber = 6562;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Paging queue must belong to the supplied device. hDevice=0x%.8x, hPagingQueue=0x%.8x",
        v29[0],
        v30[1],
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6556;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hPagingQueue (0x%.8x) specified",
        v30[1],
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_45:
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v28);
    goto LABEL_62;
  }
LABEL_12:
  v35[0] = 0LL;
  v36 = 0;
  PagedPoolArray<DXGRESOURCEREFERENCE,4>::AllocateElements(v35, v29[1]);
  v8 = v35[0];
  if ( !v35[0] )
  {
    v13 = -1073741801;
    WdLogSingleEntry2(6LL, v29[1], -1073741801LL);
    WdLogGlobalForLineNumber = 6576;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate temporary buffer for %d handle, returning 0x%I64x",
      v29[1],
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(v35);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v28);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v26);
LABEL_22:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
    }
    return v13;
  }
  v9 = 0;
LABEL_14:
  if ( v9 < v29[1] )
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)(*(_QWORD *)&v29[2] + 4LL * v9));
    v27 = (const struct DXGRESOURCEREFERENCE *)((char *)v8 + 8 * v9);
    ResourceSafe = DXGPROCESS::GetResourceSafe((__int64)v34, (DXGRESOURCEREFERENCE *)v33, ULongFromUser);
    DXGRESOURCEREFERENCE::MoveAssign(v27, ResourceSafe);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(v33);
    v18 = *(_QWORD *)v27;
    if ( *(_QWORD *)v27 && (*(_DWORD *)(v18 + 4) & 1) != 0 && *(_QWORD *)(v18 + 56) )
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL) + 16LL) == *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= v9 )
          {
            ++v9;
            goto LABEL_14;
          }
          if ( *((_QWORD *)v8 + i) == v18 )
            break;
        }
        WdLogSingleEntry2(3LL, ULongFromUser, -1073741811LL);
        WdLogGlobalForLineNumber = 6622;
      }
      else
      {
        WdLogSingleEntry3(2LL, v6, v18, -1073741811LL);
        WdLogGlobalForLineNumber = 6612;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
          (__int64)v6,
          *(_QWORD *)v27,
          -1073741811LL,
          0LL,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry2(3LL, ULongFromUser, -1073741811LL);
      WdLogGlobalForLineNumber = 6604;
    }
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(v35);
    goto LABEL_45;
  }
  if ( (*((_BYTE *)v6 + 1917) & 1) != 0 )
  {
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(v35);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v28);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
    return 0LL;
  }
  else
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33, v6);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, (__int64)v6, 2, v10, 0);
    v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v37, 0LL);
    v12 = v11;
    if ( v11 >= 0 )
    {
      if ( (v30[0] & 1) != 0 )
      {
        v13 = DXGDEVICE::PinDirectFlipResources(v6, v29[1], v8, v5);
      }
      else
      {
        v27 = 0LL;
        v13 = DXGDEVICE::PinResources(v6, v29[1], v8, v7, (unsigned __int64 *)&v27);
        if ( v13 == 259 )
          RtlWriteULong64ToUser((_QWORD *)v32 + 3, (__int64)v27);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33);
      PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(v35);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v28);
      v14 = (ADAPTER_RENDER **)v26;
      if ( v26 && _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v14[2], (struct DXGDEVICE *)v14);
      goto LABEL_22;
    }
    WdLogSingleEntry2(3LL, v6, v11);
    WdLogGlobalForLineNumber = 6644;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33);
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(v35);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v28);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
    return v12;
  }
}
