/*
 * XREFs of MiIsAddressGlobal @ 0x140374CF0
 * Callers:
 *     MiCreateSharedZeroPages @ 0x140283980 (MiCreateSharedZeroPages.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiCompleteRestrictedImageFault @ 0x1403744A0 (MiCompleteRestrictedImageFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return BYTE5(stru_140E2D930.Header.WaitListHead.Blink);
  if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  if ( a1 >= qword_140E2DE40 && a1 <= qword_140E2DE50 )
    return BYTE5(stru_140E2D930.Header.WaitListHead.Blink);
  return BYTE4(stru_140E2D930.Header.WaitListHead.Blink);
}
