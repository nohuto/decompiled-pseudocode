/*
 * XREFs of ?TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z @ 0x1800D8A54
 * Callers:
 *     ?OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z @ 0x1800D6A30 (-OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@@Z @ 0x180003884 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D2FF0 (-Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x1800D4344 (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 *     ??1SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@XZ @ 0x1800D4884 (--1SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@XZ.c)
 */

void __fastcall RawInputProvidersTracing::TelemetryDdiDevice_Added_(
        __int64 a1,
        int a2,
        int a3,
        const unsigned __int16 *a4)
{
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+40h] [rbp-68h] BYREF
  int v12; // [rsp+44h] [rbp-64h] BYREF
  const WCHAR *v13; // [rsp+48h] [rbp-60h] BYREF
  HSTRING v14[8]; // [rsp+50h] [rbp-58h] BYREF

  RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties(
    (RawInputProvidersTracing::SpatialInputTelemetryProperties *)v14,
    a4);
  v8 = RawInputProvidersTracing::Provider(v7);
  if ( *(_DWORD *)v8 > 4u )
  {
    v13 = a4;
    v11 = a3;
    v12 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (__int64)v8,
      (__int64)&unk_180215930,
      v9,
      v10,
      (__int64)&v12,
      (__int64)&v11,
      &v13);
  }
  RawInputProvidersTracing::SpatialInputTelemetryProperties::~SpatialInputTelemetryProperties(v14);
}
