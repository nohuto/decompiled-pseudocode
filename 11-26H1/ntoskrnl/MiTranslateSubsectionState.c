/*
 * XREFs of MiTranslateSubsectionState @ 0x14050EA70
 * Callers:
 *     MiPrepareToFlushSubsection @ 0x1404E5300 (MiPrepareToFlushSubsection.c)
 *     MiDeleteCachedSubsection @ 0x14050A360 (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x14052C1C0 (MiEntireSubsectionIsPurged.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTranslateSubsectionState(__int64 *a1, int a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( a1[10] != 1 )
    return 3221226051LL;
  if ( (a1[4] & 1) != 0 )
    return 3221225608LL;
  if ( (*(_DWORD *)(v2 + 56) & 1) != 0 )
    return 3221225865LL;
  if ( a2 || !*((_DWORD *)a1 + 26) )
    return 0LL;
  if ( (*(_DWORD *)(v2 + 56) & 0x20) != 0 )
    return 3221226029LL;
  return (*(_DWORD *)(v2 + 56) & 8) != 0 ? -1073741792 : -1073741267;
}
