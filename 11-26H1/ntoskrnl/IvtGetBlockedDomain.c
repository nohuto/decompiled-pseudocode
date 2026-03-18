/*
 * XREFs of IvtGetBlockedDomain @ 0x140500424
 * Callers:
 *     IvtUpdateScalableModeTranslationStructures @ 0x1405001A0 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtUpdateContextEntry @ 0x1405002A0 (IvtUpdateContextEntry.c)
 *     IvtBuildDefaultDomain @ 0x1405A5C80 (IvtBuildDefaultDomain.c)
 *     IvtInitializeIommu @ 0x140BEFC90 (IvtInitializeIommu.c)
 * Callees:
 *     HalpIvtFindReservedDomain @ 0x1405AF75C (HalpIvtFindReservedDomain.c)
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
    v6 = qword_140F874A0;
    ReservedDomain = (unsigned int *)(a1 + 260);
  }
  result = *ReservedDomain;
  *a3 = v6 >> 12;
  return result;
}
