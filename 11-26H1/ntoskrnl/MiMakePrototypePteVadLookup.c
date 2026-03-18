/*
 * XREFs of MiMakePrototypePteVadLookup @ 0x1402CFD90
 * Callers:
 *     MiSectionProtectZeroPte @ 0x1402CFA48 (MiSectionProtectZeroPte.c)
 *     MiPteForTrimmedProto @ 0x1402D15D4 (MiPteForTrimmedProto.c)
 *     MiHandleForkValidProtoPte @ 0x14030B310 (MiHandleForkValidProtoPte.c)
 *     MiSplitPrivatePage @ 0x1403173FC (MiSplitPrivatePage.c)
 *     MiSectionProtectProtoPte @ 0x14033CDD0 (MiSectionProtectProtoPte.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036BB54 (MiSetReadOnlyOnSectionView.c)
 *     MiExpandSharedZeroCluster @ 0x1403D9910 (MiExpandSharedZeroCluster.c)
 *     MiZeroFault @ 0x140422AB0 (MiZeroFault.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakePrototypePteVadLookup(char a1)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | (32 * (a1 & 0x1F | 0x1FFFFFFFFFFA0LL));
  if ( qword_140E2D740 )
  {
    if ( (qword_140E2D740 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2D740;
  }
  return result;
}
