/*
 * XREFs of ?SetColorSpace@CDDisplaySwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18029AFE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDisplaySwapChain::SetColorSpace(CDDisplaySwapChain *this, unsigned int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rdx

  if ( *((_DWORD *)this + 19) != a2 )
  {
    *((_DWORD *)this + 19) = a2;
    v4 = 0;
    v5 = *((_QWORD *)this + 55);
    if ( (*((_QWORD *)this + 56) - v5) >> 3 )
    {
      v6 = 0LL;
      do
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * v6) + 216LL) + 16LL)
                                                + 144LL))(
          *(_QWORD *)(*(_QWORD *)(v5 + 8 * v6) + 216LL) + 16LL,
          a2);
        v5 = *((_QWORD *)this + 55);
        v6 = ++v4;
      }
      while ( v4 < (unsigned __int64)((*((_QWORD *)this + 56) - v5) >> 3) );
    }
  }
}
