/*
 * XREFs of ?SonarStart@Mouse@InputTraceLogging@@SAXAEBUtagPOINT@@I@Z @ 0x1402A41BC
 * Callers:
 *     zzzStartSonar @ 0x1402A46E0 (zzzStartSonar.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x140002890 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Mouse::SonarStart(const struct tagPOINT *a1)
{
  __int64 v1; // r8
  _DWORD *v2; // r9
  int v3; // r10d
  _DWORD v4[6]; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+70h] [rbp+18h] BYREF
  int v6; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1403AA9C0, 64LL) )
    {
      v6 = v2[1];
      v4[0] = *v2;
      v5 = v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1403AA9C0,
        (__int64)&unk_14037556B,
        v1,
        (__int64)v2,
        (__int64)v4,
        (__int64)&v6,
        (__int64)&v5);
    }
  }
}
