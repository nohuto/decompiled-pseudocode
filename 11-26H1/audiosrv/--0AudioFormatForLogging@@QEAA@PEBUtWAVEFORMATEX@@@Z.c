/*
 * XREFs of ??0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z @ 0x1800834AC
 * Callers:
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18014152C (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSetting.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18014207C (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAU.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x180143670 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x180144460 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBU.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180145064 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 * Callees:
 *     <none>
 */

AudioFormatForLogging *__fastcall AudioFormatForLogging::AudioFormatForLogging(
        AudioFormatForLogging *this,
        const struct tWAVEFORMATEX *a2)
{
  *(_WORD *)this = 0;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *(_OWORD *)((char *)this + 12) = 0LL;
  *((_DWORD *)this + 7) = 0;
  if ( a2 )
  {
    *(_WORD *)this = a2->nChannels;
    *((_DWORD *)this + 1) = a2->nSamplesPerSec;
    *((_WORD *)this + 4) = a2->wBitsPerSample;
    if ( a2->wFormatTag == 0xFFFE )
    {
      *((_WORD *)this + 5) = a2[1].wFormatTag;
      *((_DWORD *)this + 7) = *(_DWORD *)&a2[1].nChannels;
      *(_OWORD *)((char *)this + 12) = *(_OWORD *)((char *)&a2[1].nSamplesPerSec + 2);
    }
  }
  return this;
}
