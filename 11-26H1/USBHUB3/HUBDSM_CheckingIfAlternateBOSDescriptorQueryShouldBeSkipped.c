/*
 * XREFs of HUBDSM_CheckingIfAlternateBOSDescriptorQueryShouldBeSkipped @ 0x1400202D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_CheckIfBOSDescriptorQueryShouldBeSkipped @ 0x14002E004 (HUBMISC_CheckIfBOSDescriptorQueryShouldBeSkipped.c)
 */

__int64 __fastcall HUBDSM_CheckingIfAlternateBOSDescriptorQueryShouldBeSkipped(__int64 a1)
{
  return HUBMISC_CheckIfBOSDescriptorQueryShouldBeSkipped(*(_QWORD *)(a1 + 960));
}
