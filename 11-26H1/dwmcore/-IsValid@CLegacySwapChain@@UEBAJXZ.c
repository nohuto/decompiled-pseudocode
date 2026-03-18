/*
 * XREFs of ?IsValid@CLegacySwapChain@@UEBAJXZ @ 0x18018F0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::IsValid(CLegacySwapChain *this)
{
  if ( *((_QWORD *)this + 33) )
    return *(_DWORD *)(*((_QWORD *)this + 5) + 1124LL) != 0 ? 0x8898008D : 0;
  else
    return 2291662989LL;
}
