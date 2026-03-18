/*
 * XREFs of ??_ECLegacySwapChainBuffer@@MEAAPEAXI@Z @ 0x1802A5B10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CSwapChainBuffer@@UEAA@XZ @ 0x18029CD00 (--1CSwapChainBuffer@@UEAA@XZ.c)
 */

FastRegion::CRegion **__fastcall CLegacySwapChainBuffer::`vector deleting destructor'(
        FastRegion::CRegion **this,
        char a2)
{
  *this = (FastRegion::CRegion *)&CLegacySwapChainBuffer::`vftable';
  CSwapChainBuffer::~CSwapChainBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
