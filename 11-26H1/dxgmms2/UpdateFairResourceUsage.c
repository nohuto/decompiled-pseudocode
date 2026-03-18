/*
 * XREFs of UpdateFairResourceUsage @ 0x1400EDCD0
 * Callers:
 *     VidMmInitDmaPool @ 0x1400A47A0 (VidMmInitDmaPool.c)
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1400ECBCC (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 UpdateFairResourceUsage()
{
  __int64 result; // rax

  if ( dword_14008AA80 <= 1 )
  {
    qword_14008AA50 = qword_14008AA60;
    qword_14008AA20 = qword_14008AA30;
    result = qword_14008AA00;
  }
  else
  {
    qword_14008AA50 = qword_14008AA70 / (dword_14008AA80 - 1);
    qword_14008AA20 = qword_14008AA40 / (dword_14008AA80 - 1);
    result = qword_14008AA10 / (dword_14008AA80 - 1);
  }
  qword_14008A9F0 = result;
  return result;
}
