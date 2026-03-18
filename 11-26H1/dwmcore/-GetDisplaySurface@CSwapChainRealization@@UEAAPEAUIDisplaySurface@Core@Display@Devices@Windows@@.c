/*
 * XREFs of ?GetDisplaySurface@CSwapChainRealization@@UEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x1802AD810
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureDisplaySurface@CSwapChainRealization@@IEAAJXZ @ 0x1802ACDC4 (-EnsureDisplaySurface@CSwapChainRealization@@IEAAJXZ.c)
 */

struct Windows::Devices::Display::Core::IDisplaySurface *__fastcall CSwapChainRealization::GetDisplaySurface(
        CSwapChainRealization *this,
        unsigned int *a2)
{
  if ( (int)CSwapChainRealization::EnsureDisplaySurface((CSwapChainRealization *)((char *)this - 16)) < 0 )
    return 0LL;
  if ( a2 )
    *a2 = *(_DWORD *)(*((_QWORD *)this + 31) + 188LL);
  return (struct Windows::Devices::Display::Core::IDisplaySurface *)*((_QWORD *)this + 32);
}
