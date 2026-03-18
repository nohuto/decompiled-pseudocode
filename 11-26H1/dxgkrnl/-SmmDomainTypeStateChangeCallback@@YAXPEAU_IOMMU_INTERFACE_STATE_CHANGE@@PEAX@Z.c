/*
 * XREFs of ?SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z @ 0x140284E80
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??$SmmAcquirePushLockExclusive@$0EM@@@YAXPEAU?$SYSMM_PUSHLOCK@$0EM@@@@Z @ 0x14009BAB8 (--$SmmAcquirePushLockExclusive@$0EM@@@YAXPEAU-$SYSMM_PUSHLOCK@$0EM@@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$0EM@@@YAXPEAU?$SYSMM_PUSHLOCK@$0EM@@@@Z @ 0x14009BAF0 (--$SmmReleasePushLockExclusive@$0EM@@@YAXPEAU-$SYSMM_PUSHLOCK@$0EM@@@@Z.c)
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140193E3C (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 */

void __fastcall SmmDomainTypeStateChangeCallback(struct _IOMMU_INTERFACE_STATE_CHANGE *a1, _DWORD *a2)
{
  _DWORD *v4; // rbx

  SmmAcquirePushLockExclusive<76>();
  v4 = (_DWORD *)((char *)a1 + 4);
  if ( (a2[25] & 2) == 0 && (*v4 & 2) != 0 )
  {
    if ( (a2[24] & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2740;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pAdapter->Iommu.EnablementBitmask & SYSMM_IOMMU_ENABLEMENT_REASON_DMA_REMAPPING_POLICY) != 0",
        2740LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)SysMmDisableIommu((__int64)a2, 1u) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2748;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(((NTSTATUS)(Status)) >= 0)", 2748LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  a2[25] = *v4;
  SmmReleasePushLockExclusive<76>();
}
