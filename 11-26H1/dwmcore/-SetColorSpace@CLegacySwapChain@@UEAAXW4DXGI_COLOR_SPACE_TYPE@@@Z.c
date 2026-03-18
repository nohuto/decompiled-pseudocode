/*
 * XREFs of ?SetColorSpace@CLegacySwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802A5E60
 * Callers:
 *     ?SetColorSpace@CLegacyStereoSwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802A6EC0 (-SetColorSpace@CLegacyStereoSwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacySwapChain::SetColorSpace(CLegacySwapChain *this, enum DXGI_COLOR_SPACE_TYPE a2)
{
  __int64 v2; // rcx

  if ( *((_DWORD *)this + 19) != a2 )
  {
    *((_DWORD *)this + 19) = a2;
    v2 = *((_QWORD *)this + 34);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 144LL))(v2 + 16);
  }
}
