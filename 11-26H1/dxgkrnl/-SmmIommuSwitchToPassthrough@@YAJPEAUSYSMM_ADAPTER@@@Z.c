/*
 * XREFs of ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140285654
 * Callers:
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140193E3C (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140285ADC (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     SmmAssignDomain @ 0x14009BB18 (SmmAssignDomain.c)
 *     SmmClearPageManager @ 0x14009BBCC (SmmClearPageManager.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     SmmIommuDeleteDomain @ 0x1402853E4 (SmmIommuDeleteDomain.c)
 *     SmmSwapDomains @ 0x1402859E4 (SmmSwapDomains.c)
 */

__int64 __fastcall SmmIommuSwitchToPassthrough(struct SYSMM_ADAPTER *a1)
{
  int v2; // edi
  __int64 v3; // rbp

  if ( (dword_1401696D8 & 2) != 0 )
  {
    v2 = -1073741823;
LABEL_4:
    WdLogSingleEntry2(3LL, a1, v2);
    WdLogGlobalForLineNumber = 2647;
    return (unsigned int)v2;
  }
  v2 = SmmSwapDomains(a1, qword_1401696B8, *((_QWORD *)a1 + 14));
  if ( v2 < 0 )
    goto LABEL_4;
  if ( (dword_1401696C0 & 0x100) == 0 && *((_QWORD *)a1 + 42) )
    (*((void (__fastcall **)(struct SYSMM_ADAPTER *))a1 + 37))(a1);
  SmmClearPageManager((__int64)a1 + 128);
  v3 = *((_QWORD *)a1 + 14);
  SmmAssignDomain((__int64)a1, qword_1401696B8, 1);
  if ( v3 )
    SmmIommuDeleteDomain();
  return (unsigned int)v2;
}
