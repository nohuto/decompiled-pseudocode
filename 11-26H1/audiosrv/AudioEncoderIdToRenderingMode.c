/*
 * XREFs of AudioEncoderIdToRenderingMode @ 0x180130A90
 * Callers:
 *     ?GetCurrentSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x18012D2A0 (-GetCurrentSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z.c)
 *     ?GetUserSelectedSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x18012DF90 (-GetUserSelectedSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall AudioEncoderIdToRenderingMode(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v15; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+60h] [rbp+18h] BYREF
  const CHAR *v17; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v5 = *a1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( *a1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v5 = a1[1] - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( v5 )
  {
    v6 = *a1 - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
    if ( *a1 == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
      v6 = a1[1] - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
    if ( v6 )
    {
      v7 = *a1 - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
      if ( *a1 == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
        v7 = a1[1] - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
      if ( v7 )
      {
        v8 = *a1 - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
        if ( *a1 == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
          v8 = a1[1] - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
        if ( v8 )
        {
          v9 = *a1 - DTSX_HEADPHONES_SPATIAL_ENCODER;
          if ( *a1 == (_QWORD)DTSX_HEADPHONES_SPATIAL_ENCODER )
            v9 = a1[1] - *((_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER + 1);
          if ( v9 )
          {
            v10 = *a1 - DTSX_TWOSPEAKER_SPATIAL_ENCODER;
            if ( *a1 == (_QWORD)DTSX_TWOSPEAKER_SPATIAL_ENCODER )
              v10 = a1[1] - *((_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER + 1);
            if ( v10 )
            {
              v11 = *a1 - DTSX_HDMI_SPATIAL_ENCODER;
              if ( *a1 == (_QWORD)DTSX_HDMI_SPATIAL_ENCODER )
                v11 = a1[1] - *((_QWORD *)&DTSX_HDMI_SPATIAL_ENCODER + 1);
              if ( v11 )
              {
                v12 = *a1 - MULTICHANNEL_SPATIAL_ENCODER;
                if ( *a1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
                  v12 = a1[1] - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
                if ( v12 )
                {
                  v13 = *a1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
                  if ( *a1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
                    v13 = a1[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
                  if ( v13 && (unsigned int)dword_1801D32E8 > 2 )
                  {
                    v15 = -2147418113;
                    v17 = "AudioEncoderIdToRenderingMode";
                    v16 = 490;
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                      (__int64)a1,
                      byte_1801A9B98,
                      a3,
                      a4,
                      &v17,
                      (__int64)&v16,
                      (__int64)&v15);
                  }
                }
              }
              else
              {
                return 7;
              }
            }
            else
            {
              return 6;
            }
          }
          else
          {
            return 5;
          }
        }
        else
        {
          return 4;
        }
      }
      else
      {
        return 3;
      }
    }
    else
    {
      return 2;
    }
  }
  else
  {
    return 1;
  }
  return v4;
}
