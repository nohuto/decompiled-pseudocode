/*
 * XREFs of SeQuerySecureBootPlatformManifest @ 0x14081C050
 * Callers:
 *     <none>
 * Callees:
 *     bsearch_s @ 0x140538ED0 (bsearch_s.c)
 */

__int64 __fastcall SeQuerySecureBootPlatformManifest(const void *a1, int a2)
{
  if ( !*(_QWORD *)&SepRmCapTableLock.PriorityFloorSummary )
    return 3236626438LL;
  if ( !a1 )
    return 3221226021LL;
  if ( a2 == 32 )
    return bsearch_s(
             a1,
             *(const void **)(*(_QWORD *)&SepRmCapTableLock.PriorityFloorSummary + 16LL),
             *(unsigned int *)(*(_QWORD *)&SepRmCapTableLock.PriorityFloorSummary + 4LL),
             0x20uLL,
             SepSecureBootManifestCompareElements,
             0LL) != 0LL
         ? 0
         : 0xC0000225;
  return 3221225485LL;
}
