/*
 * XREFs of ?PrepareLiveMigration@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKARG_GPUP_PREPARE_LIVE_MIGRATION@@PEAU_GPUP_MIGRATION_BUFFER@@PEAI@Z @ 0x140215348
 * Callers:
 *     DxgkDdiPrepareLiveMigration @ 0x1402176AC (DxgkDdiPrepareLiveMigration.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1400837F4 (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140083820 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     DpiGetGpuVirtualizationLock @ 0x1400856B0 (DpiGetGpuVirtualizationLock.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x140193C68 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1403AF638 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403F36A0 (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::PrepareLiveMigration(
        __int64 a1,
        int a2,
        struct _LUID *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r14
  __int64 v10; // rbx
  int v12; // eax
  __int64 v13; // rsi
  struct _EX_PUSH_LOCK *GpuVirtualizationLock; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 VirtualGpuManager; // rax
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  unsigned int v19; // ebx
  unsigned __int64 v20; // rdx
  __int64 HighPart; // [rsp+20h] [rbp-108h]
  __int64 v22; // [rsp+20h] [rbp-108h]
  __int64 LowPart; // [rsp+28h] [rbp-100h]
  __int64 v24; // [rsp+28h] [rbp-100h]
  __int64 v25; // [rsp+38h] [rbp-F0h]
  struct DXGPROCESS *v26; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v27[24]; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v28[32]; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE v29[64]; // [rsp+90h] [rbp-98h] BYREF

  v7 = *(_QWORD *)(a1 + 16);
  if ( a2 )
  {
    v10 = a2;
    WdLogSingleEntry4(2LL, a3->HighPart, a3->LowPart, a2, v7);
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    WdLogGlobalForLineNumber = 2394;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PrepareLiveMigration called for non GPUP vGPU. Luid: %d %d vGPU Type: %d Adapter: %d",
      HighPart,
      LowPart,
      v10,
      v7,
      0LL);
    return 3221225485LL;
  }
  if ( DXGPROCESS::GetCurrent() )
    goto LABEL_9;
  if ( a4[1] != 1 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2419;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PrepareLiveMigration called on source side without an existing DXGPROCESS, returning STATUS_INVALID_PARAMETER",
      2419LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v12 = DXGPROCESS::CreateDxgProcess(&v26, 0LL, 0LL, 1u, 0LL);
  v13 = v12;
  if ( v12 >= 0 )
  {
LABEL_9:
    COREACCESS::COREACCESS((COREACCESS *)v29, *(struct DXGADAPTER *const *)(a1 + 16));
    COREACCESS::AcquireShared((COREACCESS *)v29, 0LL);
    GpuVirtualizationLock = (struct _EX_PUSH_LOCK *)DpiGetGpuVirtualizationLock(*(_QWORD *)(v7 + 216));
    DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE((DXGAUTOEXPUSHLOCKEXCLUSIVE *)v28, GpuVirtualizationLock);
    VirtualGpuManager = ADAPTER_RENDER::GetVirtualGpuManager(a1, 0LL, v15, v16);
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
      (DXGAUTOPUSHLOCKSHARED *)v27,
      (struct _KTHREAD **)(VirtualGpuManager + 40));
    VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(a1, 0, a3);
    if ( VirtualGpuByLuid )
    {
      *a4 = *((_DWORD *)VirtualGpuByLuid + 6);
      v19 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, _DWORD *, __int64, __int64))(*(_QWORD *)VirtualGpuByLuid
                                                                                             + 184LL))(
              VirtualGpuByLuid,
              a4,
              a5,
              a6);
    }
    else
    {
      WdLogSingleEntry4(2LL, a3->HighPart, a3->LowPart, 0LL, *(_QWORD *)(a1 + 16));
      v25 = *(_QWORD *)(a1 + 16);
      v24 = a3->LowPart;
      v22 = a3->HighPart;
      WdLogGlobalForLineNumber = 2440;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid virtual GPU LUID: %d %d vGPU Type: %d Adapter: %d",
        v22,
        v24,
        0LL,
        v25,
        0LL);
      v19 = -1073741811;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
    DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v28);
    COREACCESS::~COREACCESS((COREACCESS *)v29, v20);
    return v19;
  }
  else
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 2413;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to create DXGPROCESS for VMWP process: 0x%I64x",
      v13,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v13;
  }
}
