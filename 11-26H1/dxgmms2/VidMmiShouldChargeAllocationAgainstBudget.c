/*
 * XREFs of VidMmiShouldChargeAllocationAgainstBudget @ 0x1400E3730
 * Callers:
 *     ?NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E3FB4 (-NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidMmiShouldChargeAllocationAgainstBudget(__int64 **a1)
{
  __int64 v1; // r8
  bool result; // al

  v1 = **a1;
  result = 1;
  if ( (*(_DWORD *)(v1 + 24) & 1) != 0 )
    return *(_QWORD *)(a1[1][1] + 336) == **(_QWORD **)(v1 + 328);
  return result;
}
