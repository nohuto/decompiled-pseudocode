/*
 * XREFs of ?SelfDestruct@FxMemoryBufferFromPoolLookaside@@MEAAXXZ @ 0x140052460
 * Callers:
 *     <none>
 * Callees:
 *     ?SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ @ 0x1400524F0 (-SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxMemoryBufferFromPoolLookaside::SelfDestruct(FxMemoryBufferFromPoolLookaside *this)
{
  ((void (__fastcall *)(FxLookasideList *, void *))this->m_pLookaside->FxMemoryBufferFromLookaside::__vftable[1].SelfDestruct)(
    this->m_pLookaside,
    this->m_Pool);
  FxMemoryBufferFromLookaside::SelfDestruct(this);
}
