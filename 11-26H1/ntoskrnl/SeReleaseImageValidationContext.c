/*
 * XREFs of SeReleaseImageValidationContext @ 0x140AFE304
 * Callers:
 *     MiDeleteControlArea @ 0x140481D20 (MiDeleteControlArea.c)
 *     MiValidateSectionUpdate @ 0x140AFE1A8 (MiValidateSectionUpdate.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1, __int64 a2)
{
  if ( SepRmCapTableLock.KernelWaitTime )
    guard_dispatch_icall_no_overrides((__int64)a1, a2);
  else
    ExFreePoolWithTag(a1, 0);
}
