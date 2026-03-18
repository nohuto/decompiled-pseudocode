/*
 * XREFs of ??_ECLegacyStereoSwapChain@@UEAAPEAXI@Z @ 0x1802A6760
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CLegacyStereoSwapChain@@UEAA@XZ @ 0x1802A6738 (--1CLegacyStereoSwapChain@@UEAA@XZ.c)
 */

CLegacyStereoSwapChain *__fastcall CLegacyStereoSwapChain::`vector deleting destructor'(
        CLegacyStereoSwapChain *this,
        char a2)
{
  CLegacyStereoSwapChain::~CLegacyStereoSwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
