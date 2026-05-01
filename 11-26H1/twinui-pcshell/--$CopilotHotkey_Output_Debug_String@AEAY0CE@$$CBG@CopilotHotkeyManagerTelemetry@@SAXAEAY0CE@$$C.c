/*
 * XREFs of ??$CopilotHotkey_Output_Debug_String@AEAY0CE@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CE@$$CBG@Z @ 0x18061DCA4
 * Callers:
 *     ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@UShellHotkeyEventArgs@2345@@Foundation@Windows@@V_lambda_61cd3e919b9575bbec60cffc876b0307_@@$0?0PEAUIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@3@UShellHotkeyEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@PEAUIShellHotkeyRegistration@2345@@Internal@Foundation@Windows@@UShellHotkeyEventArgs@WindowManagementEvents@Shell@24@@Foundation@Windows@@EAAJPEAUIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@3@UShellHotkeyEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@UShellHotkeyEventArgs@789Windows@@@Z @ 0x1806268B0 (-Invoke@-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVShellHotkeyRegistration@WindowManagemen.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18016F55C (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@CopilotHotkeyManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180633BCC (-Provider@CopilotHotkeyManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[36]>(
        const WCHAR *a1)
{
  const struct _tlgProvider_t *v1; // rax
  __int64 v2; // r9
  const WCHAR *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  v1 = CopilotHotkeyManagerTelemetry::Provider();
  if ( *(_DWORD *)v1 > 5u )
  {
    v4 = L"OnHotkeyInvoke() hotkeyHWKeyHandler";
    LODWORD(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                    (__int64)v1,
                    byte_18082DA1C,
                    0LL,
                    v2,
                    &v4);
  }
  return (int)v1;
}
