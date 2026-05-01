/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@UShellHotkeyEventArgs@2345@@Foundation@Windows@@V_lambda_61cd3e919b9575bbec60cffc876b0307_@@$0?0PEAUIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@3@UShellHotkeyEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@PEAUIShellHotkeyRegistration@2345@@Internal@Foundation@Windows@@UShellHotkeyEventArgs@WindowManagementEvents@Shell@24@@Foundation@Windows@@EAAJPEAUIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@3@UShellHotkeyEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@UShellHotkeyEventArgs@789Windows@@@Z @ 0x1806268B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0CE@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CE@$$CBG@Z @ 0x18061DCA4 (--$CopilotHotkey_Output_Debug_String@AEAY0CE@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CE@$$C.c)
 *     ?OnHotkeyInvoke@CopilotHotkeyManager@@QEAAXW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x1806335CC (-OnHotkeyInvoke@CopilotHotkeyManager@@QEAAXW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration *,Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration *>,Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs>::*)(Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration *,Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration *,Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs>,_lambda_61cd3e919b9575bbec60cffc876b0307_,-1,Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration *,Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs>::Invoke(
        __int64 a1)
{
  CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[36]>((const WCHAR *)a1);
  CopilotHotkeyManager::OnHotkeyInvoke(*(_QWORD *)(a1 + 16), 112LL);
  return 0LL;
}
