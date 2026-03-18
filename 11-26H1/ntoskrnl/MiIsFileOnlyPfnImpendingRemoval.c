/*
 * XREFs of MiIsFileOnlyPfnImpendingRemoval @ 0x1406FA930
 * Callers:
 *     MiGetBadPageResources @ 0x1406F1108 (MiGetBadPageResources.c)
 *     MiUnlinkBadPages @ 0x1406F1FDC (MiUnlinkBadPages.c)
 *     MiIsExtentDangling @ 0x1406FA730 (MiIsExtentDangling.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsFileOnlyPfnImpendingRemoval(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 5 && *(__int64 *)(a1 + 40) >= 0 && !*(_QWORD *)(a1 + 8) && !*(_QWORD *)(a1 + 16);
}
