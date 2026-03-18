/*
 * XREFs of ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x140029F38
 * Callers:
 *     ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x140019984 (-DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z.c)
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x1400A44D0 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 * Callees:
 *     ?RemoveAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ @ 0x140029C94 (-RemoveAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?Clear@CBackchannelManager@@QEAAXXZ @ 0x140029F6C (-Clear@CBackchannelManager@@QEAAXXZ.c)
 */

void __fastcall CFlipManager::ProcessProducerDisconnect(CBackchannelManager **this)
{
  CEndpointResourceStateManager::RemoveAllResourceStates((CEndpointResourceStateManager *)(this + 7));
  CBackchannelManager::Clear(this[28]);
  this[5] = 0LL;
}
