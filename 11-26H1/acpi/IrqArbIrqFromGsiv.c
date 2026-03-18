/*
 * XREFs of IrqArbIrqFromGsiv @ 0x1400BE1E0
 * Callers:
 *     IrqArbpAssignIrqFromLinkNode @ 0x1400BE450 (IrqArbpAssignIrqFromLinkNode.c)
 *     IrqArbGetNextAllocationRange @ 0x1400CFE80 (IrqArbGetNextAllocationRange.c)
 *     IrqArbpFindSuitableRangePci @ 0x1400D2AC8 (IrqArbpFindSuitableRangePci.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1400DD048 (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1400D39C0 (IrqArbpLookupIsaOverrideByGsiv.c)
 */

__int64 __fastcall IrqArbIrqFromGsiv(__int64 a1)
{
  char v1; // al
  unsigned int v2; // ecx
  unsigned int v3; // edx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v1 = IrqArbpLookupIsaOverrideByGsiv(a1, &v5);
  v3 = v5;
  if ( !v1 )
    return v2;
  return v3;
}
