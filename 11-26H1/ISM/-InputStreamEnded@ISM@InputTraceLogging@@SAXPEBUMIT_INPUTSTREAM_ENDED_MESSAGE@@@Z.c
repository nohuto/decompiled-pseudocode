/*
 * XREFs of ?InputStreamEnded@ISM@InputTraceLogging@@SAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z @ 0x180030310
 * Callers:
 *     ?ProcessInputStreamEndedMessage@Win32kInterop@@AEAAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z @ 0x180030080 (-ProcessInputStreamEndedMessage@Win32kInterop@@AEAAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x180004E50 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1800F25B0 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::ISM::InputStreamEnded(const struct MIT_INPUTSTREAM_ENDED_MESSAGE *a1)
{
  const struct _tlgProvider_t *v2; // rax
  unsigned int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF
  int v7; // [rsp+68h] [rbp+10h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  const char *v9; // [rsp+78h] [rbp+20h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u
    && (*((_DWORD *)v2 + 4) & 0x200LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x200LL) == *((_QWORD *)v2 + 3) )
  {
    v3 = *((_DWORD *)a1 + 2);
    v7 = *((_DWORD *)a1 + 4);
    v8 = *((_DWORD *)a1 + 3);
    v9 = InputTraceLogging::PointerTypeToString(v3);
    v6[0] = *(_QWORD *)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      (__int64)&unk_18021737D,
      v4,
      v5,
      (__int64)v6,
      (const unsigned __int16 **)&v9,
      (__int64)&v8,
      (__int64)&v7);
  }
}
