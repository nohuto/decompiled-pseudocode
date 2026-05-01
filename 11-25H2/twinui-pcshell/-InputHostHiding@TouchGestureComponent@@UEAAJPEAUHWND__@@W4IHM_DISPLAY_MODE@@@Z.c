/*
 * XREFs of ?InputHostHiding@TouchGestureComponent@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x180567DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ @ 0x180567F9C (-UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ.c)
 */

__int64 __fastcall TouchGestureComponent::InputHostHiding(__int64 a1)
{
  TouchGestureComponent::UpdateSuppressionRegions((TouchGestureComponent *)(a1 - 8));
  return 0LL;
}
