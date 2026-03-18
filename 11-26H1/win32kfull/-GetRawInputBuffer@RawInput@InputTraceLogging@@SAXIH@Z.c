/*
 * XREFs of ?GetRawInputBuffer@RawInput@InputTraceLogging@@SAXIH@Z @ 0x1400541EC
 * Callers:
 *     NtUserGetRawInputBuffer @ 0x140053C50 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1400F94F0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall InputTraceLogging::RawInput::GetRawInputBuffer(int a1, int a2, int a3)
{
  int v3; // [rsp+50h] [rbp+18h] BYREF
  int v4; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 4
    && (qword_1403AA9D0 & 0x40000) != 0
    && (qword_1403AA9D8 & 0x40000) == qword_1403AA9D8 )
  {
    v3 = a2;
    v4 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1403AA9C0,
      (unsigned int)&unk_140375AF4,
      a3,
      0x40000,
      (__int64)&v4,
      (__int64)&v3);
  }
}
