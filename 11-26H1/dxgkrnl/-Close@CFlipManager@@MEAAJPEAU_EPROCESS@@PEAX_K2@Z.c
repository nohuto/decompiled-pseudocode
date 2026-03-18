/*
 * XREFs of ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x1400A44D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x140018AD8 (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x14001EAE8 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x140029F38 (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ?UnregisterWithRegistry@CFlipManager@@AEAAXXZ @ 0x1400A4798 (-UnregisterWithRegistry@CFlipManager@@AEAAXXZ.c)
 */

__int64 __fastcall CFlipManager::Close(PRKEVENT *this, struct _EPROCESS *a2, void *a3, __int64 a4, unsigned __int64 a5)
{
  if ( a4 == 1 && (a2 == (struct _EPROCESS *)this[6] || a2 == (struct _EPROCESS *)this[5]) )
  {
    CPushLock::AcquireLockExclusive((CPushLock *)(this + 1));
    if ( a2 == (struct _EPROCESS *)this[6] )
      CFlipManager::ProcessConsumerDisconnect(this);
    if ( a2 == (struct _EPROCESS *)this[5] )
      CFlipManager::ProcessProducerDisconnect((CBackchannelManager **)this);
    CPushLock::ReleaseLock((CPushLock *)(this + 1));
  }
  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() && a5 == 1 )
    CFlipManager::UnregisterWithRegistry((CFlipManager *)this);
  return 0LL;
}
