/*
 * XREFs of ?Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z @ 0x18016D770
 * Callers:
 *     <none>
 * Callees:
 *     ?Solidify@GhostDivider@@UEAAXXZ @ 0x18016D7B0 (-Solidify@GhostDivider@@UEAAXXZ.c)
 *     ?GhostDividerShown@JointResizeTelemetry@@SAXXZ @ 0x18016DB9C (-GhostDividerShown@JointResizeTelemetry@@SAXXZ.c)
 */

__int64 __fastcall GhostDivider::Show(GhostDivider *a1, char a2)
{
  JointResizeTelemetry::GhostDividerShown();
  if ( (a2 & 2) != 0 )
    GhostDivider::Solidify(a1);
  return 0LL;
}
