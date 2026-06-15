/*
 * XREFs of ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x18000D780
 * Callers:
 *     ?IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18000D45C (-IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180049E2C (-DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180088410 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800FB254 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     _lambda_97007f1ceff6ad1a52493035158c464e_::operator() @ 0x180136C3C (_lambda_97007f1ceff6ad1a52493035158c464e_--operator().c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E90 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 */

char __fastcall IsCompressedSpatialFormat(const struct tWAVEFORMATEX *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  DWORD *p_nSamplesPerSec; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  if ( !a1 || (int)ValidateWaveFormatEx(a1) < 0 || a1->wFormatTag != 0xFFFE )
    return 0;
  v2 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000000c_0cea_0010_8000_00aa00389b71.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000000c_0cea_0010_8000_00aa00389b71.Data4;
  if ( v2 )
  {
    v3 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000010c_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v3 )
      v3 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000010c_0cea_0010_8000_00aa00389b71.Data4;
    if ( v3 )
    {
      v6 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000030c_0cea_0010_8000_00aa00389b71.Data1;
      if ( !v6 )
        v6 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000030c_0cea_0010_8000_00aa00389b71.Data4;
      if ( v6 )
      {
        v7 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
           - *(_QWORD *)&GUID_0000070c_0cea_0010_8000_00aa00389b71.Data1;
        if ( !v7 )
          v7 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000070c_0cea_0010_8000_00aa00389b71.Data4;
        if ( v7 )
        {
          p_nSamplesPerSec = &a1->nSamplesPerSec;
          goto LABEL_26;
        }
      }
    }
  }
  p_nSamplesPerSec = &a1->nSamplesPerSec;
  if ( a1->nSamplesPerSec != 192000 || a1->nChannels != 8 || a1->wBitsPerSample != 16 )
  {
LABEL_26:
    v8 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000000b_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v8 )
      v8 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000000b_0cea_0010_8000_00aa00389b71.Data4;
    if ( !v8 )
      goto LABEL_17;
    v9 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000010b_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000010b_0cea_0010_8000_00aa00389b71.Data4;
    if ( !v9 )
      goto LABEL_17;
    v10 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000030b_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000030b_0cea_0010_8000_00aa00389b71.Data4;
    if ( !v10 )
    {
LABEL_17:
      if ( *p_nSamplesPerSec == 192000 && a1->nChannels == 8 && a1->wBitsPerSample == 16 )
        return 1;
    }
    return 0;
  }
  return 1;
}
