/*
 * XREFs of ?Initialize@DXGDOORBELL@@IEAAJU_D3DDDI_CREATEHWQUEUEFORUSERMODESUBMISSION_FLAGS@@@Z @ 0x1401E2B68
 * Callers:
 *     ?CreateDoorbell@DXGHWQUEUE@@QEAAJU_D3DDDI_CREATEHWQUEUEFORUSERMODESUBMISSION_FLAGS@@@Z @ 0x1401E1370 (-CreateDoorbell@DXGHWQUEUE@@QEAAJU_D3DDDI_CREATEHWQUEUEFORUSERMODESUBMISSION_FLAGS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003DA90 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?VidMmMapCpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@Z @ 0x140055F84 (-VidMmMapCpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@.c)
 *     ?VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N11_K1PEAVVIDMM_DEVICE@@@Z @ 0x140056160 (-VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N11_K1PEA.c)
 *     ?VidMmOpenFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_DEVICE@@_N@Z @ 0x14007C788 (-VidMmOpenFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_DEVIC.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGDOORBELL::Initialize(_QWORD *a1, char a2)
{
  struct VIDMM_MONITORED_FENCE_STORAGE *v2; // rbp
  VIDMM_EXPORT *v5; // r14
  int FenceStorageSlot; // eax
  __int64 v7; // rsi
  const wchar_t *v8; // r9
  __int64 v10; // rax
  int v11; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v13; // eax
  HANDLE v14; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v15; // rax
  int v16; // eax
  HANDLE v17; // rax
  int v18; // eax
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+20h] [rbp-58h]
  bool v22; // [rsp+28h] [rbp-50h]

  v2 = (struct VIDMM_MONITORED_FENCE_STORAGE *)(a1 + 9);
  *((_DWORD *)a1 + 31) |= 0x11u;
  v5 = (VIDMM_EXPORT *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 34);
  FenceStorageSlot = VIDMM_EXPORT::VidMmAllocateFenceStorageSlot(
                       v5,
                       v2,
                       0LL,
                       0LL,
                       0,
                       v22,
                       2uLL,
                       0,
                       *(struct VIDMM_DEVICE **)(*(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 16LL) + 792LL));
  v7 = FenceStorageSlot;
  if ( FenceStorageSlot < 0 )
  {
    WdLogSingleEntry2(2LL, *a1, FenceStorageSlot);
    v8 = L"DXGHWQUEUE 0x%I64x: Failed to allocate DoorbellStatus page, returning 0x%I64x";
    WdLogGlobalForLineNumber = 3731;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, *a1, v7, 0LL, 0LL, 0LL);
    return (unsigned int)v7;
  }
  a1[17] = a1[10];
  LODWORD(v7) = VIDMM_EXPORT::VidMmOpenFenceStorageSlot(
                  v5,
                  v2,
                  *(struct VIDMM_DEVICE **)(*(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 16LL) + 792LL));
  if ( (int)v7 < 0 )
  {
    WdLogSingleEntry1(2LL);
    v19 = *a1;
    WdLogGlobalForLineNumber = 3742;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGHWQUEUE 0x%I64x: Failed to open status fence storage",
      v19,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v7;
  }
  v10 = *a1;
  *((_BYTE *)a1 + 170) = 1;
  v11 = VIDMM_EXPORT::VidMmMapCpuVA(
          v5,
          *(struct VIDMM_DEVICE **)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL) + 792LL),
          v2,
          (void **)a1 + 18,
          2u);
  v7 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry2(2LL, *a1, v11);
    v8 = L"DXGHWQUEUE 0x%I64x: Failed to map DoorbellStatusCPUVA, returning 0x%I64x";
    WdLogGlobalForLineNumber = 3756;
    goto LABEL_3;
  }
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, _QWORD *, int, int))VirtualMemoryInterface)(
          -1LL,
          a1 + 4,
          0LL,
          a1 + 1,
          8400896,
          4);
  v7 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(2LL, *a1, v13);
    v8 = L"DXGHWQUEUE 0x%I64x: Failed to allocate dummy page for DoorbellCPUVA, returning 0x%I64x";
    WdLogGlobalForLineNumber = 3772;
    goto LABEL_3;
  }
  v14 = MmSecureVirtualMemory((PVOID)a1[4], a1[1], 4u);
  a1[5] = v14;
  if ( !v14 )
  {
    WdLogSingleEntry2(2LL, *a1, -1073741801LL);
    v20 = *a1;
    WdLogGlobalForLineNumber = 3785;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGHWQUEUE 0x%I64x: Failed to secure doorbell CPUVA, returning 0x%I64x",
      v20,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  if ( (a2 & 0x20) != 0 )
  {
    v15 = DxgkGetVirtualMemoryInterface();
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, _QWORD *, int, int))v15)(
            -1LL,
            a1 + 7,
            0LL,
            a1 + 2,
            8400896,
            4);
    v7 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry2(2LL, *a1, v16);
      v8 = L"DXGHWQUEUE 0x%I64x: Failed to allocate dummy page for SecondaryDoorbellCPUVA, returning 0x%I64x";
      WdLogGlobalForLineNumber = 3801;
      goto LABEL_3;
    }
    v17 = MmSecureVirtualMemory((PVOID)a1[7], a1[2], 4u);
    a1[8] = v17;
    if ( !v17 )
    {
      WdLogSingleEntry2(2LL, *a1, -1073741801LL);
      v21 = *a1;
      WdLogGlobalForLineNumber = 3814;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGHWQUEUE 0x%I64x: Failed to secure secondary doorbell CPUVA, returning 0x%I64x",
        v21,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16LL)
                                                                                            + 16LL)
                                                                                + 16LL)
                                                                    + 736LL)
                                                        + 8LL)
                                            + 1096LL))(a1);
  v7 = v18;
  if ( v18 < 0 )
  {
    WdLogSingleEntry2(2LL, *a1, v18);
    v8 = L"DXGHWQUEUE 0x%I64x: VidSchCreateDoorbell failed with status 0x%I64x";
    WdLogGlobalForLineNumber = 3825;
    goto LABEL_3;
  }
  *((_BYTE *)a1 + 168) = 1;
  return 0LL;
}
