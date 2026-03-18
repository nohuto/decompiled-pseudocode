/*
 * XREFs of AdtpPermissionBitPosition @ 0x14071577C
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x1404322F0 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14071533C (AdtpBuildStagingReasonAuditStringInternal.c)
 * Callees:
 *     <none>
 */

char __fastcall AdtpPermissionBitPosition(unsigned int a1)
{
  char result; // al

  for ( result = 0; ; ++result )
  {
    a1 >>= 1;
    if ( !a1 )
      break;
  }
  return result;
}
