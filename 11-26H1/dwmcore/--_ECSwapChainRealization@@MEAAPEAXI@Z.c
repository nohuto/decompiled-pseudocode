/*
 * XREFs of ??_ECSwapChainRealization@@MEAAPEAXI@Z @ 0x1802AC990
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CSwapChainRealization@@MEAA@XZ @ 0x1802AC8EC (--1CSwapChainRealization@@MEAA@XZ.c)
 */

CSwapChainRealization *__fastcall CSwapChainRealization::`vector deleting destructor'(
        CSwapChainRealization *this,
        char a2)
{
  CSwapChainRealization::~CSwapChainRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
