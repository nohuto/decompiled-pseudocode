/*
 * XREFs of ?OnRudeWindowStateChange@TouchGestureComponent@@UEAAJPEAUIImmersiveMonitor@@W4RudeWindowStateChangeFlags@@PEAUHWND__@@@Z @ 0x180567DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ @ 0x180567F9C (-UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ.c)
 */

__int64 __fastcall TouchGestureComponent::OnRudeWindowStateChange(TouchGestureComponent *a1)
{
  TouchGestureComponent::UpdateSuppressionRegions(a1);
  return 0LL;
}
