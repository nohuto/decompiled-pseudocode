/*
 * XREFs of ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E90
 * Callers:
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x18000D780 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x18000E450 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000FE80 (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E04 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18001E598 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___ @ 0x180032C6C (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x1800348AC (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x18003557C (CEndpointCharacteristics--GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180035858 (CEndpointCharacteristics--GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180086DEC (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180145064 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ValidateWaveFormatEx(const struct tWAVEFORMATEX *a1)
{
  int nChannels; // r8d
  DWORD nSamplesPerSec; // r9d
  DWORD nAvgBytesPerSec; // r10d
  int nBlockAlign; // ebx
  WORD cbSize; // ax
  WORD wFormatTag; // dx
  __int64 v7; // rdx
  WORD v8; // dx
  WORD v9; // ax
  int wBitsPerSample; // edx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  nChannels = a1->nChannels;
  if ( !(_WORD)nChannels
    || (nSamplesPerSec = a1->nSamplesPerSec) == 0
    || (nAvgBytesPerSec = a1->nAvgBytesPerSec) == 0
    || (nBlockAlign = a1->nBlockAlign, !(_WORD)nBlockAlign)
    || (cbSize = a1->cbSize, cbSize > 0x400u) )
  {
    v7 = 40LL;
    goto LABEL_37;
  }
  wFormatTag = a1->wFormatTag;
  if ( a1->wFormatTag == 1 || wFormatTag == 3 )
  {
    if ( cbSize
      || (wBitsPerSample = a1->wBitsPerSample, (wBitsPerSample & 7) != 0)
      || (unsigned __int16)nChannels > 2u
      || nAvgBytesPerSec != (nSamplesPerSec * wBitsPerSample * nChannels) >> 3 )
    {
      v7 = 48LL;
      goto LABEL_37;
    }
    return 0LL;
  }
  if ( wFormatTag != 0xFFFE )
    return 0LL;
  if ( cbSize >= 0x16u )
  {
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
      && *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 == *(_QWORD *)&a1[1].wBitsPerSample
      || *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
      && *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 == *(_QWORD *)&a1[1].wBitsPerSample )
    {
      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
        && *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 == *(_QWORD *)&a1[1].wBitsPerSample )
      {
        v8 = a1->wBitsPerSample;
        if ( v8 != 8 && (((v8 - 16) & 0xFFE7) != 0 || v8 == 40) )
        {
          v7 = 63LL;
          goto LABEL_37;
        }
      }
      else
      {
        v8 = a1->wBitsPerSample;
        if ( ((v8 - 32) & 0xFFDF) != 0 )
        {
          v7 = 70LL;
          goto LABEL_37;
        }
      }
      v9 = a1[1].wFormatTag;
      if ( !v9 || v8 < v9 )
      {
        v7 = 75LL;
        goto LABEL_37;
      }
      if ( nAvgBytesPerSec != (nSamplesPerSec * nChannels * v8) >> 3 )
      {
        v7 = 78LL;
        goto LABEL_37;
      }
      if ( nBlockAlign != nChannels * v8 / 8 )
      {
        v7 = 81LL;
        goto LABEL_37;
      }
    }
    return 0LL;
  }
  v7 = 53LL;
LABEL_37:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"avcore\\audiocore\\Include\\WaveUtil_core.h",
    (const char *)0x80070057LL,
    v12);
  return 2147942487LL;
}
