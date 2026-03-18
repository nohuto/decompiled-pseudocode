/*
 * XREFs of ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140285CDC
 * Callers:
 *     SysMmTestEnableIommu @ 0x14009D6B0 (SysMmTestEnableIommu.c)
 *     DxgpEnableIommuFromReference @ 0x1401A7254 (DxgpEnableIommuFromReference.c)
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140285ADC (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140286618 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYS.c)
 *     ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IW4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140286F40 (-SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMOR.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400416A0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ??$SmmAcquirePushLockExclusive@$0DB@@@YAXPEAU?$SYSMM_PUSHLOCK@$0DB@@@@Z @ 0x140059AC0 (--$SmmAcquirePushLockExclusive@$0DB@@@YAXPEAU-$SYSMM_PUSHLOCK@$0DB@@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$00@@YAXPEAU?$SYSMM_PUSHLOCK@$00@@@Z @ 0x140059DD8 (--$SmmReleasePushLockExclusive@$00@@YAXPEAU-$SYSMM_PUSHLOCK@$00@@@Z.c)
 *     ??0SYSMM_LOG_ENTRY_IOMMU_ENABLEMENT@@QEAA@W4SYSMM_IOMMU_ENABLEMENT_REASON@@I@Z @ 0x14006DC04 (--0SYSMM_LOG_ENTRY_IOMMU_ENABLEMENT@@QEAA@W4SYSMM_IOMMU_ENABLEMENT_REASON@@I@Z.c)
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x140285400 (SmmIommuSwitchToGpuVaIoMmu.c)
 *     SmmIommuSwitchToTranslation @ 0x140285730 (SmmIommuSwitchToTranslation.c)
 *     ?SmmTelemetryEnableIommu@@YAXPEBUSYSMM_ADAPTER@@II@Z @ 0x1402889A0 (-SmmTelemetryEnableIommu@@YAXPEBUSYSMM_ADAPTER@@II@Z.c)
 */

__int64 __fastcall SysMmEnableIommu(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned int v5; // esi
  __int64 v6; // rdx
  unsigned int *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rax
  int *v10; // r14
  int v11; // eax
  char v12; // dl
  _DWORD *v13; // rax

  v3 = a2;
  if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
  {
    WdLogSingleEntry0(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 2960;
    return result;
  }
  v5 = 0;
  SmmAcquirePushLockExclusive<49>(a1 + 64);
  v7 = (unsigned int *)(a1 + 96);
  v8 = *(unsigned int *)(a1 + 96);
  if ( ((unsigned int)v8 & (unsigned int)v3) != 0 && *(_DWORD *)(a1 + 24) == 1 )
  {
    WdLogSingleEntry5(0LL, 484LL, 2LL, a1, v8, v3);
    WdLogGlobalForLineNumber = 2978;
  }
  v9 = WdLogNewEntry5_WdTrace(v8, v6);
  v10 = (int *)(a1 + 96);
  *(_QWORD *)(v9 + 24) = a1;
  *(_QWORD *)(v9 + 32) = v3;
  WdLogGlobalForLineNumber = 2983;
  if ( *v7 )
    goto LABEL_16;
  if ( (*(_DWORD *)(a1 + 20) & 4) == 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3004;
    v5 = -1073741637;
    goto LABEL_21;
  }
  if ( (_DWORD)v3 == 128 )
  {
    v12 = 0;
  }
  else
  {
    if ( (_DWORD)v3 != 256 )
    {
      v11 = SmmIommuSwitchToTranslation(a1);
      goto LABEL_14;
    }
    v12 = 1;
  }
  v11 = SmmIommuSwitchToGpuVaIoMmu(a1, v12);
LABEL_14:
  v5 = v11;
  if ( v11 >= 0 )
  {
    v10 = (int *)(a1 + 96);
LABEL_16:
    SmmTelemetryEnableIommu((const struct SYSMM_ADAPTER *)a1, v3, *v7);
    if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
      McTemplateK0pt_EtwWriteTransfer((__int64)SysMmControlGuid_Context, (__int64)&EnableIommu);
    v13 = (_DWORD *)operator new(8, (struct DXGK_LOG *)(a1 + 256), 3u, 0);
    if ( v13 )
      SYSMM_LOG_ENTRY_IOMMU_ENABLEMENT::SYSMM_LOG_ENTRY_IOMMU_ENABLEMENT(v13, v3, *v10);
    *v10 |= v3;
  }
LABEL_21:
  SmmReleasePushLockExclusive<1>(a1 + 64);
  return v5;
}
