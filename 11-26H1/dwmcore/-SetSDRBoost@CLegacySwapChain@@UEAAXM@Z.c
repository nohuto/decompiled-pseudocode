/*
 * XREFs of ?SetSDRBoost@CLegacySwapChain@@UEAAXM@Z @ 0x1802A6010
 * Callers:
 *     ?SetSDRBoost@CLegacyStereoSwapChain@@UEAAXM@Z @ 0x1802A6F60 (-SetSDRBoost@CLegacyStereoSwapChain@@UEAAXM@Z.c)
 *     ?SetSDRBoost@CConversionSwapChain@@UEAAXM@Z @ 0x1802A7CB0 (-SetSDRBoost@CConversionSwapChain@@UEAAXM@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacySwapChain::SetSDRBoost(CLegacySwapChain *this, float a2)
{
  __int64 v2; // rcx

  if ( *((float *)this + 24) != a2 )
  {
    *((float *)this + 24) = a2;
    v2 = *((_QWORD *)this + 34);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 160LL))(v2 + 16);
  }
}
