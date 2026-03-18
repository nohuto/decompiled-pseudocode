/*
 * XREFs of ?GetBufferSize@CLegacyRemotingSwapChain@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1802A83A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_SIZE_U __fastcall CLegacyRemotingSwapChain::GetBufferSize(CLegacyRemotingSwapChain *this, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 8) + 32LL))(v2 + 8);
  else
    *a2 = 0LL;
  return (struct D2D_SIZE_U)a2;
}
