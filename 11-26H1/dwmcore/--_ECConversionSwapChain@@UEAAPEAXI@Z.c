/*
 * XREFs of ??_ECConversionSwapChain@@UEAAPEAXI@Z @ 0x1802A7130
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CConversionSwapChain@@UEAA@XZ @ 0x1802A70F0 (--1CConversionSwapChain@@UEAA@XZ.c)
 */

CConversionSwapChain *__fastcall CConversionSwapChain::`vector deleting destructor'(
        CConversionSwapChain *this,
        char a2)
{
  CConversionSwapChain::~CConversionSwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
