/*
 * XREFs of MiIsFreeSlabPage @ 0x1404BB78C
 * Callers:
 *     MiPurgeSlabEntry @ 0x1404BB64C (MiPurgeSlabEntry.c)
 *     MiIsPageSecured @ 0x140534D58 (MiIsPageSecured.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 */

_BOOL8 __fastcall MiIsFreeSlabPage(__int64 a1)
{
  __int64 v1; // r8

  if ( (unsigned int)MiGetPfnSlabType(a1) == 9 || (*(_BYTE *)(v1 + 34) & 7) != 5 )
    return 0LL;
  if ( *(_QWORD *)(v1 + 8) == -1LL )
    return 1LL;
  return *(_QWORD *)(v1 + 8) == -2LL;
}
