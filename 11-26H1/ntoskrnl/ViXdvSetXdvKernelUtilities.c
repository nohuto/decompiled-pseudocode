/*
 * XREFs of ViXdvSetXdvKernelUtilities @ 0x1406451CC
 * Callers:
 *     ViXdvDriverLoadImage @ 0x140C2E5CC (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
