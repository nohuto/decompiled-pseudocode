/*
 * XREFs of ?GetBufferSize@CCompSwapChain@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1802A37D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_SIZE_U __fastcall CCompSwapChain::GetBufferSize(CCompSwapChain *this, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 88LL))(v2);
  else
    *a2 = 0LL;
  return (struct D2D_SIZE_U)a2;
}
