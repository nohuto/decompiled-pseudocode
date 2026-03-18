/*
 * XREFs of BgpFwInitializeReservePool @ 0x140C509A4
 * Callers:
 *     BgpFwLibraryDestroy @ 0x140C509EC (BgpFwLibraryDestroy.c)
 *     BgpFwReservePoolSwap @ 0x140C50BC0 (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x140C545B8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlClearAllBits @ 0x14047EA90 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  HIDWORD(stru_140E3E928.QueuedScb) = 0;
  qword_140E62238 = a1;
  stru_140E3E928.ThreadTimerDelay = a2;
  stru_140E64DC8.SizeOfBitMap = a2;
  stru_140E64DC8.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&stru_140E64DC8);
}
