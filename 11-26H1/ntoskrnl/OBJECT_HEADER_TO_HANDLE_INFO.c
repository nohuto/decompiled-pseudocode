/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_INFO @ 0x1404444D0
 * Callers:
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ObpInsertHandleCount @ 0x140A48854 (ObpInsertHandleCount.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x140AB74FC (ObpUnlockHandleDatabaseEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_HANDLE_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 4) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 7];
  else
    return 0LL;
}
