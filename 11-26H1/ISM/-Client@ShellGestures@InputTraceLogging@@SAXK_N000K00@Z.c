/*
 * XREFs of ?Client@ShellGestures@InputTraceLogging@@SAXK_N000K00@Z @ 0x18015C7E8
 * Callers:
 *     ?TraceClients@ShellGesturesProcessor@@CAXXZ @ 0x180095760 (-TraceClients@ShellGesturesProcessor@@CAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333@Z @ 0x180007E98 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::ShellGestures::Client(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        bool a5,
        unsigned int a6,
        bool a7,
        bool a8)
{
  int v8; // ebx
  int v10; // edi
  int v11; // esi
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  BOOL v16; // [rsp+60h] [rbp-20h] BYREF
  BOOL v17; // [rsp+64h] [rbp-1Ch] BYREF
  unsigned int v18; // [rsp+68h] [rbp-18h] BYREF
  BOOL v19; // [rsp+6Ch] [rbp-14h] BYREF
  int v20; // [rsp+70h] [rbp-10h] BYREF
  int v21; // [rsp+74h] [rbp-Ch] BYREF
  int v22; // [rsp+78h] [rbp-8h] BYREF
  int v23; // [rsp+7Ch] [rbp-4h] BYREF

  v8 = a4;
  v10 = a3;
  v11 = a2;
  v12 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v12 > 4u && tlgKeywordOn((__int64)v12, 512LL) )
  {
    v18 = a6;
    v19 = a5;
    v16 = a8;
    v17 = a7;
    v20 = v8;
    v21 = v10;
    v22 = v11;
    v23 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v15,
      (__int64)&unk_180225359,
      v13,
      v14,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16);
  }
}
