/*
 * XREFs of ?IsSpatialAudioStreamAvailable@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEBUtagPROPVARIANT@@@Z @ 0x18012E200
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyIndexForMetadataFormatID@SpatialAudioDevicePropertyReader@@AEAAJAEBU_GUID@@PEAGPEAI@Z @ 0x18012D7F0 (-GetPropertyIndexForMetadataFormatID@SpatialAudioDevicePropertyReader@@AEAAJAEBU_GUID@@PEAGPEAI@.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::IsSpatialAudioStreamAvailable(
        SpatialAudioDevicePropertyReader *this,
        const struct _GUID *a2,
        const struct tagPROPVARIANT *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  const struct _GUID *puuid; // rdx
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v7 = -2004287225;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v3 )
    LeaveCriticalSection(v3);
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_bab5f473_b423_477b_85f5_b5a332a04153.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_bab5f473_b423_477b_85f5_b5a332a04153.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_bab5f473_b423_477b_85f5_b5a332a04153.Data4;
  if ( v8 )
  {
    v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e08deef9_5363_406e_9fdc_080ee247bbe0.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e08deef9_5363_406e_9fdc_080ee247bbe0.Data1 )
      v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e08deef9_5363_406e_9fdc_080ee247bbe0.Data4;
    if ( v9 )
    {
      v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_bbc9c907_48d5_4a2e_a0c7_f7f0d67c1fb1.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_bbc9c907_48d5_4a2e_a0c7_f7f0d67c1fb1.Data1 )
        v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_bbc9c907_48d5_4a2e_a0c7_f7f0d67c1fb1.Data4;
      if ( !v11 )
      {
        v7 = -2147024809;
        if ( a3 )
        {
          if ( a3->vt == 72 )
          {
            puuid = a3->puuid;
            v14 = 0;
            return (unsigned int)SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID(
                                   this,
                                   puuid,
                                   0LL,
                                   (const CHAR *)&v14);
          }
        }
      }
    }
    else if ( !a3 )
    {
      v10 = *(_QWORD *)((char *)this + 108) - MICROSOFT_HRTF_SPATIAL_ENCODER;
      if ( !v10 )
        v10 = *(_QWORD *)((char *)this + 116) - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
      if ( !v10 )
        return 0;
    }
  }
  else
  {
    return a3 != 0LL ? 0x88890107 : 0;
  }
  return v7;
}
