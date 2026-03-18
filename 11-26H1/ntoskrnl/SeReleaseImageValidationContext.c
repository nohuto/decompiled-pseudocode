/*
 * XREFs of SeReleaseImageValidationContext @ 0x140AFC790
 * Callers:
 *     MiDeleteControlArea @ 0x1404881E0 (MiDeleteControlArea.c)
 *     MiValidateSectionUpdate @ 0x140AFC634 (MiValidateSectionUpdate.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1, __int64 a2)
{
  if ( SepRmCapTableLock.TracingPrivate[0] )
    guard_dispatch_icall_no_overrides((__int64)a1, a2);
  else
    ExFreePoolWithTag(a1, 0);
}
