/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801487C0
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801481A0 (-IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORM.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxStereo@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801482B0 (-IsTechnologySupported@CSpatialAudioDtsxStereo@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@.c)
 *     ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801484B0 (-IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KP.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?ChannelMaskFromChannelCount@SpatialAudio@@YAKK@Z @ 0x1801477C4 (-ChannelMaskFromChannelCount@SpatialAudio@@YAKK@Z.c)
 *     FillHrtfDesiredFormat @ 0x180147B14 (FillHrtfDesiredFormat.c)
 *     GetSupportedFormat @ 0x180147CC8 (GetSupportedFormat.c)
 *     IsBitsPerSampleIncluded @ 0x180148014 (IsBitsPerSampleIncluded.c)
 *     IsSampleRateIncluded @ 0x18014804C (IsSampleRateIncluded.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSpatialAudioTechHRTF::IsTechnologySupported(
        CSpatialAudioTechHRTF *this,
        struct IAudioEndpointInfo *a2,
        const struct tWAVEFORMATEX *a3,
        struct tWAVEFORMATEX *a4,
        SpatialAudio *a5,
        unsigned int *a6,
        bool *a7,
        struct WAVEFORMATEXTENSIBLE *a8)
{
  struct WAVEFORMATEXTENSIBLE *v9; // r14
  char SupportedFormat; // di
  __int64 v14; // rax
  __int64 (__fastcall *v15)(CSpatialAudioTechHRTF *); // rax
  char v16; // cl
  unsigned int *v17; // rax
  unsigned int v18; // r13d
  __int64 v19; // rax
  int v20; // r10d
  char v21; // r11
  __int64 v22; // rax
  unsigned int v23; // esi
  unsigned int v24; // r8d
  unsigned int v25; // r12d
  __int64 v26; // rdx
  int v27; // eax
  unsigned int v28; // r14d
  unsigned int v29; // r13d
  unsigned int v30; // eax
  int v31; // r12d
  unsigned int v32; // r15d
  struct IAudioEndpointInfo *v33; // rsi
  WORD wBitsPerSample; // r10
  unsigned __int16 v35; // r10
  DWORD v36; // r8d
  __int64 (__fastcall **v37)(struct IAudioEndpointInfo *, __int128 *); // rax
  __int128 v38; // xmm1
  int v40; // [rsp+30h] [rbp-B1h]
  int v41; // [rsp+38h] [rbp-A9h]
  char v42; // [rsp+50h] [rbp-91h]
  DWORD nSamplesPerSec; // [rsp+54h] [rbp-8Dh] BYREF
  int v44; // [rsp+58h] [rbp-89h]
  unsigned int v45; // [rsp+5Ch] [rbp-85h] BYREF
  unsigned int v46; // [rsp+60h] [rbp-81h]
  unsigned int v47; // [rsp+64h] [rbp-7Dh]
  unsigned int v48[2]; // [rsp+68h] [rbp-79h] BYREF
  int v49; // [rsp+70h] [rbp-71h] BYREF
  unsigned int *v50; // [rsp+78h] [rbp-69h]
  struct IAudioEndpointInfo *v51; // [rsp+80h] [rbp-61h]
  struct WAVEFORMATEXTENSIBLE *v52; // [rsp+88h] [rbp-59h]
  __int128 v53; // [rsp+90h] [rbp-51h] BYREF
  __int128 v54; // [rsp+A0h] [rbp-41h]
  __int64 v55; // [rsp+B0h] [rbp-31h]
  _DWORD v56[4]; // [rsp+B8h] [rbp-29h] BYREF
  unsigned int v57[4]; // [rsp+C8h] [rbp-19h] BYREF

  v9 = a8;
  v51 = a2;
  SupportedFormat = 0;
  *a6 = 0;
  *a7 = 0;
  v55 = 0LL;
  v56[1] = 44100;
  v56[2] = 32000;
  v57[3] = 32000;
  v14 = *(_QWORD *)this;
  v57[2] = 44100;
  v52 = a8;
  v53 = 0LL;
  v15 = *(__int64 (__fastcall **)(CSpatialAudioTechHRTF *))(v14 + 80);
  v54 = 0LL;
  v56[0] = 48000;
  v57[0] = 96000;
  v57[1] = 48000;
  v16 = v15(this);
  v17 = v56;
  v18 = (v16 != 0) + 3;
  v46 = v18;
  if ( v16 )
    v17 = v57;
  v50 = v17;
  v49 = SpatialAudio::ChannelMaskFromChannelCount((SpatialAudio *)(unsigned int)a5);
  v45 = 1;
  *(_QWORD *)v48 = &v49;
  if ( (*(unsigned __int8 (__fastcall **)(CSpatialAudioTechHRTF *))(*(_QWORD *)this + 88LL))(this) )
    (*(void (__fastcall **)(CSpatialAudioTechHRTF *, unsigned int *, unsigned int *))(*(_QWORD *)this + 96LL))(
      this,
      v48,
      &v45);
  if ( a4 )
  {
    SupportedFormat = GetSupportedFormat(
                        (__int64 (__fastcall ***)(_QWORD, __int128 *))a2,
                        (__int16 *)a4,
                        *(__int64 *)v48,
                        v45,
                        (__int64)v50,
                        v18,
                        v40,
                        v41,
                        (__int64)a8);
    if ( SupportedFormat )
      return SupportedFormat;
  }
  if ( a3 && a3->wFormatTag == 0xFFFE )
  {
    v19 = *(_QWORD *)((char *)&a3[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v19 )
      v19 = *(_QWORD *)&a3[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    v20 = 1;
    v42 = 1;
    v21 = 1;
    if ( !v19 )
      goto LABEL_20;
    v22 = *(_QWORD *)((char *)&a3[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v22 )
      v22 = *(_QWORD *)&a3[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    v42 = 1;
    v23 = 1;
    v44 = 1;
    if ( !v22 )
    {
LABEL_20:
      v23 = 0;
      v44 = 0;
      goto LABEL_21;
    }
LABEL_18:
    if ( a3->wFormatTag != 1 && a3->wFormatTag != 3 )
      goto LABEL_21;
    goto LABEL_20;
  }
  v21 = 0;
  v20 = 1;
  v44 = 1;
  v23 = 1;
  v42 = 0;
  if ( a3 )
  {
    v42 = 0;
    v44 = 1;
    goto LABEL_18;
  }
LABEL_21:
  v24 = v45;
  v25 = v23;
  v47 = v23;
  if ( v23 > v45 )
    goto LABEL_57;
  v26 = *(_QWORD *)v48;
  do
  {
    if ( SupportedFormat )
      goto LABEL_56;
    if ( v25 )
    {
      nSamplesPerSec = *(_DWORD *)(v26 + 4LL * (v25 - 1));
LABEL_31:
      v28 = nSamplesPerSec;
      v29 = v23;
      v30 = v46;
LABEL_32:
      if ( SupportedFormat )
        goto LABEL_53;
      if ( v29 )
      {
        nSamplesPerSec = v50[v29 - 1];
      }
      else
      {
        nSamplesPerSec = a3->nSamplesPerSec;
        if ( !IsSampleRateIncluded(nSamplesPerSec, (__int64)v50, v30) )
          goto LABEL_52;
      }
      v31 = nSamplesPerSec;
      v32 = v23;
      v33 = v51;
      while ( 1 )
      {
        if ( SupportedFormat )
        {
LABEL_51:
          v23 = v44;
LABEL_52:
          v30 = v46;
          v29 += v20;
          if ( v29 > v46 )
          {
LABEL_53:
            v26 = *(_QWORD *)v48;
            v24 = v45;
            v9 = v52;
            v25 = v47;
            goto LABEL_54;
          }
          goto LABEL_32;
        }
        nSamplesPerSec = 0;
        if ( v32 )
          break;
        wBitsPerSample = a3->wBitsPerSample;
        LOWORD(nSamplesPerSec) = wBitsPerSample;
        if ( v21 )
          HIWORD(nSamplesPerSec) = a3[1].wFormatTag;
        else
          HIWORD(nSamplesPerSec) = wBitsPerSample;
        if ( IsBitsPerSampleIncluded(&nSamplesPerSec) )
        {
          HIWORD(v36) = HIWORD(nSamplesPerSec);
          goto LABEL_46;
        }
LABEL_50:
        v20 = 1;
        if ( ++v32 > 4 )
          goto LABEL_51;
      }
      v36 = *(_DWORD *)&word_180196F08[2 * v32 - 2];
      nSamplesPerSec = v36;
      v35 = v36;
LABEL_46:
      FillHrtfDesiredFormat(v28, v35, SHIWORD(v36), v31, (__int64)&v53);
      SupportedFormat = (**(__int64 (__fastcall ***)(struct IAudioEndpointInfo *, __int128 *))v33)(v33, &v53);
      if ( !SupportedFormat && DWORD1(v54) == 1599 )
      {
        v37 = *(__int64 (__fastcall ***)(struct IAudioEndpointInfo *, __int128 *))v33;
        DWORD1(v54) = 255;
        SupportedFormat = (*v37)(v33, &v53);
      }
      v21 = v42;
      goto LABEL_50;
    }
    if ( !v21 || (v27 = *(_DWORD *)&a3[1].nChannels, (nSamplesPerSec = v27) == 0) )
    {
      v27 = SpatialAudio::ChannelMaskFromChannelCount((SpatialAudio *)a3->nChannels);
      nSamplesPerSec = v27;
    }
    if ( IsSampleRateIncluded(v27, v26, v24) )
      goto LABEL_31;
LABEL_54:
    v25 += v20;
    v47 = v25;
  }
  while ( v25 <= v24 );
  if ( SupportedFormat )
  {
LABEL_56:
    v38 = v54;
    *(_OWORD *)&v9->Format.wFormatTag = v53;
    *(_OWORD *)&v9->Format.cbSize = v38;
    goto LABEL_58;
  }
LABEL_57:
  *(_OWORD *)&v9->Format.wFormatTag = 0LL;
  v55 = 0LL;
  *(_OWORD *)&v9->Format.cbSize = 0LL;
LABEL_58:
  *(_QWORD *)v9->SubFormat.Data4 = v55;
  return SupportedFormat;
}
