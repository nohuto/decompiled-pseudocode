/*
 * XREFs of ?CheckPresentDurationSupport@CLegacySwapChain@@UEBAJIPEAI0@Z @ 0x1801BA3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckVRRPresentDurationSupport@COverlaySwapChain@@IEBA_NIPEAI0@Z @ 0x1801BA41C (-CheckVRRPresentDurationSupport@COverlaySwapChain@@IEBA_NIPEAI0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::CheckPresentDurationSupport(
        CLegacySwapChain *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  if ( COverlaySwapChain::CheckVRRPresentDurationSupport((CLegacySwapChain *)((char *)this - 24), a2, a3, a4) )
    return 0LL;
  else
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this + 33) + 192LL))(
             *((_QWORD *)this + 33),
             a2,
             a3,
             a4);
}
