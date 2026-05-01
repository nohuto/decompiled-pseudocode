/*
 * XREFs of ?Solidify@GhostDivider@@UEAAXXZ @ 0x18016D7B0
 * Callers:
 *     ?Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z @ 0x18016D770 (-Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z.c)
 * Callees:
 *     ?ChangeDividerVisibility@GhostDivider@@AEAAX_N@Z @ 0x18016D7D8 (-ChangeDividerVisibility@GhostDivider@@AEAAX_N@Z.c)
 */

void __fastcall GhostDivider::Solidify(GhostDivider *this)
{
  *((_BYTE *)this + 92) = 1;
  GhostDivider::ChangeDividerVisibility(this, 1);
  GhostDivider::DrawGrabber(this);
}
