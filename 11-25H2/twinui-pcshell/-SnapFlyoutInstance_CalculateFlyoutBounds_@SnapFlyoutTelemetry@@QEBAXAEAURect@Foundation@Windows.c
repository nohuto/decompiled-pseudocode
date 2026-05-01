/*
 * XREFs of ?SnapFlyoutInstance_CalculateFlyoutBounds_@SnapFlyoutTelemetry@@QEBAXAEAURect@Foundation@Windows@winrt@@W4FlyoutBoundsSource@SnapComponentTelemetry@@@Z @ 0x18059E114
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_ResumeCoro$1 @ 0x18059D0C0 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_18059D0C0.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333@Z @ 0x18008E1D4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 */

int __fastcall SnapFlyoutTelemetry::SnapFlyoutInstance_CalculateFlyoutBounds_(__int64 a1, int *a2, int a3)
{
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  int v9; // [rsp+50h] [rbp-18h] BYREF
  int v10; // [rsp+54h] [rbp-14h] BYREF
  _DWORD v11[4]; // [rsp+58h] [rbp-10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  int v13; // [rsp+88h] [rbp+20h] BYREF

  v12 = a1;
  v5 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v5 > 5u )
  {
    LODWORD(v12) = a2[3];
    v13 = a2[2];
    v9 = a2[1];
    v10 = *a2;
    v11[0] = a3;
    LODWORD(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)v5,
                    byte_1807E9CF9,
                    v6,
                    v7,
                    (__int64)v11,
                    (__int64)&v10,
                    (__int64)&v9,
                    (__int64)&v13,
                    (__int64)&v12);
  }
  return (int)v5;
}
