/*
 * XREFs of strncmp @ 0x1406B4820
 * Callers:
 *     EtwpApplyPredicate @ 0x1403F0C80 (EtwpApplyPredicate.c)
 *     HalpAcpiGetCachedTable @ 0x1404132D4 (HalpAcpiGetCachedTable.c)
 *     HalpAcpiCheckAndMapTable @ 0x140413610 (HalpAcpiCheckAndMapTable.c)
 *     RtlLookupImageSectionByName @ 0x1404A9EA0 (RtlLookupImageSectionByName.c)
 *     KasanDriverLoadImageInternal @ 0x1404B82E0 (KasanDriverLoadImageInternal.c)
 *     HvlDebuggerSupportInitialize @ 0x14057EC70 (HvlDebuggerSupportInitialize.c)
 *     __asan_wrap_strncmp @ 0x1405AA440 (__asan_wrap_strncmp.c)
 *     RtlValidateCorrelationVector @ 0x1406EFCE0 (RtlValidateCorrelationVector.c)
 *     ApiSetLoadSchemaEx @ 0x1407B9F34 (ApiSetLoadSchemaEx.c)
 *     AslpFileHasSecuromWrapper @ 0x1407FF5EC (AslpFileHasSecuromWrapper.c)
 *     AslpFileIsArm64XBinary @ 0x1407FF668 (AslpFileIsArm64XBinary.c)
 *     AslpHasStarForceWrapper @ 0x140800258 (AslpHasStarForceWrapper.c)
 *     BiIsWindowsEfiEntry @ 0x140A27CCC (BiIsWindowsEfiEntry.c)
 *     PopPowerRequestStatsIsDetailedRequestReason @ 0x140AC45F4 (PopPowerRequestStatsIsDetailedRequestReason.c)
 *     HalpInitializeProfiling @ 0x140B3EAB8 (HalpInitializeProfiling.c)
 *     RtlGetCpuVendor @ 0x140B50884 (RtlGetCpuVendor.c)
 *     KiGetCpuVendor @ 0x140B5E944 (KiGetCpuVendor.c)
 *     KdInitSystem @ 0x140B65E30 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
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
