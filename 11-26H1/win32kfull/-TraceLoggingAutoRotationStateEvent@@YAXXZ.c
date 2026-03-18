/*
 * XREFs of ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1400F87BC
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140090B44 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     QueryAutoRotationState @ 0x1400F9850 (QueryAutoRotationState.c)
 */

void __fastcall TraceLoggingAutoRotationStateEvent(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int AutoRotationState; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 66064);
  if ( v3 )
    v2 = *(_DWORD *)(v3 + 16);
  if ( (unsigned int)dword_1403AAA30 > 5
    && (qword_1403AAA40 & 0x400000000000LL) != 0
    && (qword_1403AAA48 & 0x400000000000LL) == qword_1403AAA48 )
  {
    AutoRotationState = QueryAutoRotationState();
    v7 = v2;
    v8 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA30,
      (__int64)&unk_1403775AD,
      v4,
      v5,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&AutoRotationState);
  }
}
