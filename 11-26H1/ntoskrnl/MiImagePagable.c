/*
 * XREFs of MiImagePagable @ 0x14086A740
 * Callers:
 *     MiEnablePagingOfDriver @ 0x140CF8850 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x140D06FF0 (MiLockPagableSections.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 */

__int64 __fastcall MiImagePagable(__int64 a1, unsigned __int64 a2)
{
  if ( (dword_140FBF204 & 1) != 0 )
    return 0LL;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a2) )
    return 0LL;
  return a1;
}
