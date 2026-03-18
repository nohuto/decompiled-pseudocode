/*
 * XREFs of ?NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E3FB4
 * Callers:
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1400E4308 (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 * Callees:
 *     ?IncrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E36C0 (-IncrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1400E3730 (VidMmiShouldChargeAllocationAgainstBudget.c)
 */

void __fastcall VIDMM_DEVICE::NotifyAllocationResident(VIDMM_DEVICE ***this, VIDMM_DEVICE ***a2)
{
  VIDMM_DEVICE *v4; // rax
  struct VIDMM_ALLOC **v5; // rdx
  VIDMM_DEVICE **v6; // rcx
  VIDMM_DEVICE **v7; // rdx

  if ( VidMmiShouldChargeAllocationAgainstBudget((__int64 **)a2) )
    VIDMM_DEVICE::IncrementCurrentUsage((VIDMM_DEVICE *)this, (struct VIDMM_ALLOC *)a2);
  v4 = (VIDMM_DEVICE *)(a2 + 79);
  v5 = a2[79];
  if ( v5[1] != (struct VIDMM_ALLOC *)(a2 + 79)
    || (v6 = a2[80], *v6 != v4)
    || (*v6 = (VIDMM_DEVICE *)v5, v5[1] = (struct VIDMM_ALLOC *)v6, v7 = this[20], *v7 != (VIDMM_DEVICE *)(this + 19)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v4 = this + 19;
  a2[80] = v7;
  *v7 = v4;
  this[20] = (VIDMM_DEVICE **)v4;
}
