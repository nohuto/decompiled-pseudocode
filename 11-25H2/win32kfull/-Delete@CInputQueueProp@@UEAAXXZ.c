/*
 * XREFs of ?Delete@CInputQueueProp@@UEAAXXZ @ 0x1401D9B10
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateInputQueues@CInputQueueProp@@IEAAXXZ @ 0x1401D9B3C (-InvalidateInputQueues@CInputQueueProp@@IEAAXXZ.c)
 */

void __fastcall CInputQueueProp::Delete(CInputQueueProp *this)
{
  CInputQueueProp::InvalidateInputQueues(this);
  Win32FreePool(this);
}
