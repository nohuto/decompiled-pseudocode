/*
 * XREFs of ?SetAlphaMode@CLegacyRemotingSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802A8F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRemotingSwapChain::SetAlphaMode(CLegacyRemotingSwapChain *this, unsigned int a2)
{
  __int64 v4; // rcx

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 96LL))(*((_QWORD *)this + 8));
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, a2);
}
