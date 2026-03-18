/*
 * XREFs of DxgkOpenSwapChain @ 0x140405E20
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     McTemplateK0pqdqpp_EtwWriteTransfer @ 0x140082234 (McTemplateK0pqdqpp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x140206AF4 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z @ 0x1403FFB38 (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z.c)
 */

__int64 __fastcall DxgkOpenSwapChain(char *a1)
{
  DXGSWAPCHAIN *v2; // rsi
  __int64 v3; // rcx
  struct _KTHREAD **Current; // rdi
  void *v5; // r14
  void *v6; // r13
  __int64 v7; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // r9
  __int64 v14; // r8
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  ADAPTER_RENDER **v18; // rcx
  __int64 v19; // rcx
  PVOID *Object; // [rsp+20h] [rbp-1B8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-1B0h]
  int v22[2]; // [rsp+30h] [rbp-1A8h]
  int v23; // [rsp+50h] [rbp-188h] BYREF
  __int64 v24; // [rsp+58h] [rbp-180h]
  char v25; // [rsp+60h] [rbp-178h]
  struct DXGDEVICE *v26; // [rsp+68h] [rbp-170h] BYREF
  struct DXGDEVICE *v27; // [rsp+70h] [rbp-168h] BYREF
  BOOL v28; // [rsp+78h] [rbp-160h] BYREF
  _BYTE Handle[80]; // [rsp+80h] [rbp-158h] BYREF
  PVOID v30; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v31; // [rsp+D8h] [rbp-100h]
  DXGSWAPCHAIN *v32; // [rsp+E0h] [rbp-F8h]
  _BYTE v33[16]; // [rsp+E8h] [rbp-F0h] BYREF
  PVOID v34; // [rsp+F8h] [rbp-E0h]
  char *v35; // [rsp+100h] [rbp-D8h]
  _BYTE v36[160]; // [rsp+110h] [rbp-C8h] BYREF

  v35 = a1;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2109;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2109);
  v2 = 0LL;
  memset(Handle, 0, sizeof(Handle));
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v3);
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 687;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 687LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
    }
    return -1073741811LL;
  }
  RtlCopyFromUser(Handle, a1, 0x50uLL);
  v5 = 0LL;
  v31 = 0LL;
  v6 = *(void **)&Handle[56];
  if ( (*(_DWORD *)&Handle[48] == 0) != (*(_QWORD *)&Handle[56] == 0LL) )
  {
    WdLogSingleEntry2(2LL, *(unsigned int *)&Handle[48], *(_QWORD *)&Handle[56]);
    WdLogGlobalForLineNumber = 709;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Either both surface count (0x%I64x) and handle table (0x%I64x) are both valid or both invalid",
      *(unsigned int *)&Handle[48],
      *(__int64 *)&Handle[56],
      0LL,
      0LL,
      0LL);
    goto LABEL_9;
  }
  if ( *(_DWORD *)&Handle[48] )
  {
    v9 = 8LL * *(unsigned int *)&Handle[48];
    if ( !is_mul_ok(*(unsigned int *)&Handle[48], 8uLL) )
      v9 = -1LL;
    v10 = operator new[](v9, 0x4B677844u, 256LL);
    v5 = (void *)v10;
    v31 = v10;
    if ( !v10 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 717;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory allocating memory for handles table",
        717LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
      if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
      return 3221225495LL;
    }
    *(_QWORD *)&Handle[56] = v10;
  }
  v26 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v27, *(unsigned int *)&Handle[20], Current, &v26);
  if ( v26 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33, v26);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, (__int64)v26, 2, v13, 0);
    v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36, 0LL);
    if ( v12 < 0 )
    {
LABEL_50:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33);
      goto LABEL_51;
    }
    if ( !*(_QWORD *)Handle )
    {
      if ( *(_QWORD *)&Handle[8] )
      {
        LOBYTE(v14) = 1;
        v12 = ObOpenObjectByName(
                *(_QWORD *)&Handle[8],
                g_pDxgkSharedSwapChainObjectType,
                v14,
                0LL,
                *(_DWORD *)&Handle[28],
                0LL,
                Handle);
        if ( v12 < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 756;
          goto LABEL_50;
        }
      }
    }
    v30 = 0LL;
    v15 = ObReferenceObjectByHandle(*(HANDLE *)Handle, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v30, 0LL);
    v12 = v15;
    if ( v15 < 0 )
    {
      WdLogSingleEntry2(3LL, *(_QWORD *)Handle, v15);
      WdLogGlobalForLineNumber = 770;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33);
      v18 = (ADAPTER_RENDER **)v27;
      if ( v27 )
      {
        v16 = -1LL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(v18[2], (struct DXGDEVICE *)v18);
      }
      goto LABEL_52;
    }
    v34 = v30;
    v2 = *(DXGSWAPCHAIN **)v30;
    v32 = v2;
    if ( *((_DWORD *)v2 + 58) )
    {
      if ( *(_DWORD *)&Handle[48] || *(_QWORD *)&Handle[56] )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 780;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DxgkOpenSwapChain for non-sequential swapchain should not pass any handles",
          780LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_41:
        v12 = -1073741811;
      }
    }
    else
    {
      if ( !*(_QWORD *)&Handle[56] )
      {
        *(_DWORD *)&Handle[48] = *((_DWORD *)v2 + 15);
        v12 = -1073741789;
LABEL_45:
        v28 = *((_DWORD *)v2 + 58) != 0;
        ObfDereferenceObject(v34);
        if ( (int)(v12 + 0x80000000) < 0 || v12 == -1073741789 )
        {
          RtlCopyToUser(a1, Handle, 8uLL);
          RtlCopyToUser(a1 + 48, &Handle[48], 4uLL);
          RtlCopyToUser(a1 + 64, &v28, 4uLL);
          if ( v6 )
          {
            if ( *(_DWORD *)&Handle[48] )
              RtlCopyToUser(v6, v5, 8LL * *(unsigned int *)&Handle[48]);
          }
        }
        goto LABEL_50;
      }
      if ( *(_DWORD *)&Handle[48] != *((_DWORD *)v2 + 15) )
      {
        WdLogSingleEntry2(2LL, *(unsigned int *)&Handle[48], *((unsigned int *)v2 + 15));
        WdLogGlobalForLineNumber = 794;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Incorrect surface count (%I64d) supplied to DxgkOpenSwapChain (should be %I64d)",
          *(unsigned int *)&Handle[48],
          *((unsigned int *)v2 + 15),
          0LL,
          0LL,
          0LL);
        goto LABEL_41;
      }
    }
    if ( v12 >= 0 )
    {
      v12 = DXGSWAPCHAIN::OpenSwapchainLocal(
              v2,
              *(int *)&Handle[20],
              v26,
              *(__int64 *)&Handle[40],
              *(int *)&Handle[24],
              *(int *)&Handle[16],
              *(int *)&Handle[76]);
      if ( v12 >= 0 )
      {
        *((_DWORD *)v2 + 18) = *(_DWORD *)&Handle[32];
        v12 = DXGSWAPCHAIN::OpenSurfaceResourcesLocalForSequentialOpener(v2, (struct _D3DKMT_OPENSWAPCHAIN *)Handle);
      }
    }
    goto LABEL_45;
  }
  v12 = -1073741811;
  WdLogSingleEntry2(2LL, *(unsigned int *)&Handle[20], -1073741811LL);
  WdLogGlobalForLineNumber = 729;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
    *(unsigned int *)&Handle[20],
    -1073741811LL,
    0LL,
    0LL,
    0LL);
LABEL_51:
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v27);
LABEL_52:
  if ( v5 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
  {
    v22[0] = *(_DWORD *)&Handle[20];
    LODWORD(HandleInformation) = *(_DWORD *)&Handle[16];
    LODWORD(Object) = v12;
    McTemplateK0pqdqpp_EtwWriteTransfer(
      (__int64)v18,
      v16,
      v17,
      v2,
      Object,
      HandleInformation,
      *(_QWORD *)v22,
      *(_QWORD *)&Handle[40],
      *(_QWORD *)Handle);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
  return (unsigned int)v12;
}
