/*
 * XREFs of ?TelemetryDdiDevice_Removed_@RawInputProvidersTracing@@QEAAXK@Z @ 0x1800D8B08
 * Callers:
 *     ?OnDdiDeviceRemoved@SpatialRimDeviceCollection@@UEAAJK@Z @ 0x1800D6CB0 (-OnDdiDeviceRemoved@SpatialRimDeviceCollection@@UEAAJK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800020DC (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D2FF0 (-Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall RawInputProvidersTracing::TelemetryDdiDevice_Removed_(RawInputProvidersTracing *this, int a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  RawInputProvidersTracing *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = this;
  v3 = RawInputProvidersTracing::Provider((__int64)this);
  if ( *(_DWORD *)v3 > 4u )
  {
    LODWORD(v6) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v3,
      (__int64)&unk_18021597A,
      v4,
      v5,
      (__int64)&v6);
  }
}
