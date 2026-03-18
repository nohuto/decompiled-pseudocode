/*
 * XREFs of ?MarkFullValid@CSwapChainBuffer@@UEAAXXZ @ 0x1801AE860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSwapChainBuffer::MarkFullValid(CSwapChainBuffer *this)
{
  **((_DWORD **)this + 4) = 0;
}
