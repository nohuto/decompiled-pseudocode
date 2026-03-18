/*
 * XREFs of ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IW4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140286F40
 * Callers:
 *     ?ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z @ 0x1401A5CCC (-ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z @ 0x1400531E0 (--0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z.c)
 *     ??1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ @ 0x140055278 (--1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ.c)
 *     ?SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z @ 0x14009C46C (-SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z.c)
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140285CDC (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 *     SmmCreateHardwareReservedRanges @ 0x140285FC8 (SmmCreateHardwareReservedRanges.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140373850 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 */

__int64 __fastcall SysMmFinalizeInitialization(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int128 *a5,
        unsigned int a6,
        unsigned int a7,
        union SYSMM_IOMMU_STATE *a8)
{
  unsigned int v8; // esi
  __int64 v9; // r13
  __int64 v11; // r15
  int v13; // ebp
  __int64 result; // rax
  int v15; // edx
  unsigned int v16; // ecx
  _BYTE v17[16]; // [rsp+50h] [rbp-38h] BYREF

  v8 = 0;
  v9 = a4;
  v11 = a3;
  v13 = 0;
  *(_DWORD *)a8 = 0;
  if ( !*(_QWORD *)(a1 + 368) && a5 && (dword_1401696C0 & 0x100) == 0 )
  {
    result = SmmCreateHardwareReservedRanges(a1, a5, a6);
    v13 = result;
    if ( (int)result < 0 )
      return result;
    if ( *(_DWORD *)(a1 + 96) )
    {
      if ( (*(_DWORD *)(a1 + 92) & 1) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 969;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pAdapter->Iommu.Flags.DmaRemappingEnabled == 0",
          969LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
        (SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v17,
        (struct SYSMM_IOMMU *)(a1 + 64));
      if ( *(_DWORD *)(a1 + 28) )
      {
        while ( 1 )
        {
          v13 = SmmMapHardwareReservedRangeToIommu(
                  (const struct SYSMM_LOGICAL_BLOCK **)(*(_QWORD *)(a1 + 368) + 24LL * v8),
                  (struct SYSMM_IOMMU *)(a1 + 64));
          if ( v13 < 0 )
            break;
          if ( ++v8 >= *(_DWORD *)(a1 + 28) )
            goto LABEL_11;
        }
        SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v17);
        return (unsigned int)v13;
      }
LABEL_11:
      SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v17);
    }
  }
  v15 = *(_DWORD *)(a1 + 20);
  if ( (v15 & 2) == 0 )
    goto LABEL_25;
  v16 = *(_DWORD *)(a1 + 88) & 0xFFFFFFFE;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 88) = (2 * v9) & 0xFFFFFFFB | (v11 | v16) & 0xFFFFFFF9;
  if ( (v15 & 1) != 0 )
    goto LABEL_16;
  if ( (_BYTE)v9 )
  {
    v13 = SysMmEnableIommu(a1, 0x20u);
    goto LABEL_16;
  }
  if ( !a7 )
  {
LABEL_16:
    if ( v13 < 0 )
    {
LABEL_17:
      WdLogSingleEntry3(2LL, v11, v9, a7);
      WdLogGlobalForLineNumber = 1051;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to enable IOMMU via legacy initialization. IommuSupported=%u, Required=%u, LegacyFlagMode=%u",
        v11,
        v9,
        a7,
        0LL,
        0LL);
      return (unsigned int)v13;
    }
    goto LABEL_25;
  }
  if ( (_BYTE)v11 )
  {
    v13 = SysMmEnableIommu(a1, 8u);
    if ( v13 >= 0 )
      goto LABEL_25;
  }
  else
  {
    v13 = -1073741823;
  }
  if ( a7 != 1 )
    goto LABEL_17;
LABEL_25:
  SysMmQueryIommuState((const struct SYSMM_ADAPTER *)a1, a8);
  return 0LL;
}
