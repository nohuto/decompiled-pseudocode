/*
 * XREFs of ?SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x180130530
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180130838 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     ?SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJW4SignalingKeySource@@@Z @ 0x180130884 (-SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJW4SignalingKeySource@@@Z.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SetDeviceSettings(
        SpatialAudioDevicePropertyWriter *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // ebx
  int v22; // eax
  __int64 v23; // rdx
  unsigned __int8 *v24; // rdx
  unsigned int i; // r15d
  int v26; // eax
  int v28; // [rsp+40h] [rbp-99h] BYREF
  int v29; // [rsp+44h] [rbp-95h] BYREF
  const CHAR *v30; // [rsp+48h] [rbp-91h] BYREF
  struct tagPROPVARIANT v31; // [rsp+50h] [rbp-89h] BYREF
  struct _tagpropertykey v32; // [rsp+70h] [rbp-69h] BYREF
  int v33; // [rsp+90h] [rbp-49h] BYREF
  __int128 v34; // [rsp+94h] [rbp-45h]
  __int128 v35; // [rsp+A4h] [rbp-35h]
  __int128 v36; // [rsp+B4h] [rbp-25h]
  __int128 v37; // [rsp+C4h] [rbp-15h]
  __int64 v38; // [rsp+D4h] [rbp-5h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  v5 = a4;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v4 )
    LeaveCriticalSection(v4);
  v11 = v5;
  v12 = v5 / 0x342;
  if ( !a2 || v11 != 834 * v12 )
  {
    v21 = -2147024809;
    if ( (unsigned int)dword_1801D32E8 <= 2 )
      return v21;
    v28 = 503;
    v24 = (unsigned __int8 *)&unk_1801A9C14;
LABEL_25:
    v29 = -2147024809;
    goto LABEL_26;
  }
  memset_0(&v33, 0, 0x4CuLL);
  v13 = *(_OWORD *)a2;
  v14 = *((_OWORD *)a2 + 1);
  v31.bstrblobVal.pData = (BYTE *)&v33;
  v34 = v13;
  v33 = 1509949442;
  v15 = *((_OWORD *)a2 + 2);
  v32.pid = 2;
  v35 = v14;
  v16 = *((_OWORD *)a2 + 3);
  v36 = v15;
  v38 = *((_QWORD *)a2 + 8);
  v37 = v16;
  v32.fmtid = (GUID)PKEY_SpatialAudio_Endpoint_Settings;
  *(_OWORD *)&v31.vt = 0LL;
  v31.vt = 65;
  v31.lVal = 76;
  v17 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v32, &v31);
  v21 = v17;
  if ( v17 < 0 )
  {
    if ( (unsigned int)dword_1801D32E8 > 2 )
    {
      v28 = v17;
      v29 = 519;
      v30 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v18,
        byte_1801A9BE2,
        v19,
        v20,
        &v30,
        (__int64)&v29,
        (__int64)&v28);
    }
    return v21;
  }
  memset(&v31, 0, sizeof(v31));
  v32.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Count;
  v31.vt = 2;
  v31.iVal = v12;
  v32.pid = 2;
  v22 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v32, &v31);
  v21 = v22;
  if ( v22 < 0 )
  {
    if ( (unsigned int)dword_1801D32E8 <= 2 )
      return v21;
    v29 = v22;
    v24 = (unsigned __int8 *)&unk_1801A9B34;
    v28 = 526;
LABEL_26:
    v30 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      v24,
      v9,
      v10,
      &v30,
      (__int64)&v28,
      (__int64)&v29);
    return v21;
  }
  if ( (_DWORD)v12 )
  {
    if ( !a3 )
    {
      v21 = -2147024809;
      if ( (unsigned int)dword_1801D32E8 <= 2 )
        return v21;
      v28 = 530;
      v24 = (unsigned __int8 *)&unk_1801A9AFA;
      goto LABEL_25;
    }
    for ( i = 0; i < (unsigned int)v12; ++i )
    {
      v32.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Array;
      *(_OWORD *)&v31.vt = 0LL;
      v32.pid = i + 2;
      v31.vt = 65;
      v31.bstrblobVal.pData = (BYTE *)a3 + 834 * i;
      v31.lVal = 834;
      v26 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v32, &v31);
      v21 = v26;
      if ( v26 < 0 )
      {
        if ( (unsigned int)dword_1801D32E8 <= 2 )
          return v21;
        v29 = v26;
        v24 = (unsigned __int8 *)&unk_1801A9B66;
        v28 = 543;
        goto LABEL_26;
      }
    }
  }
  if ( !*((_DWORD *)this + 24) )
  {
    LOBYTE(v23) = *((_BYTE *)this + 100) - 3;
    SpatialAudioDevicePropertyWriter::SignalChange(this, v23);
  }
  return v21;
}
