/*
 * XREFs of MiMakePrototypePteDirect @ 0x1402D27B0
 * Callers:
 *     MiPteForTrimmedProto @ 0x1402D15D4 (MiPteForTrimmedProto.c)
 *     MiResolveSharedZeroFault @ 0x1402D1B90 (MiResolveSharedZeroFault.c)
 *     MiCombineWithStandbyExisting @ 0x140307CC4 (MiCombineWithStandbyExisting.c)
 *     MiCombineWithExisting @ 0x140308244 (MiCombineWithExisting.c)
 *     MiCombineInitialFinish @ 0x14030A2B4 (MiCombineInitialFinish.c)
 *     MiHandleForkValidPrivatePte @ 0x14030ADC0 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkValidProtoPte @ 0x14030B310 (MiHandleForkValidProtoPte.c)
 *     MiMakePerSessionProtoPte @ 0x14030B710 (MiMakePerSessionProtoPte.c)
 *     MiHandleForkPagefilePte @ 0x14030CE54 (MiHandleForkPagefilePte.c)
 *     MiHandleForkTransitionPte @ 0x14030E420 (MiHandleForkTransitionPte.c)
 *     MiTrimSystemImagePages @ 0x14030F0A4 (MiTrimSystemImagePages.c)
 *     MiMapImageScpCfgPages @ 0x14036A450 (MiMapImageScpCfgPages.c)
 *     MiExpandSharedZeroCluster @ 0x1403D9910 (MiExpandSharedZeroCluster.c)
 *     MiMakeAccessEntryForProtoPte @ 0x140495934 (MiMakeAccessEntryForProtoPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x14049AC34 (MiWriteSharedDemandZeroPte.c)
 *     MiAddMappedPtesPadding @ 0x1406F5824 (MiAddMappedPtesPadding.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakePrototypePteDirect(unsigned __int64 a1)
{
  __int64 v1; // r9
  int v2; // r8d
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 result; // rax

  v1 = qword_140E37BA0;
  if ( a1 >= qword_140E37BA0 && a1 < qword_140E37BA0 + qword_140E37BA8 )
  {
    v2 = 1;
  }
  else
  {
    v1 = qword_140E37B90;
    v2 = 0;
  }
  v3 = (a1 - v1) << 9;
  v4 = *(_QWORD *)&CLFS_LSN_NULL_EXT | 0x800000000000000LL;
  if ( v2 )
    v4 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  result = v3 ^ (v3 ^ v4) & 0xFFC0000000000FFFuLL | 0x400;
  if ( qword_140E2D740 )
  {
    if ( (qword_140E2D740 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2D740;
  }
  return result;
}
