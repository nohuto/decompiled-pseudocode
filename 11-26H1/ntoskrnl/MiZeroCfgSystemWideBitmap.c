/*
 * XREFs of MiZeroCfgSystemWideBitmap @ 0x14033F2F8
 * Callers:
 *     MiReturnImageBase @ 0x140A7FE38 (MiReturnImageBase.c)
 * Callees:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033F350 (MiZeroCfgSystemWideBitmapWorker.c)
 */

__int64 __fastcall MiZeroCfgSystemWideBitmap(__int64 a1, unsigned __int64 a2)
{
  char *Thread; // r9

  Thread = (char *)stru_140E2D150.WaitBlock[0].Thread;
  if ( *(_DWORD *)(a1 + 16) == 3 )
    Thread = (char *)stru_140E2D150.Teb;
  return MiZeroCfgSystemWideBitmapWorker(
           Thread + 128,
           2 * (a2 >> 4),
           2 * (((unsigned __int64)*(unsigned int *)(a1 + 8) << 12) & 0xFFFFFFFFFFFFFFFLL));
}
