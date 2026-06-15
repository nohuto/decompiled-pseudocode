/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@PEBU_GUID@@IPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801485F0
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180148070 (-IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMAT.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxHdmi@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801483C0 (-IsTechnologySupported@CSpatialAudioDtsxHdmi@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSpatialAudioTechCompressed::IsTechnologySupported(
        CSpatialAudioTechCompressed *this,
        struct IAudioEndpointInfo *a2,
        const struct tWAVEFORMATEX *a3,
        const struct _GUID *a4,
        unsigned int a5,
        unsigned int *a6,
        bool *a7,
        struct WAVEFORMATEXTENSIBLE *a8)
{
  char v10; // dl
  __int64 v12; // r8
  unsigned int i; // edi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // xmm2_8
  unsigned int v19; // ebx
  __int64 (__fastcall **v20)(struct IAudioEndpointInfo *, _BYTE *, __int64); // rax
  __int128 v21; // xmm0
  __int64 (__fastcall *v22)(struct IAudioEndpointInfo *, _BYTE *, __int64); // rax
  _BYTE v24[40]; // [rsp+30h] [rbp-30h] BYREF

  v10 = 0;
  *(_QWORD *)&v24[32] = 0LL;
  *a6 = 0;
  *a7 = 0;
  v12 = 65534LL;
  memset(v24, 0, 32);
  if ( a3
    && a3->wFormatTag == 0xFFFE
    && a3->cbSize == 22
    && a3->nSamplesPerSec == 192000
    && a3->nChannels == 8
    && a3->wBitsPerSample == 16
    && a3[1].wFormatTag == 16
    && (*(_DWORD *)&a3[1].nChannels == 1599 || *(_DWORD *)&a3[1].nChannels == 255) )
  {
    for ( i = 0; i < a5; ++i )
    {
      v14 = i;
      v15 = *(_QWORD *)((char *)&a3[1].nSamplesPerSec + 2) - *(_QWORD *)&a4[v14].Data1;
      if ( !v15 )
        v15 = *(_QWORD *)&a3[1].wBitsPerSample - *(_QWORD *)a4[v14].Data4;
      if ( !v15 )
      {
        v10 = (**(__int64 (__fastcall ***)(struct IAudioEndpointInfo *, const struct tWAVEFORMATEX *, __int64))a2)(
                a2,
                a3,
                v12);
        if ( v10 )
        {
          v16 = *(_OWORD *)&a3->wFormatTag;
          v17 = *(_OWORD *)&a3->cbSize;
          v18 = *(_QWORD *)&a3[1].wBitsPerSample;
          goto LABEL_23;
        }
      }
    }
  }
  v19 = 0;
  if ( a5 )
  {
    while ( 1 )
    {
      v20 = *(__int64 (__fastcall ***)(struct IAudioEndpointInfo *, _BYTE *, __int64))a2;
      v21 = (__int128)*a4;
      *(_QWORD *)v24 = 0x2EE000008FFFELL;
      *(_DWORD *)&v24[14] = 1441808;
      v22 = *v20;
      *(_OWORD *)&v24[24] = v21;
      *(_WORD *)&v24[18] = 16;
      *(_DWORD *)&v24[20] = 1599;
      *(_WORD *)&v24[12] = 16;
      *(_DWORD *)&v24[8] = 3072000;
      v10 = v22(a2, v24, v12);
      if ( v10 )
        break;
      ++v19;
      ++a4;
      if ( v19 >= a5 )
        return v10;
    }
    v18 = *(_QWORD *)&v24[32];
    v17 = *(_OWORD *)&v24[16];
    v16 = *(_OWORD *)v24;
LABEL_23:
    *a6 = 1;
    *a7 = 0;
    *(_OWORD *)&a8->Format.wFormatTag = v16;
    *(_OWORD *)&a8->Format.cbSize = v17;
    *(_QWORD *)a8->SubFormat.Data4 = v18;
  }
  return v10;
}
