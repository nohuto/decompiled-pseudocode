/*
 * XREFs of MiIsAddressGlobal @ 0x140376AA0
 * Callers:
 *     MiCreateSharedZeroPages @ 0x140282EF0 (MiCreateSharedZeroPages.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiCompleteRestrictedImageFault @ 0x140376250 (MiCompleteRestrictedImageFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink);
  if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  if ( a1 >= qword_140E2DFC0 && a1 <= qword_140E2DFD0 )
    return BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink);
  return BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink);
}
