/*
 * XREFs of ?OnPoStandbyAudioRequestReceived@@YAJW4_PO_STANDBY_AUDIO_POLICY@@@Z @ 0x180112BD0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e8ace741d434386d181e1fd4385cf667__void_::_Do_call @ 0x1800DBB50 (std--_Func_impl_no_alloc__lambda_e8ace741d434386d181e1fd4385cf667__void_--_Do_call.c)
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001BB70 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180040624 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18004F020 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180077610 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE_ea_180077610.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall OnPoStandbyAudioRequestReceived(int a1)
{
  _DWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  __int64 (__fastcall **v6)(); // rcx
  int v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9[8]; // [rsp+38h] [rbp-48h] BYREF

  v2 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v2 > 4u && tlgKeywordOn((__int64)v2, 64LL) )
  {
    v8 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v2,
      byte_1801A7520,
      v3,
      v4,
      (__int64)&v8);
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x10) != 0 )
  {
    v8 = a1;
    v9[2] = (__int64)&v8;
    v9[3] = 4LL;
    McGenEventWrite_EtwEventWriteTransfer((__int64)v2, (__int64)&EVT_Po_AudioStandby_Request, v3, 2, (__int64)v9);
  }
  SerialWorkQueue = GetSerialWorkQueue();
  v6 = off_180177930;
  if ( !a1 )
    v6 = off_180177900;
  v9[0] = (__int64)v6;
  v9[7] = (__int64)v9;
  CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, v9);
  return 0LL;
}
