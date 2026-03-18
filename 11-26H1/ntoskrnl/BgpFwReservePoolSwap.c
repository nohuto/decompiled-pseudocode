/*
 * XREFs of BgpFwReservePoolSwap @ 0x140C50BC0
 * Callers:
 *     ResFwFreeContext @ 0x140C528B8 (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x140C545B8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x140C509A4 (BgpFwInitializeReservePool.c)
 */

void __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140E62238 = qword_140E64DC0;
      stru_140E3E928.ThreadTimerDelay = (volatile unsigned int)stru_140E3E928.QueuedScb;
      HIDWORD(stru_140E3E928.QueuedScb) = HIDWORD(stru_140E3E928.WriteTransferCount);
      stru_140E64DC8 = (RTL_BITMAP)xmmword_140E64DE0;
    }
  }
  else
  {
    HIDWORD(stru_140E3E928.WriteTransferCount) = HIDWORD(stru_140E3E928.QueuedScb);
    qword_140E64DC0 = qword_140E62238;
    LODWORD(stru_140E3E928.QueuedScb) = stru_140E3E928.ThreadTimerDelay;
    xmmword_140E64DE0 = (__int128)stru_140E64DC8;
    BgpFwInitializeReservePool(a2, a3, a4);
  }
}
