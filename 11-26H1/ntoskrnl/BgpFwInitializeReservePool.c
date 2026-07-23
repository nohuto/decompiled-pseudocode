/*
 * XREFs of BgpFwInitializeReservePool @ 0x140C569A4
 * Callers:
 *     BgpFwLibraryDestroy @ 0x140C569EC (BgpFwLibraryDestroy.c)
 *     BgpFwReservePoolSwap @ 0x140C56BC0 (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x140C5A5B8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlClearAllBits @ 0x140478400 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  stru_140E3EAA8.ThreadTimerDelay = 0;
  qword_140E64FB0 = a1;
  *(_DWORD *)&stru_140E3EAA8.Spare26 = a2;
  stru_140E64FC0.SizeOfBitMap = a2;
  stru_140E64FC0.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&stru_140E64FC0);
}
