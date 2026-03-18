/*
 * XREFs of ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x140003320
 * Callers:
 *     VidMmDestoryDmaPool @ 0x140002F10 (VidMmDestoryDmaPool.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x14009A9A8 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x14009CB9C (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1400ECBCC (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 */

VIDMM_DMA_POOL *__fastcall VIDMM_DMA_POOL::`scalar deleting destructor'(VIDMM_DMA_POOL *this)
{
  VIDMM_DMA_POOL::~VIDMM_DMA_POOL(this);
  operator delete(this);
  return this;
}
