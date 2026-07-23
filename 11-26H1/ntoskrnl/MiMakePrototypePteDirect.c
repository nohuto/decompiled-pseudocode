/*
 * XREFs of MiMakePrototypePteDirect @ 0x1402B4570
 * Callers:
 *     MiPteForTrimmedProto @ 0x1402B3394 (MiPteForTrimmedProto.c)
 *     MiResolveSharedZeroFault @ 0x1402B3950 (MiResolveSharedZeroFault.c)
 *     MiCombineWithStandbyExisting @ 0x1402E9D44 (MiCombineWithStandbyExisting.c)
 *     MiCombineWithExisting @ 0x1402EA2C4 (MiCombineWithExisting.c)
 *     MiCombineInitialFinish @ 0x1402EC334 (MiCombineInitialFinish.c)
 *     MiHandleForkValidPrivatePte @ 0x1402ECE40 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkValidProtoPte @ 0x1402ED390 (MiHandleForkValidProtoPte.c)
 *     MiMakePerSessionProtoPte @ 0x1402ED790 (MiMakePerSessionProtoPte.c)
 *     MiHandleForkPagefilePte @ 0x1402EEED4 (MiHandleForkPagefilePte.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
 *     MiTrimSystemImagePages @ 0x1402F1124 (MiTrimSystemImagePages.c)
 *     MiMapImageScpCfgPages @ 0x14036C1F0 (MiMapImageScpCfgPages.c)
 *     MiExpandSharedZeroCluster @ 0x1403DCAFC (MiExpandSharedZeroCluster.c)
 *     MiMakeAccessEntryForProtoPte @ 0x14048F484 (MiMakeAccessEntryForProtoPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x140494784 (MiWriteSharedDemandZeroPte.c)
 *     MiAddMappedPtesPadding @ 0x1406FA494 (MiAddMappedPtesPadding.c)
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

  v1 = qword_140E37D20;
  if ( a1 >= qword_140E37D20 && a1 < qword_140E37D20 + qword_140E37D28 )
  {
    v2 = 1;
  }
  else
  {
    v1 = qword_140E37D10;
    v2 = 0;
  }
  v3 = (a1 - v1) << 9;
  v4 = *(_QWORD *)&CLFS_LSN_NULL_EXT | 0x800000000000000LL;
  if ( v2 )
    v4 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  result = v3 ^ (v3 ^ v4) & 0xFFC0000000000FFFuLL | 0x400;
  if ( qword_140E2D8C0 )
  {
    if ( (qword_140E2D8C0 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2D8C0;
  }
  return result;
}
