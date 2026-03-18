/*
 * XREFs of ?ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z @ 0x1401A5CCC
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1401A778C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PHYSICAL_MEMORY_RANGE@@$01@@QEAAPEAU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1401A5B30 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PHYSICAL_MEMORY_RANGE@@$01@@QEAAPEAU_DXGK_PHYSIC.c)
 *     ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IW4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140286F40 (-SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMOR.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1402C00F8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::ConfigureSysMm(ADAPTER_RENDER *this, union SYSMM_IOMMU_STATE *a2)
{
  DXGADAPTER *v2; // r9
  int v5; // r8d
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rdi
  __int64 Elements; // rax
  DXGADAPTER *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  int v16; // ebx
  _QWORD *v17; // rcx
  __int128 v18; // [rsp+50h] [rbp-49h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v19; // [rsp+60h] [rbp-39h] BYREF
  PVOID P; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v21[32]; // [rsp+98h] [rbp-1h] BYREF
  int v22; // [rsp+B8h] [rbp+1Fh]

  v2 = (DXGADAPTER *)*((_QWORD *)this + 2);
  P = 0LL;
  v22 = 0;
  v5 = *((_DWORD *)v2 + 627);
  v6 = *((_DWORD *)v2 + 775);
  if ( (v5 & 0x800) != 0 && (v6 & 1) != 0 )
    v7 = 2 - ((v6 & 0x10) != 0);
  else
    v7 = 0;
  if ( (v5 & 0x800) != 0 )
  {
    *(_QWORD *)&v19.Type = 22LL;
    *(_QWORD *)&v19.InputDataSize = 0LL;
    v19.pOutputData = &v18;
    *(_QWORD *)&v19.Flags.0 = 0LL;
    v18 = 0LL;
    HIDWORD(v19.hKmdProcessHandle) = 0;
    v19.pInputData = 0LL;
    v19.OutputDataSize = 16;
    v8 = DXGADAPTER::DdiQueryAdapterInfo(v2, &v19);
    v9 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 4534;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to query number of hardware reserved ranges. Status 0x%I64x",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_10:
      if ( P != v21 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      return (unsigned int)v9;
    }
    if ( (_DWORD)v18 )
    {
      Elements = PagedPoolZeroedArray<_DXGK_PHYSICAL_MEMORY_RANGE,2>::AllocateElements((__int64 *)&P, v18);
      if ( !Elements )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4544;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to allocate array for hardware reserved ranges. ArraySize=%u",
          (unsigned int)v18,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_10;
      }
      v12 = (DXGADAPTER *)*((_QWORD *)this + 2);
      *((_QWORD *)&v18 + 1) = Elements;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v12, &v19) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4550;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 4550LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v13 = *((_QWORD *)this + 2);
  v14 = *(_DWORD *)(v13 + 2508) >> 13;
  v15 = *(_DWORD *)(v13 + 2508) >> 11;
  LOBYTE(v14) = (*(_DWORD *)(v13 + 2508) & 0x2000) != 0;
  LOBYTE(v15) = (*(_DWORD *)(v13 + 2508) & 0x800) != 0;
  v16 = SysMmFinalizeInitialization(*(_QWORD *)(v13 + 224), *(_QWORD *)(v13 + 2440), v15, v14, P, v22, v7, a2);
  if ( v16 >= 0 )
  {
    v17 = *(_QWORD **)(*((_QWORD *)this + 2) + 224LL);
    v17[36] = ADAPTER_RENDER::IommuOnEnable;
    v17[37] = ADAPTER_RENDER::IommuOnDisable;
    v17[38] = ADAPTER_RENDER::IommuBeginExclusiveAccess;
    v17[39] = ADAPTER_RENDER::IommuEndExclusiveAccess;
    v17[40] = ADAPTER_RENDER::IommuReserveGpuVa;
    v17[41] = ADAPTER_RENDER::IommuFreeGpuVa;
    v17[42] = this;
    if ( P != v21 && P )
      ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 4574;
    if ( P != v21 && P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)v16;
  }
}
