/*
 * XREFs of ?AllocateHidData_NoTarget@RawInput@InputTraceLogging@@SAXQEAUtagQ@@PEAX@Z @ 0x140296CF8
 * Callers:
 *     AllocateHidData @ 0x140090364 (AllocateHidData.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1400029C0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::RawInput::AllocateHidData_NoTarget(struct tagQ *const a1, void *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1403AA9C0, 0x40000LL) )
    {
      v5 = v3;
      v6 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)&dword_1403AA9C0,
        (__int64)&unk_1403735EE,
        v2,
        v3,
        (__int64)&v6,
        (__int64)&v5);
    }
  }
}
