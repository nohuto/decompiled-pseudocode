/*
 * XREFs of ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@E@Z @ 0x140213EB4
 * Callers:
 *     DxgkDdiDestroyVirtualGpu @ 0x140216D74 (DxgkDdiDestroyVirtualGpu.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF00 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1400379A4 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1400837F4 (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140083820 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     DpiGetGpuVirtualizationLock @ 0x1400856B0 (DpiGetGpuVirtualizationLock.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403F36A0 (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 *     ?GetVirtualGpuByIndex@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@I@Z @ 0x1403F36C0 (-GetVirtualGpuByIndex@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@I@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::DestroyVirtualGpu(__int64 a1, unsigned int a2, unsigned int *a3, char a4)
{
  struct DXGPROCESS *Current; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rsi
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // r15
  struct DXGDEVICE *v12; // rdx
  __int64 v13; // r9
  int v14; // eax
  int v15; // ebx
  struct _EX_PUSH_LOCK *GpuVirtualizationLock; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _EX_PUSH_LOCK *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 VirtualGpuManager; // rax
  __int64 v25; // rbx
  __int64 VirtualGpuByIndex; // rdx
  _BYTE v27[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v28[24]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v30[24]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v31[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v32[32]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v33[160]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v34[144]; // [rsp+180h] [rbp+80h] BYREF

  if ( a4 )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( !Current || (*((_DWORD *)Current + 102) & 0xC0) == 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2122;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Only VVMS or VMWP process can destroy vGPU",
        2122LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  Global = DXGGLOBAL::GetGlobal();
  v10 = *(_QWORD *)(a1 + 16);
  if ( a2 )
    goto LABEL_18;
  RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(*((DXGPROCESS **)Global + 173), *(_DWORD *)(v10 + 240));
  v12 = (struct DXGDEVICE *)*((_QWORD *)RenderAdapterInfo + 9);
  if ( !v12 )
    goto LABEL_18;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v27,
    v12);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v31,
    (struct DXGADAPTER *)v10,
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, *((_QWORD *)RenderAdapterInfo + 9), 2, v13, 0);
  v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v33, 0LL);
  v15 = v14;
  if ( v14 >= 0 )
  {
    GpuVirtualizationLock = (struct _EX_PUSH_LOCK *)DpiGetGpuVirtualizationLock(*(_QWORD *)(v10 + 216));
    DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE((DXGAUTOEXPUSHLOCKEXCLUSIVE *)v28, GpuVirtualizationLock);
    v17 = *(_QWORD *)(a1 + 1864);
    if ( !v17 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2159;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Destroying invalid virtual GPU",
        2159LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_16:
      DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v28);
      v15 = -1073741811;
      goto LABEL_17;
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v30, (struct _KTHREAD **)(v17 + 40));
    v18 = *(_QWORD *)(a1 + 1864);
    v19 = *a3;
    if ( (unsigned int)v19 >= *(_DWORD *)(v18 + 12)
      || !*(_QWORD *)(*(_QWORD *)(v18 + 24) + 8 * v19)
      || (_mm_lfence(), (v20 = *(_QWORD *)(*(_QWORD *)(v18 + 24) + 8 * v19)) == 0) )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2166;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
      goto LABEL_16;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 144LL))(v20);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
    DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v28);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v27);
LABEL_18:
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, (struct DXGADAPTER *const)v10, 0LL);
    v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34, 0LL);
    if ( v15 >= 0 )
    {
      v21 = (struct _EX_PUSH_LOCK *)DpiGetGpuVirtualizationLock(*(_QWORD *)(v10 + 216));
      DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE((DXGAUTOEXPUSHLOCKEXCLUSIVE *)v29, v21);
      VirtualGpuManager = ADAPTER_RENDER::GetVirtualGpuManager(a1, a2, v22, v23);
      v25 = VirtualGpuManager;
      if ( VirtualGpuManager )
      {
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v32,
          (struct _KTHREAD **)(VirtualGpuManager + 40));
        VirtualGpuByIndex = ADAPTER_RENDER::GetVirtualGpuByIndex(a1, a2, *a3);
        if ( VirtualGpuByIndex )
        {
          v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 24LL))(v25, VirtualGpuByIndex);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
          DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v29);
          goto LABEL_26;
        }
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 2198;
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 2190;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Destroying invalid virtual GPU",
          2190LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v29);
      v15 = -1073741811;
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2178;
    }
LABEL_26:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
    return (unsigned int)v15;
  }
  WdLogSingleEntry2(3LL, *((_QWORD *)RenderAdapterInfo + 9), v14);
  WdLogGlobalForLineNumber = 2148;
LABEL_17:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v27);
  return (unsigned int)v15;
}
