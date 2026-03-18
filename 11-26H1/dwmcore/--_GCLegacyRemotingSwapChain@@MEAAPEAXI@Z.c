/*
 * XREFs of ??_GCLegacyRemotingSwapChain@@MEAAPEAXI@Z @ 0x1802A7EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CLegacyRemotingSwapChain@@MEAA@XZ @ 0x1802A7DA8 (--1CLegacyRemotingSwapChain@@MEAA@XZ.c)
 */

CLegacyRemotingSwapChain *__fastcall CLegacyRemotingSwapChain::`scalar deleting destructor'(
        CLegacyRemotingSwapChain *this,
        char a2)
{
  CLegacyRemotingSwapChain::~CLegacyRemotingSwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
