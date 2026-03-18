/*
 * XREFs of ?ThrottleRawInput@Mouse@InputTraceLogging@@SAXPEAUHWND__@@_K1@Z @ 0x1401C780C
 * Callers:
 *     ?ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x140237898 (-ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1401C7884 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

void __fastcall InputTraceLogging::Mouse::ThrottleRawInput(HWND a1, __int64 a2, __int64 a3, int a4)
{
  HWND v4; // [rsp+40h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp-10h] BYREF
  __int64 v6; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14039BB50 > 4 && (qword_14039BB60 & 0x40) != 0 && (qword_14039BB68 & 0x40) == qword_14039BB68 )
  {
    v4 = a1;
    v5 = a2;
    v6 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_14039BB50,
      (unsigned int)&unk_140366D0A,
      a3,
      a4,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v6);
  }
}
