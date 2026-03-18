/*
 * XREFs of ?CopyHidData@RawInput@InputTraceLogging@@SAXQEAUtagHIDDATA@@0KPEAUHWND__@@@Z @ 0x14029A878
 * Callers:
 *     CopyHidData @ 0x14029AA94 (CopyHidData.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1400923F0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::RawInput::CopyHidData(
        struct tagHIDDATA *const a1,
        struct tagHIDDATA *const a2,
        __int64 a3,
        HWND a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r10d
  __int64 *v8; // r11
  int v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+48h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp-10h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1403AA9C0, 0x40000LL) )
    {
      v11 = *v8;
      v12 = *(_QWORD *)a1;
      v10 = v6;
      v9 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)&dword_1403AA9C0,
        byte_140373542,
        v5,
        v6,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v9,
        (__int64)&v10);
    }
  }
}
