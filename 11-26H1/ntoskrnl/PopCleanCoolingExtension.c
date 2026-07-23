/*
 * XREFs of PopCleanCoolingExtension @ 0x1407CEA70
 * Callers:
 *     PopAssociateThermalRequest @ 0x1407CE88C (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1407CEB98 (PopDeactiveThermalRequest.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x1404A5588 (PnpUnregisterPlugPlayNotification.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopCleanCoolingExtension(_QWORD *P, __int64 a2)
{
  struct _LIST_ENTRY *v3; // rcx

  v3 = (struct _LIST_ENTRY *)P[7];
  if ( v3 )
    PnpUnregisterPlugPlayNotification(v3, 1);
  if ( *((_BYTE *)P + 64) )
    guard_dispatch_icall_no_overrides(P[12], a2);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
