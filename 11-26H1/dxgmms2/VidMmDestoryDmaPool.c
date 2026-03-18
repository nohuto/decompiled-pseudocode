/*
 * XREFs of VidMmDestoryDmaPool @ 0x140002F10
 * Callers:
 *     <none>
 * Callees:
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x140003320 (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 */

void *__fastcall VidMmDestoryDmaPool(VIDMM_DMA_POOL *a1, unsigned int a2)
{
  void *result; // rax

  if ( a1 )
    return VIDMM_DMA_POOL::`scalar deleting destructor'(a1, a2);
  return result;
}
