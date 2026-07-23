/*
 * XREFs of MiMakePrototypePteVadLookup @ 0x1402B1B50
 * Callers:
 *     MiSectionProtectZeroPte @ 0x1402B1808 (MiSectionProtectZeroPte.c)
 *     MiPteForTrimmedProto @ 0x1402B3394 (MiPteForTrimmedProto.c)
 *     MiHandleForkValidProtoPte @ 0x1402ED390 (MiHandleForkValidProtoPte.c)
 *     MiSplitPrivatePage @ 0x14031942C (MiSplitPrivatePage.c)
 *     MiSectionProtectProtoPte @ 0x14033EE50 (MiSectionProtectProtoPte.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036D8F4 (MiSetReadOnlyOnSectionView.c)
 *     MiExpandSharedZeroCluster @ 0x1403DCAFC (MiExpandSharedZeroCluster.c)
 *     MiZeroFault @ 0x14041A2F0 (MiZeroFault.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakePrototypePteVadLookup(char a1)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | (32 * (a1 & 0x1F | 0x1FFFFFFFFFFA0LL));
  if ( qword_140E2D8C0 )
  {
    if ( (qword_140E2D8C0 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2D8C0;
  }
  return result;
}
