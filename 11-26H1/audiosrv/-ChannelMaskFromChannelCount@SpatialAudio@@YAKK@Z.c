/*
 * XREFs of ?ChannelMaskFromChannelCount@SpatialAudio@@YAKK@Z @ 0x1801477C4
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801487C0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialAudio::ChannelMaskFromChannelCount(SpatialAudio *this)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  v1 = (_DWORD)this - 1;
  if ( !v1 )
    return 4LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 3LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 11LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 51LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 59LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 1551LL;
  v7 = v6 - 1;
  if ( !v7 )
    return 1807LL;
  if ( v7 == 1 )
    return 1599LL;
  return 0LL;
}
