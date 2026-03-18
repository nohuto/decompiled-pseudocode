/*
 * XREFs of ?DisplayChange@Power@InputTraceLogging@@SAXAEBU_POWER_DISPLAY_STATE@@@Z @ 0x1401DA944
 * Callers:
 *     EtwTraceDisplayChange @ 0x1400EABC0 (EtwTraceDisplayChange.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140189C6C (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?MonitorDisplayStateToString@InputTraceLogging@@CAPEBDW4_MONITOR_DISPLAY_STATE@@@Z @ 0x1401D5580 (-MonitorDisplayStateToString@InputTraceLogging@@CAPEBDW4_MONITOR_DISPLAY_STATE@@@Z.c)
 */

void __fastcall InputTraceLogging::Power::DisplayChange(const struct _POWER_DISPLAY_STATE *a1)
{
  bool v1; // al
  int *v2; // r8
  int v3; // edx
  enum _MONITOR_DISPLAY_STATE v4; // ecx
  const char *v5; // rax
  __int64 v6; // r8
  enum _MONITOR_DISPLAY_STATE v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  const char *v10; // [rsp+40h] [rbp-18h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF
  const char *v13; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4 )
  {
    v1 = tlgKeywordOn((__int64)&dword_1402A9E40, 2LL);
    v3 = 0;
    if ( v1 )
    {
      v4 = v2[17];
      LOBYTE(v3) = *((_WORD *)v2 + 38) != 0;
      v12 = *v2;
      v11 = v3;
      v5 = InputTraceLogging::MonitorDisplayStateToString(v4);
      v7 = *(_DWORD *)(v6 + 72);
      v13 = v5;
      v10 = InputTraceLogging::MonitorDisplayStateToString(v7);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1402A9E40,
        byte_140282CC4,
        v8,
        v9,
        (void **)&v10,
        (void **)&v13,
        (__int64)&v12,
        (__int64)&v11);
    }
  }
}
