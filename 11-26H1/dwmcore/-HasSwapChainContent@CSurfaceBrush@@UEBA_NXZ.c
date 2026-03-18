/*
 * XREFs of ?HasSwapChainContent@CSurfaceBrush@@UEBA_NXZ @ 0x180283EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSurfaceBrush::HasSwapChainContent(CSurfaceBrush *this)
{
  return (*(__int64 (__fastcall **)(_QWORD, CSurfaceBrush *))(**((_QWORD **)this + 24) + 32LL))(
           *((_QWORD *)this + 24),
           this);
}
