/*
 * XREFs of ?SetSDRBoost@CDDisplaySwapChain@@UEAAXM@Z @ 0x1802549F0
 * Callers:
 *     ?SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z @ 0x180206BF8 (-SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDisplaySwapChain::SetSDRBoost(CDDisplaySwapChain *this, float a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( *((float *)this + 24) != a2 )
  {
    *((float *)this + 24) = a2;
    v3 = 0;
    v4 = *((_QWORD *)this + 55);
    if ( (*((_QWORD *)this + 56) - v4) >> 3 )
    {
      v5 = 0LL;
      do
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v4 + 8 * v5) + 216LL) + 16LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 160LL))(v6);
        v4 = *((_QWORD *)this + 55);
        v5 = ++v3;
      }
      while ( v3 < (unsigned __int64)((*((_QWORD *)this + 56) - v4) >> 3) );
    }
  }
}
