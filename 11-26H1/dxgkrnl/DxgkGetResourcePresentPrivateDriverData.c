/*
 * XREFs of DxgkGetResourcePresentPrivateDriverData @ 0x1403EFF10
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x14001D25C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14004B1AC (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedBuffer@@PEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z @ 0x140054870 (-GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedB.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkGetResourcePresentPrivateDriverData(_DWORD *Src)
{
  char *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v5; // r14
  DXGRESOURCEREFERENCE *ResourceSafe; // rax
  struct _EX_RUNDOWN_REF *v7; // r13
  __int64 v8; // r9
  int v9; // eax
  unsigned int PresentPrivateDriverDataFromResource; // r14d
  KSPIN_LOCK *v11; // rcx
  UINT PrivateDriverDataSize; // edx
  ADAPTER_RENDER **v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // rbx
  int v17; // [rsp+50h] [rbp-118h] BYREF
  __int64 v18; // [rsp+58h] [rbp-110h]
  char v19; // [rsp+60h] [rbp-108h]
  struct DXGDEVICE *v20; // [rsp+68h] [rbp-100h] BYREF
  struct _EX_RUNDOWN_REF *v21; // [rsp+70h] [rbp-F8h] BYREF
  _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA v22; // [rsp+78h] [rbp-F0h] BYREF
  struct DXGDEVICE *v23; // [rsp+88h] [rbp-E0h] BYREF
  unsigned int v24; // [rsp+90h] [rbp-D8h]
  PVOID Entry; // [rsp+98h] [rbp-D0h] BYREF
  _DWORD *v26; // [rsp+A0h] [rbp-C8h]
  _BYTE v27[160]; // [rsp+B0h] [rbp-B8h] BYREF

  v26 = Src;
  v1 = 0LL;
  Entry = 0LL;
  v22 = 0LL;
  RtlCopyFromUser(&v22, Src, 0x10uLL);
  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2123;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2123);
  Current = DXGPROCESS::GetCurrent(v3);
  v5 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    PresentPrivateDriverDataFromResource = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 14047;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid DXG proces, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_22;
  }
  ResourceSafe = DXGPROCESS::GetResourceSafe((__int64)Current, (DXGRESOURCEREFERENCE *)&v20, v22.hResource);
  v21 = *(struct _EX_RUNDOWN_REF **)ResourceSafe;
  v7 = v21;
  *(_QWORD *)ResourceSafe = 0LL;
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v20);
  if ( v7 )
  {
    v24 = *(_DWORD *)(v7[1].Count + 468);
    v23 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v20, v24, v5, &v23);
    if ( !v23 )
    {
      v16 = v24;
      PresentPrivateDriverDataFromResource = -1073741811;
      WdLogSingleEntry2(2LL, v24, -1073741811LL);
      WdLogGlobalForLineNumber = 14074;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
        v16,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
LABEL_18:
      v13 = (ADAPTER_RENDER **)v20;
      if ( v20 && _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v13[2], (struct DXGDEVICE *)v13);
      goto LABEL_21;
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v27, (__int64)v23, 0, v8, 0);
    v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v27, 0LL);
    PresentPrivateDriverDataFromResource = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry2(4LL, v9, v23);
      WdLogGlobalForLineNumber = 14082;
    }
    else
    {
      if ( (HIDWORD(v7->Ptr) & 1) != 0 )
      {
        v11 = *(KSPIN_LOCK **)(v7[7].Count + 176);
        if ( v11 )
        {
          PresentPrivateDriverDataFromResource = GetPresentPrivateDriverDataFromResource(
                                                   v11,
                                                   (KSPIN_LOCK *)&Entry,
                                                   &v22);
          v1 = (char *)Entry;
          PrivateDriverDataSize = v22.PrivateDriverDataSize;
        }
        else
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 14097;
          PrivateDriverDataSize = 0;
          v22.PrivateDriverDataSize = 0;
        }
        RtlWriteULongToUser(v26 + 1, PrivateDriverDataSize);
        if ( v22.PrivateDriverDataSize && v1 )
          RtlCopyToUser(v22.pPrivateDriverData, v1 + 16, v22.PrivateDriverDataSize);
        if ( v1 )
          CRefCountedBuffer::RefCountedBufferRelease(v1);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v27);
        goto LABEL_18;
      }
      PresentPrivateDriverDataFromResource = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 14089;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Shared resource is expected, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v27);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v20);
  }
  else
  {
    PresentPrivateDriverDataFromResource = -1073741811;
    WdLogSingleEntry2(2LL, v22.hResource, -1073741811LL);
    WdLogGlobalForLineNumber = 14062;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid resource hande (0x%I64x) specified, returning 0x%I64x",
      v22.hResource,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_21:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v21);
LABEL_22:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
  return PresentPrivateDriverDataFromResource;
}
