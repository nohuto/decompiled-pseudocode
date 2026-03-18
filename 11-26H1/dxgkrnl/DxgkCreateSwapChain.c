/*
 * XREFs of DxgkCreateSwapChain @ 0x140208650
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
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140053634 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x14008215C (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 *     McTemplateK0pqdqqpp_EtwWriteTransfer @ 0x1400822F4 (McTemplateK0pqdqqpp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x140205378 (--0DXGSWAPCHAIN@@QEAA@XZ.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x14020547C (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 *     ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1402068D8 (-InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x14030112C (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x140301718 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1403018A0 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z @ 0x1403FFB38 (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z.c)
 */

__int64 __fastcall DxgkCreateSwapChain(char *Src)
{
  DXGSWAPCHAIN *v2; // r14
  struct _KTHREAD **Current; // rbx
  __int64 v4; // rax
  const wchar_t *v5; // r9
  unsigned int v6; // eax
  __int64 v7; // rcx
  void *v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  void *v12; // rax
  __int64 v13; // rcx
  struct ADAPTER_RENDER **v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdx
  HANDLE v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  DXGSWAPCHAIN *v20; // rax
  bool v21; // r9
  int v22; // eax
  unsigned int i; // ebx
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // eax
  const wchar_t *v27; // r9
  NTSTATUS inserted; // eax
  NTSTATUS v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rcx
  PVOID *NewObject; // [rsp+20h] [rbp-238h]
  PHANDLE Handle; // [rsp+28h] [rbp-230h]
  int v34[2]; // [rsp+30h] [rbp-228h]
  __int64 v35; // [rsp+38h] [rbp-220h]
  char v36; // [rsp+50h] [rbp-208h]
  int v37; // [rsp+58h] [rbp-200h] BYREF
  __int64 v38; // [rsp+60h] [rbp-1F8h]
  char v39; // [rsp+68h] [rbp-1F0h]
  unsigned int v40; // [rsp+70h] [rbp-1E8h] BYREF
  struct DXGDEVICE *v41; // [rsp+78h] [rbp-1E0h] BYREF
  HANDLE Srca; // [rsp+80h] [rbp-1D8h] BYREF
  struct DXGDEVICE *v43[2]; // [rsp+88h] [rbp-1D0h] BYREF
  PVOID Object; // [rsp+98h] [rbp-1C0h] BYREF
  void *v45; // [rsp+A0h] [rbp-1B8h]
  _BYTE v46[64]; // [rsp+B0h] [rbp-1A8h] BYREF
  char *v47; // [rsp+F0h] [rbp-168h]
  _BYTE v48[160]; // [rsp+100h] [rbp-158h] BYREF
  _BYTE v49[128]; // [rsp+1A0h] [rbp-B8h] BYREF

  v47 = Src;
  v37 = -1;
  v38 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2108;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 2108);
  v2 = 0LL;
  v36 = 0;
  Object = 0LL;
  Srca = 0LL;
  memset(v46, 0, sizeof(v46));
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    v4 = 427LL;
    v5 = L"Invalid process context";
LABEL_16:
    WdLogGlobalForLineNumber = v4;
    goto LABEL_17;
  }
  RtlCopyFromUser(v46, Src, 0x40uLL);
  if ( (v46[32] & 2) != 0 )
  {
    v6 = *(_DWORD *)&v46[20];
    if ( *(_DWORD *)&v46[20] )
    {
      WdLogSingleEntry0(2LL);
      v4 = 450LL;
      v5 = L"In non-sequence mode create cannot have any surfaces, add surface should be used to add them";
      goto LABEL_16;
    }
    if ( !*(_DWORD *)v46 )
    {
      WdLogSingleEntry0(2LL);
      v4 = 457LL;
      v5 = L"In non-sequence mode create has to be the producer";
      goto LABEL_16;
    }
  }
  else
  {
    v6 = *(_DWORD *)&v46[20];
    if ( *(_DWORD *)&v46[20] > 0x32u )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 466;
      v4 = *(unsigned int *)&v46[20];
      v5 = L"Caller requested 0x%I64x buffers, this is over the maximum";
LABEL_17:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, v4, 0LL, 0LL, 0LL, 0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
      if ( v39 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
      }
      return -1073741811LL;
    }
    if ( !*(_DWORD *)&v46[20] )
    {
      WdLogSingleEntry0(2LL);
      v4 = 471LL;
      v5 = L"Cannot create swapchain with zero buffers";
      goto LABEL_16;
    }
  }
  v9 = 0LL;
  v45 = 0LL;
  if ( v6 )
  {
    v11 = v6;
    v10 = 8LL * v6;
    if ( !is_mul_ok(v11, 8uLL) )
      v10 = -1LL;
    v12 = (void *)operator new[](v10, 0x4B677844u, 256LL);
    v9 = v12;
    v45 = v12;
    if ( !v12 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 483;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory allocating memory for handles array",
        483LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
      if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
      return 3221225495LL;
    }
    RtlCopyFromUser(v12, *(void **)&v46[24], 8LL * *(unsigned int *)&v46[20]);
    *(_QWORD *)&v46[24] = v9;
  }
  v41 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40, *(unsigned int *)&v46[4], Current, &v41);
  v14 = (struct ADAPTER_RENDER **)v41;
  if ( !v41 )
  {
    LODWORD(v15) = -1073741811;
    WdLogSingleEntry2(2LL, *(unsigned int *)&v46[4], -1073741811LL);
    WdLogGlobalForLineNumber = 505;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      *(unsigned int *)&v46[4],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_32:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v40);
    goto LABEL_58;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43, v41);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)v14, 2, v19, 0);
  LODWORD(v15) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v48, 0LL);
  if ( (int)v15 < 0 )
  {
LABEL_34:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43);
    goto LABEL_32;
  }
  v20 = (DXGSWAPCHAIN *)operator new(0xF0uLL, 0x4B677844u, 256LL);
  if ( v20 )
    v2 = DXGSWAPCHAIN::DXGSWAPCHAIN(v20);
  else
    v2 = 0LL;
  v41 = v2;
  if ( !v2 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 522;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating DXGSWAPCHAIN class",
      522LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v15) = -1073741801;
    goto LABEL_34;
  }
  LODWORD(v15) = DXGSWAPCHAIN::InitializeSwapchainGlobalState(v2, v14[2], (struct _D3DKMT_CREATESWAPCHAIN *)v46);
  if ( (int)v15 < 0 )
    goto LABEL_34;
  LODWORD(v15) = DXGSWAPCHAIN::OpenSwapchainLocal(
                   v2,
                   *(unsigned int *)&v46[4],
                   (struct DXGDEVICE *)v14,
                   *(void **)&v46[40],
                   v46[32] & 1,
                   *(int *)v46,
                   *(int *)&v46[56]);
  if ( (int)v15 < 0 )
    goto LABEL_34;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v40);
  v43[0] = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v49, v2, *(_DWORD *)v46 != 0, 1);
  if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
    v21 = *((_DWORD *)v2 + 59) != 0;
  else
    v21 = 0;
  v22 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v49, v43, 1, v21);
  v15 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 572;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire swapchain and device lock (0x%I64x)",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_47:
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v49);
    goto LABEL_58;
  }
  for ( i = 0; i < *(_DWORD *)&v46[20]; ++i )
  {
    LODWORD(v15) = DXGSWAPCHAIN::AddSurface(
                     (const void **)v2,
                     (unsigned __int64)v43[0],
                     *(int *)v46,
                     *(void **)(*(_QWORD *)&v46[24] + 8LL * i),
                     &v40);
    if ( (int)v15 < 0 )
      goto LABEL_47;
  }
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v49);
  LOBYTE(v24) = 1;
  LOBYTE(v25) = 1;
  v26 = ObCreateObject(v25, g_pDxgkSharedSwapChainObjectType, *(_QWORD *)&v46[8], v24, 0LL, 8, 248, 0, &Object);
  v15 = v26;
  if ( v26 >= 0 )
  {
    *(_QWORD *)Object = v2;
    v36 = 1;
    inserted = ObInsertObject(Object, 0LL, *(ACCESS_MASK *)&v46[16], 0, 0LL, &Srca);
    v15 = inserted;
    if ( inserted >= 0 )
    {
      RtlCopyToUser(Src + 48, &Srca, 8uLL);
      goto LABEL_58;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 620;
    v27 = L"Failed to create Nt handle for swapchain (0x%I64x)";
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 601;
    v27 = L"Failed to create Nt swapchain object (0x%I64x)";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v27, v15, 0LL, 0LL, 0LL, 0LL);
LABEL_58:
  if ( (int)v15 < 0 )
  {
    v17 = Srca;
    if ( Srca )
    {
      v29 = ObCloseHandle(Srca, 1);
      if ( v29 < 0 )
      {
        v30 = v29;
        WdLogSingleEntry2(1LL, Srca, v29);
        WdLogGlobalForLineNumber = 645;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Failed to close swap chain handle 0x%I64x: Status = 0x%I64x",
          (__int64)Srca,
          v30,
          0LL,
          0LL,
          0LL);
      }
    }
    if ( v2 && !v36 )
    {
      DXGSWAPCHAIN::`scalar deleting destructor'(v2);
      v2 = 0LL;
    }
  }
  if ( v9 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
  {
    LODWORD(v35) = *(_DWORD *)&v46[20];
    v34[0] = *(_DWORD *)&v46[4];
    LODWORD(Handle) = *(_DWORD *)v46;
    LODWORD(NewObject) = v15;
    McTemplateK0pqdqqpp_EtwWriteTransfer(
      (__int64)v17,
      v16,
      v18,
      v2,
      NewObject,
      Handle,
      *(_QWORD *)v34,
      v35,
      *(_QWORD *)&v46[40],
      Srca);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit);
  return (unsigned int)v15;
}
