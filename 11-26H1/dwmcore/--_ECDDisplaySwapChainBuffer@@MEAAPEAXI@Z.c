/*
 * XREFs of ??_ECDDisplaySwapChainBuffer@@MEAAPEAXI@Z @ 0x18029D3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CDDisplaySwapChainBuffer@@MEAA@XZ @ 0x18029CCB0 (--1CDDisplaySwapChainBuffer@@MEAA@XZ.c)
 */

CDDisplaySwapChainBuffer *__fastcall CDDisplaySwapChainBuffer::`vector deleting destructor'(
        CDDisplaySwapChainBuffer *this,
        char a2)
{
  CDDisplaySwapChainBuffer::~CDDisplaySwapChainBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
