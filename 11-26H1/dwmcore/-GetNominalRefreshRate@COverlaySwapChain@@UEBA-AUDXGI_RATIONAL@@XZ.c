/*
 * XREFs of ?GetNominalRefreshRate@COverlaySwapChain@@UEBA?AUDXGI_RATIONAL@@XZ @ 0x1801D66F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DXGI_RATIONAL __fastcall COverlaySwapChain::GetNominalRefreshRate(COverlaySwapChain *this, __int64 *a2)
{
  __int64 v2; // rax

  if ( *((_DWORD *)this + 26) && *((_DWORD *)this + 27) )
    v2 = *((_QWORD *)this + 13);
  else
    v2 = 0x10000003CLL;
  *a2 = v2;
  return (struct DXGI_RATIONAL)a2;
}
