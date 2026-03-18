/*
 * XREFs of ??_GCLegacySwapChain@@MEAAPEAXI@Z @ 0x1801DB0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x180204EA4 (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CLegacySwapChain *__fastcall CLegacySwapChain::`scalar deleting destructor'(CLegacySwapChain *this, char a2)
{
  CLegacySwapChain::~CLegacySwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x200uLL);
  return this;
}
