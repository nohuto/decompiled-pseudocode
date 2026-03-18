/*
 * XREFs of ?GetPresentCount@CLegacyRemotingSwapChain@@UEBAIXZ @ 0x1802A8450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::GetPresentCount(CLegacyRemotingSwapChain *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 12);
  v2 = 0;
  v4 = 0;
  if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 32LL))(v1, &v4) >= 0 )
    return v4;
  return v2;
}
