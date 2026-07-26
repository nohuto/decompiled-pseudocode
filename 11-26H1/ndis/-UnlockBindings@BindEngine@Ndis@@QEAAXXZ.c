/*
 * XREFs of ?UnlockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x14016A510
 * Callers:
 *     ndisEtwWriteMiniportRundown @ 0x140099298 (ndisEtwWriteMiniportRundown.c)
 * Callees:
 *     <none>
 */

void __fastcall Ndis::BindEngine::UnlockBindings(Ndis::BindEngine *this)
{
  KeLeaveCriticalRegion();
  ExReleasePushLockEx(&this->m_lock, 0LL);
}
