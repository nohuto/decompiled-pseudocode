/*
 * XREFs of ?SwitchItemInvoked_@MultitaskingViewTelemetry@@QEBAX_KIPEBG@Z @ 0x1804C4D78
 * Callers:
 *     ?InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804C4BB0 (-InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x180009F58 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTempl.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?CensorAppID@MultitaskingViewTelemetry@@SAPEBGPEBG@Z @ 0x1804B375C (-CensorAppID@MultitaskingViewTelemetry@@SAPEBGPEBG@Z.c)
 */

void __fastcall MultitaskingViewTelemetry::SwitchItemInvoked_(
        MultitaskingViewTelemetry *this,
        __int64 a2,
        int a3,
        const unsigned __int16 *a4)
{
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  const unsigned __int16 *v11; // [rsp+48h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h] BYREF
  MultitaskingViewTelemetry *v13; // [rsp+70h] [rbp+8h] BYREF

  v13 = this;
  v7 = WindowManagementLogging::Provider();
  v8 = (__int64)v7;
  if ( *(_DWORD *)v7 > 5u )
  {
    if ( tlgKeywordOn((__int64)v7, 0x200000000000LL) )
    {
      v11 = MultitaskingViewTelemetry::CensorAppID(a4);
      LODWORD(v13) = a3;
      v12 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        v8,
        (__int64)&unk_1807DB266,
        v9,
        v10,
        (__int64)&v12,
        (__int64)&v13,
        &v11);
    }
  }
}
