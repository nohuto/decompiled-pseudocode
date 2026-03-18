/*
 * XREFs of SmmCreateHardwareReservedRanges @ 0x140285FC8
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140286618 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYS.c)
 *     ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IW4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140286F40 (-SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMOR.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     SmmValidateHardwareReservedRanges @ 0x140286410 (SmmValidateHardwareReservedRanges.c)
 */

__int64 __fastcall SmmCreateHardwareReservedRanges(__int64 a1, __int128 *a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v8; // r14
  __int64 Pool2; // rax
  __int128 v10; // xmm0

  v3 = 0LL;
  v4 = a3;
  if ( !a3 )
    return 0LL;
  if ( *(_QWORD *)(a1 + 368) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 409;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAdapter->HardwareReservedRanges == nullptr",
      409LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_DWORD *)(a1 + 28) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 410;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAdapter->HardwareReservedRangeCount == 0",
      410LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  result = SmmValidateHardwareReservedRanges(a2, (unsigned int)v4);
  if ( (int)result >= 0 )
  {
    v8 = v4;
    Pool2 = ExAllocatePool2(64LL, 24 * v4, 947091524LL);
    *(_QWORD *)(a1 + 368) = Pool2;
    if ( !Pool2 )
    {
      _InterlockedIncrement(&dword_140169700);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 421;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate SYSMM_HARDWARE_RESERVED_RANGE array",
        421LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    do
    {
      v10 = *a2++;
      *(_OWORD *)(v3 + *(_QWORD *)(a1 + 368)) = v10;
      v3 += 24LL;
      --v8;
    }
    while ( v8 );
    *(_DWORD *)(a1 + 28) = v4;
    return 0LL;
  }
  return result;
}
