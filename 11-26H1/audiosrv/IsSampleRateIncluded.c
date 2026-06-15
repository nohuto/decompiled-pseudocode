/*
 * XREFs of IsSampleRateIncluded @ 0x18014804C
 * Callers:
 *     GetSupportedFormat @ 0x180147CC8 (GetSupportedFormat.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801487C0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1.c)
 * Callees:
 *     <none>
 */

char __fastcall IsSampleRateIncluded(int a1, __int64 a2, unsigned int a3)
{
  __int64 i; // r9

  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(a2 + 4 * i) == a1 )
      return 1;
  }
  return 0;
}
