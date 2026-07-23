/*
 * XREFs of MiIoPfnTreeLockContended @ 0x1404CC934
 * Callers:
 *     MiDeleteStaleCacheMaps @ 0x1406F8760 (MiDeleteStaleCacheMaps.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x1406F98B8 (MiMarkHugeRangeIoPfnDeleted.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIoPfnTreeLockContended(char a1)
{
  unsigned int v1; // eax
  __int64 v3; // r8

  v1 = 0;
  if ( !a1 )
    return (*(_DWORD *)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL) >> 30) & 1;
  v3 = qword_140E2D838 + 376;
  while ( v1 < (unsigned __int16)KeNumberNodes )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v3 + 640LL) & 0x40000000) != 0 )
      return 1LL;
    v3 += 384LL;
    ++v1;
  }
  return 0LL;
}
