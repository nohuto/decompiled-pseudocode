/*
 * XREFs of ?ReceiveRawInput@ISM@InputTraceLogging@@SAXPEBUDeviceInfo@@@Z @ 0x180044B24
 * Callers:
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x18004486C (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18000BD70 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x1800737A4 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 */

void __fastcall InputTraceLogging::ISM::ReceiveRawInput(const struct DeviceInfo *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // [rsp+48h] [rbp+10h] BYREF
  const unsigned __int16 *v6; // [rsp+50h] [rbp+18h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u )
  {
    if ( (unsigned __int8)tlgKeywordOn(v2, 512LL, v2) )
    {
      v5 = *(_DWORD *)a1;
      v6 = (const unsigned __int16 *)InputTraceLogging::InputTypeToString(*((unsigned int *)a1 + 1));
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        v3,
        (__int64)&unk_18021528E,
        v3,
        v4,
        &v6,
        (__int64)&v5);
    }
  }
}
