/*
 * XREFs of SeDeassignSecurity @ 0x140AAE620
 * Callers:
 *     SepDeleteAccessState @ 0x140418680 (SepDeleteAccessState.c)
 *     CmpCreateHiveRootCell @ 0x140B4B93C (CmpCreateHiveRootCell.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeDeassignSecurity(PSECURITY_DESCRIPTOR *SecurityDescriptor)
{
  PSECURITY_DESCRIPTOR v2; // rcx

  v2 = *SecurityDescriptor;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *SecurityDescriptor = 0LL;
  return 0;
}
