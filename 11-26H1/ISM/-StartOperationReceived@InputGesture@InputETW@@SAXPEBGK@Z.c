/*
 * XREFs of ?StartOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z @ 0x1801469BC
 * Callers:
 *     ?StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x1801468F0 (-StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClie.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180006C28 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800114D8 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x1800137D0 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall InputETW::InputGesture::StartOperationReceived(const unsigned __int16 *a1, unsigned int a2)
{
  __int64 v2; // rbx
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  const WCHAR *v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  if ( InputETW::IsEnabled() )
  {
    v4 = InputETW::Provider();
    if ( *(_DWORD *)v4 > 5u && tlgKeywordOn((__int64)v4, 1LL) )
    {
      v8 = v2;
      v9 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        v5,
        (__int64)&unk_180221DE9,
        v6,
        v7,
        &v9,
        (__int64)&v8);
    }
  }
}
