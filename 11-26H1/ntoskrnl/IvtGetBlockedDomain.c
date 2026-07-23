/*
 * XREFs of IvtGetBlockedDomain @ 0x1404F9C14
 * Callers:
 *     IvtUpdateScalableModeTranslationStructures @ 0x1404F9990 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtUpdateContextEntry @ 0x1404F9A90 (IvtUpdateContextEntry.c)
 *     IvtBuildDefaultDomain @ 0x1405A8490 (IvtBuildDefaultDomain.c)
 *     IvtInitializeIommu @ 0x140BF5C90 (IvtInitializeIommu.c)
 * Callees:
 *     HalpIvtFindReservedDomain @ 0x1405B1F6C (HalpIvtFindReservedDomain.c)
 */

__int64 __fastcall IvtGetBlockedDomain(__int64 a1, unsigned int *a2, unsigned __int64 *a3)
{
  unsigned int *ReservedDomain; // rax
  unsigned __int64 v6; // rdx
  __int64 result; // rax

  if ( a2 && (ReservedDomain = (unsigned int *)HalpIvtFindReservedDomain(a1, *a2)) != 0LL )
  {
    v6 = *(_QWORD *)(*((_QWORD *)ReservedDomain + 1) + 16LL);
  }
  else
  {
    v6 = qword_140F87888;
    ReservedDomain = (unsigned int *)(a1 + 260);
  }
  result = *ReservedDomain;
  *a3 = v6 >> 12;
  return result;
}
