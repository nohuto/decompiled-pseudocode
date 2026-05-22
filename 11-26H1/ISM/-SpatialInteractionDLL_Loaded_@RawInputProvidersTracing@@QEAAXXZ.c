/*
 * XREFs of ?SpatialInteractionDLL_Loaded_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800D7F44
 * Callers:
 *     ?EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800D56E0 (-EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800012CC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D2FF0 (-Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall RawInputProvidersTracing::SpatialInteractionDLL_Loaded_(RawInputProvidersTracing *this)
{
  const struct _tlgProvider_t *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = (__int64)this;
  v1 = RawInputProvidersTracing::Provider((__int64)this);
  if ( *(_DWORD *)v1 > 4u && tlgKeywordOn((__int64)v1, 0x400000000000LL) )
  {
    v5 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v2,
      (__int64)&unk_1802158F4,
      v3,
      v4,
      (__int64)&v5);
  }
}
