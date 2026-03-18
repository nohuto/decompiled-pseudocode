/*
 * XREFs of ?TraceLoggingDisplayChangedHandler@@YAXHHHI@Z @ 0x14015B374
 * Callers:
 *     ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x14015AF74 (-xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14015B414 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall TraceLoggingDisplayChangedHandler(int a1, int a2, int a3, int a4)
{
  int v4; // [rsp+50h] [rbp-28h] BYREF
  int v5; // [rsp+54h] [rbp-24h] BYREF
  int v6; // [rsp+58h] [rbp-20h] BYREF
  int v7; // [rsp+5Ch] [rbp-1Ch] BYREF
  __int64 v8[3]; // [rsp+60h] [rbp-18h] BYREF

  if ( (unsigned int)dword_1403AAA30 > 5
    && (qword_1403AAA40 & 0x400000000000LL) != 0
    && (qword_1403AAA48 & 0x400000000000LL) == qword_1403AAA48 )
  {
    v6 = a2;
    v8[0] = 0x1000000LL;
    v4 = a4;
    v5 = a3;
    v7 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      a1,
      (unsigned int)&unk_140376B4E,
      a3,
      a4,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)v8);
  }
}
