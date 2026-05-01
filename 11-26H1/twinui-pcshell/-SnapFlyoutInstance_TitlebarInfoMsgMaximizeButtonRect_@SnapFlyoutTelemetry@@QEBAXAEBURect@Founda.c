/*
 * XREFs of ?SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect_@SnapFlyoutTelemetry@@QEBAXAEBURect@Foundation@Windows@winrt@@@Z @ 0x1805C24C0
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync$_ResumeCoro$1 @ 0x1805C2540 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance--TryGetMaximi.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180099B30 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

void __fastcall SnapFlyoutTelemetry::SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect_(
        SnapFlyoutTelemetry *this,
        const struct winrt::Windows::Foundation::Rect *a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // r9
  _DWORD v5[6]; // [rsp+40h] [rbp-18h] BYREF
  SnapFlyoutTelemetry *v6; // [rsp+60h] [rbp+8h] BYREF
  int v7; // [rsp+70h] [rbp+18h] BYREF
  int v8; // [rsp+78h] [rbp+20h] BYREF

  v6 = this;
  v3 = WindowManagementLogging::Provider((__int64)this);
  if ( *(_DWORD *)v3 > 5u )
  {
    LODWORD(v6) = *((_DWORD *)a2 + 3);
    v7 = *((_DWORD *)a2 + 2);
    v8 = *((_DWORD *)a2 + 1);
    v5[0] = *(_DWORD *)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v3,
      byte_180825A1D,
      0LL,
      v4,
      (__int64)v5,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6);
  }
}
