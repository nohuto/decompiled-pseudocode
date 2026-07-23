/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_INFO @ 0x14043CFE0
 * Callers:
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObpInsertHandleCount @ 0x140A51B44 (ObpInsertHandleCount.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x140AB8B3C (ObpUnlockHandleDatabaseEntry.c)
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
