/*
 * XREFs of RtlLookupImageSectionByName @ 0x1404DE250
 * Callers:
 *     KasanDriverLoadImageInternal @ 0x140525CA0 (KasanDriverLoadImageInternal.c)
 *     PrExtExtractDataRecordTable @ 0x1406E0E7C (PrExtExtractDataRecordTable.c)
 *     MiConfigureDriverProxyState @ 0x14086AD90 (MiConfigureDriverProxyState.c)
 *     MiMarkKernelImageCfgBits @ 0x140AC8C4C (MiMarkKernelImageCfgBits.c)
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140D008A8 (MiApplyDynamicFixupsToKernelAndHal.c)
 *     MiPrepareScpFixupsForNtAndHal @ 0x140D01134 (MiPrepareScpFixupsForNtAndHal.c)
 * Callees:
 *     strncmp @ 0x140741F60 (strncmp.c)
 */

const char *__fastcall RtlLookupImageSectionByName(__int64 a1, const char *a2)
{
  unsigned __int16 v3; // si
  const char *v4; // rbx
  unsigned __int16 i; // di

  v3 = *(_WORD *)(a1 + 6);
  v4 = (const char *)(a1 + *(unsigned __int16 *)(a1 + 20) + 24LL);
  for ( i = 0; ; ++i )
  {
    if ( i >= v3 )
      return 0LL;
    if ( !strncmp(v4, a2, 8uLL) )
      break;
    v4 += 40;
  }
  return v4;
}
