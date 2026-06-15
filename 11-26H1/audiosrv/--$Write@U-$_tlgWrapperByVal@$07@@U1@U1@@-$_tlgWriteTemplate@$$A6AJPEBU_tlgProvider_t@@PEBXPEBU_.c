/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180061644
 * Callers:
 *     ?DisconnectFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18005AAA0 (-DisconnectFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800614D0 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$00@@AEAAJPEA_N@Z @ 0x1800BC8B4 (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer@$00@@AEAAJPEA_N@Z.c)
 *     ?SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z @ 0x1800D54F8 (-SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z.c)
 *     ?ConnectToRightSubmix@CBridgeStreamInstanceProxy@@UEAAJPEAUISubmixProxy@@@Z @ 0x1800FABE0 (-ConnectToRightSubmix@CBridgeStreamInstanceProxy@@UEAAJPEAUISubmixProxy@@@Z.c)
 *     ?DisconnectFromRightSubmix@CBridgeStreamInstanceProxy@@UEAAJXZ @ 0x1800FD020 (-DisconnectFromRightSubmix@CBridgeStreamInstanceProxy@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // [rsp+30h] [rbp-41h]
  _DWORD v9[2]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v10; // [rsp+40h] [rbp-31h]
  unsigned __int16 *v11; // [rsp+50h] [rbp-21h] BYREF
  int v12; // [rsp+58h] [rbp-19h]
  int v13; // [rsp+5Ch] [rbp-15h]
  unsigned __int8 *v14; // [rsp+60h] [rbp-11h]
  int v15; // [rsp+68h] [rbp-9h]
  int v16; // [rsp+6Ch] [rbp-5h]
  __int64 v17; // [rsp+70h] [rbp-1h]
  __int64 v18; // [rsp+78h] [rbp+7h]
  __int64 v19; // [rsp+80h] [rbp+Fh]
  __int64 v20; // [rsp+88h] [rbp+17h]
  __int64 v21; // [rsp+90h] [rbp+1Fh]
  __int64 v22; // [rsp+98h] [rbp+27h]

  v21 = a7;
  v19 = a6;
  v17 = a5;
  v9[0] = *a2 << 24;
  v9[1] = *(unsigned __int16 *)(a2 + 1);
  v10 = *(_QWORD *)(a2 + 3);
  v11 = *(unsigned __int16 **)(a1 + 8);
  v22 = 8LL;
  v20 = 8LL;
  v18 = 8LL;
  v12 = *v11;
  v15 = *(unsigned __int16 *)(a2 + 11);
  v14 = a2 + 11;
  v13 = 2;
  v16 = 1;
  LODWORD(v8) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v9, 0LL, 0LL, 5, &v11, v8);
}
