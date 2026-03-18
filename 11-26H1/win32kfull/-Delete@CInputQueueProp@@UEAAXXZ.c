/*
 * XREFs of ?Delete@CInputQueueProp@@UEAAXXZ @ 0x1402083B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateInputQueues@CInputQueueProp@@IEAAXXZ @ 0x1402083DC (-InvalidateInputQueues@CInputQueueProp@@IEAAXXZ.c)
 */

void __fastcall CInputQueueProp::Delete(CInputQueueProp *this)
{
  CInputQueueProp::InvalidateInputQueues(this);
  Win32FreePool(this);
}
