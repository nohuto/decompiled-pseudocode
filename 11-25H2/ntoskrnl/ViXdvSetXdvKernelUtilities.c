/*
 * XREFs of ViXdvSetXdvKernelUtilities @ 0x1406051E4
 * Callers:
 *     ViXdvDriverLoadImage @ 0x140B7A9D0 (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall ViXdvSetXdvKernelUtilities(__int64 a1)
{
  char result; // al

  result = a1;
  if ( a1 )
  {
    guard_dispatch_icall_no_overrides(ViUtilsForXDV);
    return 1;
  }
  return result;
}
