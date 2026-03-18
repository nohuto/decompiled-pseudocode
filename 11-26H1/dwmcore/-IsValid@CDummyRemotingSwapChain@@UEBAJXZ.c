/*
 * XREFs of ?IsValid@CDummyRemotingSwapChain@@UEBAJXZ @ 0x1802A2EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDummyRemotingSwapChain::IsValid(CDummyRemotingSwapChain *this)
{
  return *(_DWORD *)(*((_QWORD *)this + 6) + 1124LL) != 0 ? 0x8898008D : 0;
}
