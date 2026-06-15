/*
 * XREFs of ?SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJW4SignalingKeySource@@@Z @ 0x180130884
 * Callers:
 *     ?ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x18012FF10 (-ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ.c)
 *     ?SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z @ 0x180130400 (-SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z.c)
 *     ?SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x180130530 (-SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialA.c)
 *     ?SignalChange@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x180130A30 (-SignalChange@SpatialAudioDevicePropertyWriter@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180061260 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180130838 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SignalChange(__int64 a1, char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  char v5; // cl
  char v6; // cl
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  char v13; // [rsp+40h] [rbp-79h] BYREF
  char v14; // [rsp+41h] [rbp-78h] BYREF
  int v15; // [rsp+44h] [rbp-75h] BYREF
  int v16; // [rsp+48h] [rbp-71h] BYREF
  const CHAR *v17; // [rsp+50h] [rbp-69h] BYREF
  struct tagPROPVARIANT v18; // [rsp+58h] [rbp-61h] BYREF
  struct _tagpropertykey v19; // [rsp+70h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+90h] [rbp-29h] BYREF
  int *v21; // [rsp+B0h] [rbp-9h]
  __int64 v22; // [rsp+B8h] [rbp-1h]
  int *v23; // [rsp+C0h] [rbp+7h]
  __int64 v24; // [rsp+C8h] [rbp+Fh]
  char *v25; // [rsp+D0h] [rbp+17h]
  __int64 v26; // [rsp+D8h] [rbp+1Fh]
  char *v27; // [rsp+E0h] [rbp+27h]
  __int64 v28; // [rsp+E8h] [rbp+2Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  BYTE1(v15) = *(_BYTE *)(a1 + 101);
  LOBYTE(v15) = a2;
  *(_BYTE *)(a1 + 101) = BYTE1(v15) + 1;
  memset(&v18, 0, sizeof(v18));
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  if ( v2 )
    LeaveCriticalSection(v2);
  v18.vt = 2;
  v18.iVal = v15;
  if ( (unsigned int)dword_1801D32E8 > 5 )
  {
    v5 = *(_BYTE *)(a1 + 101);
    LOWORD(v16) = v15;
    v13 = v5;
    v6 = *(_BYTE *)(a1 + 100);
    v27 = &v13;
    v25 = &v14;
    v23 = &v15;
    v21 = &v16;
    v14 = v6;
    LOBYTE(v15) = a2;
    v28 = 1LL;
    v26 = 1LL;
    v24 = 1LL;
    v22 = 2LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1801D32E8, byte_1801A9F86, 0LL, 0LL, 6u, &v20);
  }
  v19 = PKEY_SpatialAudio_Signaling_Key;
  v7 = SpatialAudioDevicePropertyWriter::SetPropertyValue((SpatialAudioDevicePropertyWriter *)a1, &v19, &v18);
  v11 = v7;
  if ( v7 >= 0 )
  {
    *(_DWORD *)(a1 + 96) = 0;
  }
  else if ( (unsigned int)dword_1801D32E8 > 2 )
  {
    v16 = v7;
    v15 = 221;
    v17 = "SpatialAudioDevicePropertyWriter::SignalChange";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      byte_1801A9F54,
      v9,
      v10,
      &v17,
      (__int64)&v15,
      (__int64)&v16);
  }
  return v11;
}
