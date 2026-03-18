/*
 * XREFs of ?CancelPendingUpdates@CContentResourceState@@UEAAXXZ @ 0x1400A4850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CContentResourceState::CancelPendingUpdates(CContentResourceState *this)
{
  *((_BYTE *)this + 64) &= ~2u;
  *((_BYTE *)this + 32) &= 0xF3u;
}
