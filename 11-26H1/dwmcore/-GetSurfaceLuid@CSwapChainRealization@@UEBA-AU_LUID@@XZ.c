/*
 * XREFs of ?GetSurfaceLuid@CSwapChainRealization@@UEBA?AU_LUID@@XZ @ 0x1801ADD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CSwapChainRealization::GetSurfaceLuid(CSwapChainRealization *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this + 52);
  return (struct _LUID)a2;
}
