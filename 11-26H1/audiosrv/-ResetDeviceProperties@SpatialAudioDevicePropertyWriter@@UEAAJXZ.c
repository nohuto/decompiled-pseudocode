/*
 * XREFs of ?ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x18012FF10
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180130838 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     ?SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJW4SignalingKeySource@@@Z @ 0x180130884 (-SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJW4SignalingKeySource@@@Z.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::ResetDeviceProperties(SpatialAudioDevicePropertyWriter *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edi
  unsigned __int8 *v8; // rdx
  __int64 v9; // rdx
  struct _tagpropertykey v11; // [rsp+40h] [rbp-40h] BYREF
  struct tagPROPVARIANT v12; // [rsp+60h] [rbp-20h] BYREF
  char v13; // [rsp+B0h] [rbp+30h] BYREF
  int v14; // [rsp+B8h] [rbp+38h] BYREF
  int v15; // [rsp+C0h] [rbp+40h] BYREF
  const CHAR *v16; // [rsp+C8h] [rbp+48h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v1 )
    LeaveCriticalSection(v1);
  v13 = 0;
  memset(&v12, 0, sizeof(v12));
  v12.iVal = 0;
  v12.vt = 2;
  v11.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Count;
  v11.pid = 2;
  v3 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v11, &v12);
  v7 = v3;
  if ( v3 >= 0 )
  {
    *(_OWORD *)&v12.vt = 0LL;
    v12.vt = 65;
    v12.lVal = 1;
    v12.bstrblobVal.pData = (BYTE *)&v13;
    v11.pid = 2;
    v11.fmtid = (GUID)PKEY_SpatialAudio_Metadata_DeviceProperties;
    v3 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v11, &v12);
    v7 = v3;
    if ( v3 < 0 )
    {
      if ( (unsigned int)dword_1801D32E8 <= 2 )
        return v7;
      v15 = 265;
      v8 = (unsigned __int8 *)&unk_1801A9EB6;
      goto LABEL_6;
    }
    if ( !*((_DWORD *)this + 24) )
    {
      LOBYTE(v9) = *((_BYTE *)this + 100) - 2;
      SpatialAudioDevicePropertyWriter::SignalChange(this, v9);
    }
  }
  else if ( (unsigned int)dword_1801D32E8 > 2 )
  {
    v15 = 256;
    v8 = (unsigned __int8 *)&unk_1801A9EE8;
LABEL_6:
    v14 = v3;
    v16 = "SpatialAudioDevicePropertyWriter::ResetDeviceProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      v8,
      v5,
      v6,
      &v16,
      (__int64)&v15,
      (__int64)&v14);
  }
  return v7;
}
