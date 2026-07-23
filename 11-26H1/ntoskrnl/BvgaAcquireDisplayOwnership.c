/*
 * XREFs of BvgaAcquireDisplayOwnership @ 0x1405C8300
 * Callers:
 *     BvgaNotifyDisplayOwnershipChange @ 0x1405C8560 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 BvgaAcquireDisplayOwnership()
{
  __int64 result; // rax

  result = BvgaResetDisplayParameters;
  if ( BvgaResetDisplayParameters && BvgaDisplayState == 2 )
    result = guard_dispatch_icall_no_overrides(80LL, 50LL);
  BvgaDisplayState = 0;
  return result;
}
