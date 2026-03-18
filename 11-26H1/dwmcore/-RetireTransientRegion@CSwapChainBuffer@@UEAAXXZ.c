/*
 * XREFs of ?RetireTransientRegion@CSwapChainBuffer@@UEAAXXZ @ 0x1801B63C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CSwapChainBuffer::RetireTransientRegion(const struct FastRegion::Internal::CRgnData **this)
{
  _DWORD **v1; // rbx

  v1 = (_DWORD **)(this + 15);
  CRegion::Union(this + 4, this + 15);
  **v1 = 0;
}
