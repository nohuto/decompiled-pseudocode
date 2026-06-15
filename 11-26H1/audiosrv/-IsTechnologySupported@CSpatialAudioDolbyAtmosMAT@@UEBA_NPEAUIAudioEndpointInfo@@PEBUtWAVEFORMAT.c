/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180148070
 * Callers:
 *     <none>
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800B5998 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@PEBU_GUID@@IPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801485F0 (-IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMA.c)
 */

char __fastcall CSpatialAudioDolbyAtmosMAT::IsTechnologySupported(
        CSpatialAudioDolbyAtmosMAT *this,
        struct IAudioEndpointInfo *a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        unsigned int a5,
        unsigned int *a6,
        bool *a7,
        struct WAVEFORMATEXTENSIBLE *a8)
{
  char v8; // bl
  unsigned int v11; // edi
  __int64 v12; // rcx
  int v13; // eax
  struct _GUID v15; // [rsp+40h] [rbp-40h] BYREF
  int v16; // [rsp+50h] [rbp-30h]
  int v17; // [rsp+54h] [rbp-2Ch]
  int v18; // [rsp+58h] [rbp-28h]
  int v19; // [rsp+5Ch] [rbp-24h]
  int v20; // [rsp+60h] [rbp-20h]
  int v21; // [rsp+64h] [rbp-1Ch]
  int v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+6Ch] [rbp-14h]
  int v24; // [rsp+70h] [rbp-10h]
  int v25; // [rsp+74h] [rbp-Ch]
  int v26; // [rsp+78h] [rbp-8h]
  int v27; // [rsp+7Ch] [rbp-4h]

  v8 = 0;
  *a6 = 0;
  *a7 = 0;
  if ( *((_QWORD *)this + 1) || !byte_1801D52FA )
  {
    v15.Data1 = 1804;
    v11 = 4;
    *(_DWORD *)&v15.Data2 = 1051882;
    *(_DWORD *)v15.Data4 = -1442840448;
    *(_DWORD *)&v15.Data4[4] = 1905997824;
    v16 = 780;
    v17 = 1051882;
    v18 = -1442840448;
    v19 = 1905997824;
    v20 = 268;
    v21 = 1051882;
    v22 = -1442840448;
    v23 = 1905997824;
    v24 = 12;
    v25 = 1051882;
    v26 = -1442840448;
    v27 = 1905997824;
    if ( IsGetDefaultSpatialRenderingModePresent() )
    {
      v13 = IsDolbyMatSupportedByAudioDriver();
      v12 = 3LL;
      if ( v13 )
        v11 = 3;
    }
    return CSpatialAudioTechCompressed::IsTechnologySupported(
             (CSpatialAudioTechCompressed *)v12,
             a2,
             a4,
             &v15,
             v11,
             a6,
             a7,
             a8);
  }
  return v8;
}
