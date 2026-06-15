/*
 * XREFs of IsBitsPerSampleIncluded @ 0x180148014
 * Callers:
 *     GetSupportedFormat @ 0x180147CC8 (GetSupportedFormat.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801487C0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1.c)
 * Callees:
 *     <none>
 */

char __fastcall IsBitsPerSampleIncluded(_WORD *a1)
{
  __int64 i; // rdx

  for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
  {
    if ( word_180196F08[2 * i] == *a1 && word_180196F08[2 * i + 1] == a1[1] )
      return 1;
  }
  return 0;
}
