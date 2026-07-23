/*
 * XREFs of BgpFwReservePoolSwap @ 0x140C56BC0
 * Callers:
 *     ResFwFreeContext @ 0x140C588B8 (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x140C5A5B8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x140C569A4 (BgpFwInitializeReservePool.c)
 */

void __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140E64FB0 = qword_140E64FB8;
      *(_QWORD *)&stru_140E3EAA8.ThreadTimerDelay = stru_140E3EAA8.QueuedScb;
      stru_140E64FC0 = (_RTL_BITMAP)xmmword_140E64FD8;
    }
  }
  else
  {
    stru_140E3EAA8.QueuedScb = *(_KSCB **)&stru_140E3EAA8.ThreadTimerDelay;
    qword_140E64FB8 = qword_140E64FB0;
    xmmword_140E64FD8 = (__int128)stru_140E64FC0;
    BgpFwInitializeReservePool(a2, a3, a4);
  }
}
