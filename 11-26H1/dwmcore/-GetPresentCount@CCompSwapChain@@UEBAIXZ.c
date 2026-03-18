/*
 * XREFs of ?GetPresentCount@CCompSwapChain@@UEBAIXZ @ 0x180247850
 * Callers:
 *     ?GetPresentCount@CRemoteAppRenderTarget@@UEBAIXZ @ 0x1802478E0 (-GetPresentCount@CRemoteAppRenderTarget@@UEBAIXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompSwapChain::GetPresentCount(CCompSwapChain *this)
{
  __int64 v1; // rcx
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 8);
  v3 = 0;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 136LL))(v1, &v3);
  return v3;
}
