/*
 * XREFs of ?LockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x14016A4D0
 * Callers:
 *     ndisEtwWriteMiniportRundown @ 0x140099298 (ndisEtwWriteMiniportRundown.c)
 * Callees:
 *     <none>
 */

void __fastcall Ndis::BindEngine::LockBindings(Ndis::BindEngine *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&this->m_lock, 0LL);
}
