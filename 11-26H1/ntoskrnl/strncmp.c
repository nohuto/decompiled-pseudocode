/*
 * XREFs of strncmp @ 0x14073D360
 * Callers:
 *     HalpAcpiGetCachedTable @ 0x140342C6C (HalpAcpiGetCachedTable.c)
 *     HalpAcpiCheckAndMapTable @ 0x140343370 (HalpAcpiCheckAndMapTable.c)
 *     RtlLookupImageSectionByName @ 0x1404E4CB0 (RtlLookupImageSectionByName.c)
 *     HvlDebuggerSupportInitialize @ 0x1405B83B0 (HvlDebuggerSupportInitialize.c)
 *     __asan_wrap_strncmp @ 0x1405E21F0 (__asan_wrap_strncmp.c)
 *     EtwpApplyPredicate @ 0x1406C966C (EtwpApplyPredicate.c)
 *     PopPowerRequestStatsIsDetailedRequestReason @ 0x14077BD70 (PopPowerRequestStatsIsDetailedRequestReason.c)
 *     ApiSetLoadSchemaEx @ 0x14084A5E4 (ApiSetLoadSchemaEx.c)
 *     AslpFileHasSecuromWrapper @ 0x14088E7E0 (AslpFileHasSecuromWrapper.c)
 *     AslpFileIsArm64XBinary @ 0x14088E8A8 (AslpFileIsArm64XBinary.c)
 *     AslpHasStarForceWrapper @ 0x14088F370 (AslpHasStarForceWrapper.c)
 *     BiIsWindowsEfiEntry @ 0x1409D4368 (BiIsWindowsEfiEntry.c)
 *     RtlValidateCorrelationVector @ 0x140B2E670 (RtlValidateCorrelationVector.c)
 *     HalpInitializeProfiling @ 0x140BED728 (HalpInitializeProfiling.c)
 *     RtlGetCpuVendor @ 0x140BFEDD8 (RtlGetCpuVendor.c)
 *     KiGetCpuVendor @ 0x140C0A4F8 (KiGetCpuVendor.c)
 *     KdInitSystem @ 0x140C12B60 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

int __cdecl strncmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  signed __int64 v3; // r9
  unsigned __int8 v4; // al
  unsigned __int8 v5; // dl
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  bool v8; // cc
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned int v12; // edx

  if ( !MaxCount )
    return 0;
  v3 = Str2 - Str1;
  if ( ((unsigned __int8)Str1 & 7) != 0 )
    goto LABEL_3;
LABEL_7:
  while ( (((_WORD)v3 + (_WORD)Str1) & 0xFFFu) <= 0xFF8 )
  {
    v6 = *(_QWORD *)Str1;
    v7 = *(_QWORD *)&Str1[v3];
    if ( *(_QWORD *)Str1 != v7 )
      break;
    Str1 += 8;
    v8 = MaxCount <= 8;
    MaxCount -= 8LL;
    if ( v8 )
      return 0;
    if ( (((v7 + 0x7EFEFEFEFEFEFEFFLL) ^ ~v6) & 0x8101010101010100uLL) != 0 )
    {
      if ( !(_BYTE)v7 )
        return 0;
      if ( !BYTE1(v7) )
        return 0;
      v10 = v7 >> 16;
      if ( !(_BYTE)v10 )
        return 0;
      if ( !BYTE1(v10) )
        return 0;
      v11 = v10 >> 16;
      if ( !(_BYTE)v11 )
        return 0;
      if ( !BYTE1(v11) )
        return 0;
      v12 = WORD1(v11);
      if ( !(_BYTE)v12 || !BYTE1(v12) )
        return 0;
    }
  }
LABEL_3:
  while ( 1 )
  {
    v4 = *Str1;
    v5 = (Str1++)[v3];
    if ( v4 != v5 )
      return -(v4 < v5) - ((v4 < v5) - 1);
    if ( !--MaxCount || !v4 )
      return 0;
    if ( ((unsigned __int8)Str1 & 7) == 0 )
      goto LABEL_7;
  }
}
