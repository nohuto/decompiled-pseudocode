/*
 * XREFs of ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140193E3C
 * Callers:
 *     SysMmTestDisableIommu @ 0x14009D690 (SysMmTestDisableIommu.c)
 *     DxgpDisableIommuFromReference @ 0x1401A7208 (DxgpDisableIommuFromReference.c)
 *     ?SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z @ 0x140284E80 (-SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400416A0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ??$SmmAcquirePushLockExclusive@$0DB@@@YAXPEAU?$SYSMM_PUSHLOCK@$0DB@@@@Z @ 0x140059AC0 (--$SmmAcquirePushLockExclusive@$0DB@@@YAXPEAU-$SYSMM_PUSHLOCK@$0DB@@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$00@@YAXPEAU?$SYSMM_PUSHLOCK@$00@@@Z @ 0x140059DD8 (--$SmmReleasePushLockExclusive@$00@@YAXPEAU-$SYSMM_PUSHLOCK@$00@@@Z.c)
 *     ??0SYSMM_LOG_ENTRY_IOMMU_ENABLEMENT@@QEAA@W4SYSMM_IOMMU_ENABLEMENT_REASON@@I@Z @ 0x14006DC04 (--0SYSMM_LOG_ENTRY_IOMMU_ENABLEMENT@@QEAA@W4SYSMM_IOMMU_ENABLEMENT_REASON@@I@Z.c)
 *     ?SmmTelemetryDisableIommu@@YAXPEBUSYSMM_ADAPTER@@II@Z @ 0x140193F84 (-SmmTelemetryDisableIommu@@YAXPEBUSYSMM_ADAPTER@@II@Z.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140285654 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 */

__int64 __fastcall SysMmDisableIommu(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  _DWORD *v10; // rax

  v3 = a2;
  if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
  {
    WdLogSingleEntry0(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 3055;
  }
  else
  {
    v5 = 0;
    SmmAcquirePushLockExclusive<49>(a1 + 64);
    v8 = *(unsigned int *)(a1 + 96);
    if ( ((unsigned int)v8 & (unsigned int)v3) == 0 )
    {
      WdLogSingleEntry5(0LL, 484LL, 3LL, a1, v8, v3);
      WdLogGlobalForLineNumber = 3071;
    }
    v9 = WdLogNewEntry5_WdTrace(v7, v6);
    *(_QWORD *)(v9 + 24) = a1;
    *(_QWORD *)(v9 + 32) = v3;
    WdLogGlobalForLineNumber = 3076;
    if ( *(_DWORD *)(a1 + 96) == (_DWORD)v3 )
      v5 = SmmIommuSwitchToPassthrough((struct SYSMM_ADAPTER *)a1);
    if ( v5 >= 0 )
    {
      SmmTelemetryDisableIommu((const struct SYSMM_ADAPTER *)a1, v3, *(_DWORD *)(a1 + 96));
      if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
        McTemplateK0pt_EtwWriteTransfer((__int64)SysMmControlGuid_Context, (__int64)"\n");
      v10 = (_DWORD *)operator new(8, (struct DXGK_LOG *)(a1 + 256), 4u, 0);
      if ( v10 )
        SYSMM_LOG_ENTRY_IOMMU_ENABLEMENT::SYSMM_LOG_ENTRY_IOMMU_ENABLEMENT(v10, v3, *(_DWORD *)(a1 + 96));
      *(_DWORD *)(a1 + 96) &= ~(_DWORD)v3;
    }
    SmmReleasePushLockExclusive<1>(a1 + 64);
    return (unsigned int)v5;
  }
  return result;
}
