/*
 * XREFs of ?GetNominalRefreshRate@CDummyRemotingSwapChain@@UEBA?AUDXGI_RATIONAL@@XZ @ 0x1802A2900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DXGI_RATIONAL __fastcall CDummyRemotingSwapChain::GetNominalRefreshRate(
        CDummyRemotingSwapChain *this,
        _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this + 92);
  return (struct DXGI_RATIONAL)a2;
}
