/*
 * XREFs of ViXdvSetXdvKernelUtilities @ 0x1406415EC
 * Callers:
 *     ViXdvDriverLoadImage @ 0x140C285C4 (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall ViXdvSetXdvKernelUtilities(__int64 a1)
{
  char result; // al

  result = a1;
  if ( a1 )
  {
    guard_dispatch_icall_no_overrides(ViUtilsForXDV, &VfRuleClasses);
    return 1;
  }
  return result;
}
