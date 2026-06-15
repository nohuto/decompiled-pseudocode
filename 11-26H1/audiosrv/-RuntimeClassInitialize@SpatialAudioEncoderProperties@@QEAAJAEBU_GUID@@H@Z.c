/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x18003C3C4
 * Callers:
 *     ?CreateForEncoder@SpatialAudioEncoderPropertiesFactory@@UEAAJAEBU_GUID@@HPEAPEAUISpatialAudioEncoderProperties@@@Z @ 0x18003C140 (-CreateForEncoder@SpatialAudioEncoderPropertiesFactory@@UEAAJAEBU_GUID@@HPEAPEAUISpatialAudioEnc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18003B4A8 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18003C6F8 (-QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     Create_SpatialAudioPositionCalc @ 0x18003DA84 (Create_SpatialAudioPositionCalc.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012E610 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012E804 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012E9E8 (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012EBDC (-ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012ED50 (-ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012EED8 (-ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012F060 (-ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::RuntimeClassInitialize(
        SpatialAudioEncoderProperties *this,
        struct _GUID *a2,
        int a3)
{
  _QWORD *v3; // r14
  int v7; // ebp
  int v8; // r15d
  int SpatialAudioPositionCalc; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int RegisterForOverrides; // esi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __m128 *v22; // rbx
  __int64 v23; // rax
  float v24; // xmm5_4
  __m128 v25; // xmm3
  __m128 v26; // xmm4
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm3
  unsigned int v31; // eax
  const CHAR *v33; // [rsp+40h] [rbp-38h] BYREF
  int v34; // [rsp+80h] [rbp+8h] BYREF
  int v35; // [rsp+98h] [rbp+20h] BYREF

  v3 = (_QWORD *)((char *)this + 1136);
  v7 = 0;
  v8 = 0;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 142);
  SpatialAudioPositionCalc = Create_SpatialAudioPositionCalc(v3);
  RegisterForOverrides = SpatialAudioPositionCalc;
  if ( SpatialAudioPositionCalc >= 0 )
  {
    v14 = *(_QWORD *)&a2->Data1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
    if ( *(_QWORD *)&a2->Data1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
      v14 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
    if ( v14 )
    {
      v15 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
      if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
        v15 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
      if ( v15 )
      {
        v16 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
        if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
          v16 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
        if ( v16 )
        {
          v17 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
          if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
            v17 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
          if ( v17 )
          {
            v18 = *(_QWORD *)&a2->Data1 - DTSX_HEADPHONES_SPATIAL_ENCODER;
            if ( *(_QWORD *)&a2->Data1 == (_QWORD)DTSX_HEADPHONES_SPATIAL_ENCODER )
              v18 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER + 1);
            if ( v18 )
            {
              v19 = *(_QWORD *)&a2->Data1 - DTSX_TWOSPEAKER_SPATIAL_ENCODER;
              if ( *(_QWORD *)&a2->Data1 == (_QWORD)DTSX_TWOSPEAKER_SPATIAL_ENCODER )
                v19 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER + 1);
              if ( v19 )
              {
                v20 = *(_QWORD *)&a2->Data1 - DTSX_HDMI_SPATIAL_ENCODER;
                if ( *(_QWORD *)&a2->Data1 == (_QWORD)DTSX_HDMI_SPATIAL_ENCODER )
                  v20 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DTSX_HDMI_SPATIAL_ENCODER + 1);
                if ( v20 )
                {
                  v21 = *(_QWORD *)&a2->Data1 - MULTICHANNEL_SPATIAL_ENCODER;
                  if ( *(_QWORD *)&a2->Data1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
                    v21 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
                  if ( !v21 )
                  {
                    v8 = 1;
                    SpatialAudioEncoderProperties::ConfigureMultiChannel(this, a2);
                  }
                }
                else
                {
                  SpatialAudioEncoderProperties::ConfigureDtsxHdmi(this, a2);
                }
              }
              else
              {
                SpatialAudioEncoderProperties::ConfigureDtsxTwoSpeaker(this, a2);
              }
            }
            else
            {
              SpatialAudioEncoderProperties::ConfigureDtsxHeadphones(this, a2);
            }
          }
          else
          {
            v7 = 1;
            SpatialAudioEncoderProperties::ConfigureDolbyAtmosTwoSpeaker(this, a2);
          }
        }
        else
        {
          v7 = 1;
          SpatialAudioEncoderProperties::ConfigureDolbyAtmosHeadphonesEncoder(this, a2);
        }
      }
      else
      {
        v7 = 1;
        SpatialAudioEncoderProperties::ConfigureDolbyAtmosMATEncoder(this, a2);
      }
    }
    else
    {
      SpatialAudioEncoderProperties::ConfigureSpatialAudioHrtfEncoder(this, a2);
    }
    RegisterForOverrides = SpatialAudioEncoderProperties::QueryRegisterForOverrides(
                             this,
                             (const struct _GUID *)((char *)this + 700));
    if ( RegisterForOverrides >= 0 && a3 )
    {
      v22 = (__m128 *)((char *)this + 48);
      RegisterForOverrides = (*(__int64 (__fastcall **)(_QWORD, char *, char *, __int64))(*(_QWORD *)*v3 + 24LL))(
                               *v3,
                               (char *)this + 872,
                               (char *)this + 48,
                               304LL);
      if ( v7 || v8 )
      {
        v23 = 19LL;
        v24 = *((float *)this + 219) * 0.5;
        do
        {
          v25 = *v22;
          v26 = _mm_shuffle_ps(v25, v25, 170);
          if ( v7 )
          {
            v26.m128_f32[0] = v26.m128_f32[0] + v24;
            v27 = _mm_shuffle_ps(v25, v25, 255);
            v28 = _mm_shuffle_ps(v25, v25, 85);
            v25.m128_f32[0] = v25.m128_f32[0] + v24;
            v29 = _mm_movelh_ps(_mm_unpacklo_ps(v25, v26), _mm_unpacklo_ps(v28, v27));
          }
          else
          {
            v30 = _mm_shuffle_ps(v25, v25, 198);
            v30.m128_i32[0] = v26.m128_i32[0] ^ _xmm;
            v29 = _mm_shuffle_ps(v30, v30, 198);
          }
          *v22++ = v29;
          --v23;
        }
        while ( v23 );
      }
      *((_BYTE *)this + 1148) = 1;
    }
  }
  else if ( (unsigned int)dword_1801D32E8 > 2 )
  {
    v34 = SpatialAudioPositionCalc;
    v35 = 207;
    v33 = "SpatialAudioEncoderProperties::RuntimeClassInitialize";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      byte_1801A9A22,
      v11,
      v12,
      &v33,
      (__int64)&v35,
      (__int64)&v34);
  }
  *((_DWORD *)this + 286) = 0;
  if ( RegisterForOverrides >= 0 )
  {
    v31 = (*((_DWORD *)this + 179) >> 1) - ((*((_DWORD *)this + 179) >> 2) & 0x55555555);
    *((_DWORD *)this + 286) = (16843009
                             * (((v31 & 0x33333333)
                               + ((v31 >> 2) & 0x33333333)
                               + (((v31 & 0x33333333) + ((v31 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 24;
  }
  return (unsigned int)RegisterForOverrides;
}
